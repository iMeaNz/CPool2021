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

void put_pixel(framebuffer_t *framebuffer, unsigned int x,
                unsigned int y, sfColor color)
{
    framebuffer->px[800 * x + y] = color;
}

void put_pixels(framebuffer_t *buff)
{
    put_pixel(buff, 10, 10, sfRed);
    put_pixel(buff, 100, 100, sfRed);
    put_pixel(buff, 250, 400, sfRed);
}

int main(void)
{
    sfVideoMode mode = {800, 600};
    sfEvent event;
    sfRenderWindow *win = sfRenderWindow_create(mode, "Task2", sfClose, NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *text = sfTexture_create(800, 600);
    framebuffer_t *buff = framebuffer_create(800 , 600);

    sfSprite_setTexture(sprite, text, sfTrue);
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        put_pixels(buff);
        sfRenderWindow_clear(win, sfBlack);
        sfTexture_updateFromPixels(text, (sfUint8*)buff->px, 800, 600, 0, 0);
        sfRenderWindow_drawSprite(win, sprite, NULL);
        sfRenderWindow_display(win);
    }
}
