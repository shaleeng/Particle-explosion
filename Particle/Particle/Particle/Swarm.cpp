//
//  Swarm.cpp
//  Particle
//
//  Created by Shaleen Goel on 2/7/21.
//  Copyright © 2021 Shaleen Goel. All rights reserved.
//

#include "Swarm.hpp"

Swarm::Swarm(): lastTime(0) {
    m_pParticles = new Particle[NPARTICLES];
}

Swarm::~Swarm() {
    delete [] m_pParticles;
}
void Swarm::update(int elasped) {
    int interval = elasped - lastTime;
    
    for (int i = 0; i < NPARTICLES; i++) {
        m_pParticles[i].update(interval);
    }
    lastTime = elasped;
}
