// or #pragma once
#ifndef _CAR_ // guard
#define _CAR_

class car{
    private:
        float speed;
    car(){
        speed = 0;
    }
    public:
        float getSpeed();
        void accelerate(float meters, float seconds);
};


#endif