#ifndef HEAVY_PHYSICSBODY_H
#define HEAVY_PHYSICSBODY_H

#include "Vector3.h"

namespace heavy {

class PhysicsBody {
public:
    Vector3 position;
    Vector3 velocity;
    Vector3 acceleration;
    float mass;
    bool isStatic;
    
    Vector3 oscillationForce;
    Vector3 lastOscillationDirection;
    bool isOscillating;
    
    PhysicsBody();
    PhysicsBody(const Vector3& position, float mass = 1.0f);
    
    void applyForce(const Vector3& force);
    void applyImpulse(const Vector3& impulse);
    void applyOscillation(const Vector3& direction, float initialMagnitude);
    
    void update(float deltaTime);
    
    void setStatic(bool value);
    bool getStatic() const;
    
    void reset();
};

}

#endif