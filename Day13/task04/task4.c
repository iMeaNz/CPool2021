/*
** EPITECH PROJECT, 2021
** TASK2
** File description:
** Display pixels
*/
#include <SFML/Graphics.h>
#include "../framebuffer.h"
#include <stdlib.h>

int main(void)
{
    sfVideoMode mode = {800, 600};
    sfEvent event;
    sfRenderWindow *win = sfRenderWindow_create(mode, "Task4", sfClose, NULL);
    sfSprite *sprite = sfSprite_create();
    sfTexture *text = sfTexture_createFromFile("Pornhub-logo.bmp", NULL);
    sfVector2f pos = {0, 0};
    sfVector2f scale = {0.3, 0.3};

    sfSprite_setScale(sprite, scale);
    sfSprite_setPosition(sprite, pos);
    sfSprite_setTexture(sprite, text, sfFalse);
    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        sfRenderWindow_clear(win, sfBlack);
        sfRenderWindow_drawSprite(win, sprite, NULL);
        sfRenderWindow_display(win);
    }
}
