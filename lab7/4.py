# press 'r' - change corner roundness of icons/images of songs
# press 'esc' - change theme dark/light
# press 'K_UP', 'K_DOWN' - changing in position(through songs)
# press 'K_LEFT', 'K_RIGHT' - change volume of music
# press 'RETURN'/'ENTER' - run music
# press 'SPACE' - pause/unpause music
# press '0' if we need to return order of initial music list
# press '1' if we wanna shuffle music list
# press '7' if reset any repeat
# press '8' if need one repeat
# press '9' if need looped repeat
# press 'F10' run/stop removing sound effect

import pygame, os, re, random, time
from mutagen.mp3 import MP3
pygame.init()

screen_w = 800
screen_h = 370
win = pygame.display.set_mode((screen_w, screen_h))
pygame.display.set_caption('Musics')

theme = 1 # give a theme, to change PRESS 'ESC' - 'ESCAPE'
rounded_icons = False # to change PRESS LETTER 'r'

#for saving information i use lists, list[0] - dark theme information.
# list[1] - light theme information

# needed colors
background_color = [(20, 20, 20), (220, 220, 220)]
foreground_color = [(34, 34, 34), (255, 255, 255)]

selected_color = [(51, 51, 51), (220, 220, 220)]
song_color = [(218, 218, 218), (0, 0, 0)]
author_time_color = [(120, 120, 120), (137, 145, 144)]

line_background_color = [(67, 67, 67), (220, 220, 220)]
line_middle_color = [(120, 120, 120), (167, 174, 174)]
line_foreground_color = [(218, 218, 220), (31, 94, 216)]

main_path = r'C:\Users\ННЛОТ\Desktop\subjects\sem1\labs\PP2_2024spring\lab_7\music'
get_path = lambda x: main_path  + '\\addition\\' + x 
# run/stop images:
run5 = pygame.image.load(get_path('run7.jpg'))
stop5 = pygame.image.load(get_path('stop7.jpg'))
run4 = pygame.image.load(get_path('run6.jpg'))
stop4 = pygame.image.load(get_path('stop6.jpg'))

run_image = [run5, run4]
stop_image = [stop5, stop4]

# sound icon images
sound1 = pygame.image.load(get_path('sound1.jpg'))
sound_off1 = pygame.image.load(get_path('sound_off5.jpg'))
sound2 = pygame.image.load(get_path('sound2.jpg'))
sound_off2 = pygame.image.load(get_path('sound_off7.jpg'))

sound = [sound1, sound2]
sound_off = [sound_off1, sound_off2]

# shuffle button images:
shuffle_off1 = pygame.image.load(get_path('buttons_shuf_rep\\shuffle_l12.jpg'))
shuffle_off2 = pygame.image.load(get_path('buttons_shuf_rep\\shuffle_n12.jpg'))
shuffle_on1 = pygame.image.load(get_path('buttons_shuf_rep\\shuffle_l22.jpg'))
shuffle_on2 = pygame.image.load(get_path('buttons_shuf_rep\\shuffle_n22.jpg'))

shuffle_on = [shuffle_on2, shuffle_on1]
shuffle_off = [shuffle_off2, shuffle_off1]

# repeat indicator images:
repeat_0_n = pygame.image.load(get_path('buttons_shuf_rep\\repeat_n12.jpg'))
repeat_0_l = pygame.image.load(get_path('buttons_shuf_rep\\repeat_l12.jpg'))
repeat_1_n = pygame.image.load(get_path('buttons_shuf_rep\\repeat_n22.jpg'))
repeat_1_l = pygame.image.load(get_path('buttons_shuf_rep\\repeat_l22.jpg'))
repeat_inf_n = pygame.image.load(get_path('buttons_shuf_rep\\repeat_n32.jpg'))
repeat_inf_l = pygame.image.load(get_path('buttons_shuf_rep\\repeat_l32.jpg'))

repeat_0 = [repeat_0_n, repeat_0_l]
repeat_1 = [repeat_1_n, repeat_1_l]
repeat_inf = [repeat_inf_n, repeat_inf_l]

# end of song:
SONG_END = pygame.USEREVENT + 1 # custom event type named 'SONG_END'
pygame.mixer.music.set_endevent(SONG_END) # sets the custom event SONG_END to be triggered when the music playback ends. 
# It registers the custom event so that Pygame will generate this event when the music finishes playing

# give icons of theme
moon = pygame.image.load(get_path('moon5.png'))
moon = pygame.transform.scale(moon, (30, 30))
sun = pygame.image.load(get_path('sun2.png'))
sun = pygame.transform.scale(sun, (30, 30))
theme_icon = [moon, sun]
#print moon if dark theme, otherwise sun