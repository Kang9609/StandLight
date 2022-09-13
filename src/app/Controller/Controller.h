#ifndef CONTROLLER_H
#define CONTROLLER_H

#pragma once

#include <string>
#include "Led.h"


enum {LIGHT_OFF, LIGHT_ON};

class Controller
{
private:
    int lightState;
    Led *light;

public:
    Controller(Led *led);        // Controller를 생성할 때 Led를 불러온다
    virtual ~Controller();
    void updateEvent(std::string strBtn); 
};

#endif