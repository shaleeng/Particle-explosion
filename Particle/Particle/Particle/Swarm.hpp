//
//  Swarm.hpp
//  Particle
//
//  Created by Shaleen Goel on 2/7/21.
//  Copyright © 2021 Shaleen Goel. All rights reserved.
//

#ifndef Swarm_hpp
#define Swarm_hpp

#include <stdio.h>
#include <SDL2/SDL.h>
#include "Particle.hpp"

class Swarm {
public:
    const static int NPARTICLES = 5000;
private:
    Particle *  m_pParticles;
    int lastTime;
public:
    Swarm();
    ~Swarm();
    void update(int elasped);
    
    const Particle * const getParticles() {return m_pParticles;}
};

#endif /* Swarm_hpp */
