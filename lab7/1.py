import pygame
from time import localtime as now 
pygame.init()
minute = second = 0

def get_time():
    global minute, second
    minute, second = now().tm_min, now().tm_sec
get_time()

screen_h = 575
screen_w = 800
win = pygame.display.set_mode((screen_w, screen_h))
pygame.display.set_caption('Mouse')


img_main = pygame.image.load('images\\mainclock.png')
img_main = pygame.transform.scale(img_main, (screen_w, screen_h))
img_left = pygame.image.load('images\\leftarm.png')
img_left = pygame.transform.scale(img_left, (500, 300))
img_right = pygame.image.load('images\\rightarm.png')
img_right = pygame.transform.scale(img_right, (500, 300))

def print_img_by_degree(image, degree): 
    image = pygame.transform.rotate(image, degree) 
    rect = image.get_rect() 
    rect.center = win.get_rect().center 
    win.blit(image, rect)



clock = pygame.time.Clock()
run = 1

while run:
    for event in pygame.event.get():
        if event.type == pygame.QUIT: 
            run = 0
    win.blit(img_main, (0, 0))
    get_time()
    print_img_by_degree(img_left, -second*6 - (0.7 if second>30 else +1.2)) 
    print_img_by_degree(img_right, -minute*6 -40) 
    
    
    pygame.display.update()
    clock.tick(60)