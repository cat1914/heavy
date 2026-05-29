#include "heavy/PhysicsWorld.h"

namespace heavy {

PhysicsWorld::PhysicsWorld() : deltaTime(0.016f) {}

PhysicsWorld::~PhysicsWorld() {
    clearBodies();
}

void PhysicsWorld::addBody(PhysicsBody* body) {
    if (body) {
        bodies.push_back(body);
    }
}

void PhysicsWorld::removeBody(PhysicsBody* body) {
    for (auto it = bodies.begin(); it != bodies.end(); ++it) {
        if (*it == body) {
            bodies.erase(it);
            break;
        }
    }
}

void PhysicsWorld::clearBodies() {
    bodies.clear();
}

void PhysicsWorld::setGlobalForce(const Force& force) {
    globalForce = force;
}

Force& PhysicsWorld::getGlobalForce() {
    return globalForce;
}

void PhysicsWorld::setDeltaTime(float dt) {
    deltaTime = dt;
}

float PhysicsWorld::getDeltaTime() const {
    return deltaTime;
}

void PhysicsWorld::applyGlobalForces() {
    Vector3 netForce = globalForce.calculateNetForce();
    for (PhysicsBody* body : bodies) {
        body->applyForce(netForce);
    }
}

void PhysicsWorld::update() {
    applyGlobalForces();
    for (PhysicsBody* body : bodies) {
        body->update(deltaTime);
    }
}

size_t PhysicsWorld::getBodyCount() const {
    return bodies.size();
}

PhysicsBody* PhysicsWorld::getBody(size_t index) const {
    if (index < bodies.size()) {
        return bodies[index];
    }
    return nullptr;
}

}