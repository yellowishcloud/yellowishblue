import pygame
import os

class MusicPlayer:
    def __init__(self):
        pygame.init()
        pygame.mixer.init()
        self.playlist = []  
        self.current_index = 0  
        self.playing = False  

    def load_playlist(self, directory):
        
        self.playlist = [os.path.join(directory, f) for f in os.listdir(directory) if f.endswith('.mp3')]

    def play(self):
        
        pygame.mixer.music.load(self.playlist[self.current_index])
        pygame.mixer.music.play()
        self.playing = True

    def stop(self):
        
        pygame.mixer.music.stop()
        self.playing = False

    def next_song(self):
        
        self.current_index = (self.current_index + 1) % len(self.playlist)
        self.play()

    def previous_song(self):
        
        self.current_index = (self.current_index - 1) % len(self.playlist)
        self.play()

player = MusicPlayer()

player.load_playlist('music\\1.mp3')

pygame.init()


pygame.key.set_repeat(200, 50)  


running = True
while running:
    for event in pygame.event.get():
        if event.type == pygame.QUIT:
            running = False
        elif event.type == pygame.KEYDOWN:
            if event.key == pygame.K_SPACE:
                if player.playing:
                    player.stop()
                else:
                    player.play()
            elif event.key == pygame.K_RIGHT:
                player.next_song()
            elif event.key == pygame.K_LEFT:
                player.previous_song()

pygame.quit()
