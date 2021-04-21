//
//  Screen.hpp
//  Particle
//
//  Created by Shaleen Goel on 2/5/21.
//  Copyright © 2021 Shaleen Goel. All rights reserved.
//

#ifndef Screen_hpp
#define Screen_hpp

#include <stdio.h>
#include <SDL2/SDL.h>


namespace caveofprogramming {
    
    class Screen {
    public:
        const static int SCREEN_WIDTH = 800;
        const static int SCREEN_HEIGHT = 600;
    
    private:
        SDL_Window *m_window;
        SDL_Renderer *m_renderer;
        SDL_Texture *m_texture;
        Uint32 *m_buffer1;
        Uint32 *m_buffer2;

        
    public:
        Screen();
        bool init();
        bool processEvents();
        void close();
        void update();
        void setPixel(int x, int y, Uint8 red, Uint8 green, Uint8 blue);
        void boxBlur();
    };
}



#endif /* Screen_hpp */
