//
//  Particle.cpp
//  OneParticleClass
//
//  Created by Tadokoro Atsushi on 2013/09/24.
//
//

#include "Particle.h"

void Particle::setup(ofVec2f _position){
    position = _position;
}

void Particle::draw(){
    ofSetHexColor(0x3399cc);
    ofCircle(position, 10);
}