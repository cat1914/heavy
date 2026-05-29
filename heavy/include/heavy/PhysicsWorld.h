#ifndef HEAVY_PHYSICSWORLD_H
#define HEAVY_PHYSICSWORLD_H

#include "Export.h"
#include "PhysicsBody.h"
#include "Force.h"
#include <vector>

namespace heavy {

class HEAVY_API PhysicsWorld {
private:
    std::vector<PhysicsBody*> bodies;
    Force globalForce;
    float deltaTime;
    
public:
    PhysicsWorld();
    ~PhysicsWorld();
    
    void addBody(PhysicsBody* body);
    void removeBody(PhysicsBody* body);
    void clearBodies();
    
    void setGlobalForce(const Force& force);
    Force& getGlobalForce();
    
    void setDeltaTime(float dt);
    float getDeltaTime() const;
    
    void applyGlobalForces();
    void update();
    
    size_t getBodyCount() const;
    PhysicsBody* getBody(size_t index) const;
};

}

#endif