#include "heavy/heavy.h"#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout <#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout <#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: ("#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << "#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << "#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float net#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.l#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" <#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0,#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0,#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向:#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n===#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setG#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0),#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ":#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.remove#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" <#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 5, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 5, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 5, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", "#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 5, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终#include "heavy/heavy.h"
#include <iostream>

void testGravityAndLift() {
    std::cout << "=== 测试重力与升力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 10, 0), 2.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 5.0f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 100; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 10, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " << body.velocity.z << ")" << std::endl;
    
    float netForceY = force.gravity.y + force.lift.y;
    std::cout << "净力(Y轴): " << netForceY << " m/s^2" << std::endl;
    std::cout << "预期: 重力 > 升力，物体应向下加速" << std::endl;
    
    world.removeBody(&body);
}

void testThrust() {
    std::cout << "\n=== 测试推力 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    force.addThrustForward(10.0f);
    force.addThrustRight(5.0f);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 0, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "推力方向: 前(Z轴)和右(X轴)" << std::endl;
    
    world.removeBody(&body);
}

void testOscillation() {
    std::cout << "\n=== 测试撞击震荡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 0, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, 0, 0);
    world.setGlobalForce(force);
    
    body.applyOscillation(heavy::Vector3(1, 0, 0), 16.0f);
    
    std::cout << "震荡过程:" << std::endl;
    for (int i = 0; i < 10; ++i) {
        world.update();
        std::cout << "Tick " << i << ": 位置 = (" << body.position.x << ", " << body.position.y << ", " << body.position.z 
                  << "), 震荡中 = " << (body.isOscillating ? "是" : "否") << std::endl;
    }
    
    world.removeBody(&body);
}

void testEquilibrium() {
    std::cout << "\n=== 测试力的平衡 ===" << std::endl;
    
    heavy::PhysicsWorld world;
    world.setDeltaTime(0.016f);
    
    heavy::PhysicsBody body(heavy::Vector3(0, 5, 0), 1.0f);
    world.addBody(&body);
    
    heavy::Force force;
    force.setGravity(0, -9.8f, 0);
    force.setLift(0, 9.8f, 0);
    world.setGlobalForce(force);
    
    for (int i = 0; i < 50; ++i) {
        world.update();
    }
    
    std::cout << "初始位置: (0, 5, 0)" << std::endl;
    std::cout << "最终位置: (" << body.position.x << ", " << body.position.y << ", " << body.position.z << ")" << std::endl;
    std::cout << "最终速度: (" << body.velocity.x << ", " << body.velocity.y << ", " <