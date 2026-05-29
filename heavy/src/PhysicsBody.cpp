#include "heavy/PhysicsBody.h"

namespace heavy {

PhysicsBody::PhysicsBody() 
    : position(0, 0, 0), velocity(0, 0, 0), acceleration(0, 0, 0), 
      mass(1.0f), isStatic(false), 
      oscillationForce(0, 0, 0), lastOscillationDirection(0, 0, 0), 
      isOscillating(false) {}

PhysicsBody::PhysicsBody(const Vector3& position, float mass) 
    : position(position), velocity(0, 0, 0), acceleration(0, 0, 0), 
      mass(mass), isStatic(false), 
      oscillationForce(0, 0, 0), lastOscillationDirection(0, 0, 0), 
      isOscillating(false) {}

void PhysicsBody::applyForce(const Vector3& force) {
    if (!isStatic && mass > 0) {
        acceleration += force / mass;
    }
}

void PhysicsBody::applyImpulse(const Vector3& impulse) {
    if (!isStatic) {
        velocity += impulse;
    }
}

void PhysicsBody::applyOscillation(const Vector3& direction, float initialMagnitude) {
    if (!isStatic && initialMagnitude > 0) {
        Vector3 normDirection = direction.normalized();
        oscillationForce = normDirection * initialMagnitude;
        lastOscillationDirection = normDirection;
        isOscillating = true;
    }
}

void PhysicsBody::update(float deltaTime) {
    if (isStatic) return;
    
    if (isOscillating) {
        applyForce(oscillationForce);
        
        float mag = oscillationForce.magnitude();
        if (mag <= 1.0f) {
            oscillationForce = Vector3(0, 0, 0);
            isOscillating = false;
        } else {
            oscillationForce = -lastOscillationDirection * (mag / 2.0f);
            lastOscillationDirection = oscillationForce.normalized();
        }
    }
    
    velocity += acceleration * deltaTime;
    position += velocity * deltaTime;
    
    acceleration = Vector3(0, 0, 0);
}

void PhysicsBody::setStatic(bool value) {
    isStatic = value;
    if (isStatic) {
        velocity = Vector3(0, 0, 0);
        acceleration = Vector3(0, 0, 0);
        isOscillating = false;
        oscillationForce = Vector3(0, 0, 0);
    }
}

bool PhysicsBody::getStatic() const {
    return isStatic;
}

void PhysicsBody::reset() {
    position = Vector3(0, 0, 0);
    velocity = Vector3(0, 0, 0);
    acceleration = Vector3(0, 0, 0);
    isOscillating = false;
    oscillationForce = Vector3(0, 0, 0);
    lastOscillationDirection = Vector3(0, 0, 0);
}

}