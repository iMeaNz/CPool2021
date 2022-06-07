/*
** EPITECH PROJECT, 2021
** TASK2
** File description:
** Display pixels
*/
#include <SFML/Graphics.h>
#include "../framebuffer.h"
#include <stdlib.h>

framebuffer_t *framebuffer_create(unsigned int width, unsigned int height)
{
    framebuffer_t *buff = malloc(sizeof(framebuffer_t) * 1000);
    sfColor *pixels = malloc(sizeof(sfColor) * width * height);
    buff->height = height;
    buff->width = width;
    buff->px = pixels;
    return buff;
}

void  draw_square(framebuffer_t *framebuffer, sfVector2u position,
                    unsigned int size, sfColor color)
{
    for(int x = 800 * position.x; x < 800 * (position.x + size); x += 800)
        for(int y = position.y; y < position.y + size; y++)
            framebuffer->px[x + y] = color;
}

int main(void)
{
    sfVideoMode mode = {800, 600};
    sfEvent event;
    sfRenderWindow *win = sfRenderWindow_create(mode, "Task3", sfClose, NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *text = sfTexture_create(800, 600);
    framebuffer_t *buff = framebuffer_create(800 , 600);
    sfVector2u pos = {100, 100};

    sfSprite_setTexture(sprite, text, sfTrue);
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        draw_square(buff, pos, 10, sfBlue);
        sfRenderWindow_clear(win, sfBlack);
        sfTexture_updateFromPixels(text, (sfUint8*)buff->px, 800, 600, 0, 0);
        sfRenderWindow_drawSprite(win, sprite, NULL);
        sfRenderWindow_display(win);
    }
}
