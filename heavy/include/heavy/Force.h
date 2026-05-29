#ifndef HEAVY_FORCE_H
#define HEAVY_FORCE_H

#include "Vector3.h"

namespace heavy {

class Force {
public:
    float gravity;
    float lift;
    
    float thrust_forward;
    float thrust_backward;
    float thrust_left;
    float thrust_right;
    
    Force();
    
    Vector3 calculateNetForce() const;
    
    void setGravity(float value);
    void setLift(float value);
    
    void setThrustForward(float value);
    void setThrustBackward(float value);
    void setThrustLeft(float value);
    void setThrustRight(float value);
    
    void reset();
};

}

#endif