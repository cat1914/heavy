#include "heavy/PhysicsWorld.h"
#include "heavy/PhysicsBody.h"
#include "heavy/Force.h"
#include <iostream>
#include <iomanip>

void printBodyInfo(const heavy::PhysicsBody& body, const std::string& name) {
    std::cout << std::fixed << std::setprecision(4);
    std::cout << name << ": "
              << "pos=(" << body.position.x << "," << body.position.y << "," << body.position.z << ") "
              << "vel=(" << body.velocity.x << "," << body.velocity.y << "," << body.velocity.z << ") "
              << "oscillating=" << std::boolalpha << body.isOscillating << std::endl;
}

int main() {
    std::cout << "=== Heavy Physics Engine Test ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body1(heavy::Vector3(0, 10, 0), 2.0f);
    heavy::PhysicsBody body2(heavy::Vector3(5, 10, 0), 1.0f);
    
    world.addBody(&body1);
    world.addBody(&body2);
    
    std::cout << "\n--- Test 1: Gravity and Lift ---\n";
    world.getGlobalForce().setGravity(0, -9.8f, 0);
    world.getGlobalForce().setLift(0, 4.9f, 0);
    
    for (int i = 0; i < 5; ++i) {
        world.update();
        printBodyInfo(body1, "Body1");
    }
    
    std::cout << "\n--- Test 2: Thrust ---\n";
    world.getGlobalForce().reset();
    world.getGlobalForce().setGravity(0, 0, 0);
    world.getGlobalForce().addThrustRight(10.0f);
    body1.reset();
    body1.position = heavy::Vector3(0, 0, 0);
    
    for (int i = 0; i < 5; ++i) {
        world.update();
        printBodyInfo(body1, "Body1");
    }
    
    std::cout << "\n--- Test 3: Oscillation ---\n";
    world.getGlobalForce().reset();
    body1.reset();
    body1.position = heavy::Vector3(0, 0, 0);
    body1.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    for (int i = 0; i < 8; ++i) {
        world.update();
        printBodyInfo(body1, "Body1");
    }
    
    std::cout << "\n--- Test 4: Combined Forces ---\n";
    world.getGlobalForce().setGravity(0, -9.8f, 0);
    world.getGlobalForce().setLift(0, 9.8f, 0);
    body1.reset();
    body1.position = heavy::Vector3(0, 5, 0);
    
    for (int i = 0; i < 5; ++i) {
        world.update();
        printBodyInfo(body1, "Body1");
    }
    
    std::cout << "\n=== Test Complete ===" << std::endl;
    
    return 0;
}