//
//  main.cpp
//  Particle
//
//  Created by Shaleen Goel on 2/2/21.
//  Copyright © 2021 Shaleen Goel. All rights reserved.
//

#include <iostream>
#include <SDL2/SDL.h>
#include <math.h>
#include "Screen.hpp"
#include <stdlib.h>
#include <time.h>
#include "Swarm.hpp"
using namespace std;
using namespace caveofprogramming;

int main() {
    
    srand(time(NULL));
    
    Screen screen;
    if (!screen.init()){
        cout << "Error initializing SDL." << endl;
    }
    
    Swarm swarm;
    
    while (true) {
        
        int elasped = SDL_GetTicks();
        
        
        
        swarm.update(elasped);
        
        unsigned char green = (1 + sin(elasped * 0.0001)) * 128;
        unsigned char red = (1 + sin(elasped * 0.0002)) * 128;
        unsigned char blue = (1 + sin(elasped * 0.0003)) * 128;
        
        const Particle * const pParticles = swarm.getParticles();

        
        for (int i = 0; i < swarm.NPARTICLES; i++) {
            Particle particle = pParticles[i];

            int x = (particle.m_x + 1)  * screen.SCREEN_WIDTH/2;
            int y = particle.m_y  * screen.SCREEN_WIDTH/2 + screen.SCREEN_HEIGHT/2;
            
            screen.setPixel(x, y, red, green, blue);
            
        }
        
        screen.boxBlur();
        
        screen.update();
        
        if (!screen.processEvents()) {
            break;
        }
    }
    
    screen.close();
    
    return 0;
}
