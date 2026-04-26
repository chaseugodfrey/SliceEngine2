#include <iostream>
#define RGFW_IMPLEMENTATION
#include <RGFW.h>

#include "Utilities/Logger.h"

int main()
{
    // init rgfw
    RGFW_init();

    // get mon mode
    auto mon = RGFW_getPrimaryMonitor();
    auto mode = mon->mode;
    int width = mode.w, height = mode.h;

    std::cout << mode.w << " " << mode.h << std::endl;
    
    RGFW_window* win = RGFW_createWindow("My RGFW Window", 0, 0, width, height, RGFW_windowCenter);

    while (RGFW_window_shouldClose(win) == RGFW_FALSE) 
    {
        RGFW_pollEvents();


        if (RGFW_isKeyPressed(RGFW_keySpace))
        {
            RGFW_window_close(win);
        }
    }

    return 0;
}