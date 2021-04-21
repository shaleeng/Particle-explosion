//
//  Particle.hpp
//  Particle
//
//  Created by Shaleen Goel on 2/7/21.
//  Copyright © 2021 Shaleen Goel. All rights reserved.
//

#ifndef Particle_hpp
#define Particle_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include <stdlib.h>
#include <math.h>

class Particle {
public:
    double m_x;
    double m_y;
    double m_speed;
    double m_direction;
    void init();
public:
    Particle();
    void update(int interval);
};


#endif /* Particle_hpp */
