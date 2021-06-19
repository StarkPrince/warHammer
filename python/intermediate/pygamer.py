import pygame
import random


class Blob:
    def __init__(self,color):
        self.color = color
        self.x = random.randrange(0,width)
        self.y = random.randrange(0,height)
        self.size = random.randrange(4,5)

    def move(self):
        self.x += random.randrange(-3,5)
        self.y += random.randrange(-3,5)

        if self.x<0:
            self.x = 0
        elif self.x > width:
            self.x = width

        if self.y<0:
            self.y = 0
        elif self.y > height:
            self.y = height

starting_blobs = 80

height = 600
width = 800
white = (255,255,255)

game_display = pygame.display.set_mode((width,height))
pygame.display.set_caption("Blob world")
clock = pygame.time.Clock()




def draw_environment(blob_dict):
    game_display.fill(white)
    for blob_id in blob_dict:
        blob = blob_dict[blob_id]
        pygame.draw.circle(game_display, blob.color , [blob.x,blob.y], blob.size)
        blob.move()
    pygame.display.update()

def main():
    blobs = dict(enumerate([Blob(tuple(random.randint(0,255) for _ in range(3))) for _ in range(starting_blobs)]))
    while True:
        for event in pygame.event.get():
            if event.type == pygame.QUIT:
                pygame.quit()
                quit()
        draw_environment(blobs)
        clock.tick(60)

if __name__ == '__main__':
    main()