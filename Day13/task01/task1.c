/*
** EPITECH PROJECT, 2021
** TASK1
** File description:
** Display a window
*/
#include <SFML/Graphics.h>
#include "../framebuffer.h"
#include <stdlib.h>

int main(void)
{
    sfVideoMode mode = {800, 600};
    sfEvent event;
    sfRenderWindow *win = sfRenderWindow_create(mode, "Task1", sfClose, NULL);

    while (sfRenderWindow_isOpen(win)) {
        while (sfRenderWindow_pollEvent(win, &event))
            if (event.type == sfEvtClosed)
                sfRenderWindow_close(win);
        sfRenderWindow_display(win);
    }
}
