#ifndef LISTENER_H
#define LISTENER_H

#include "Button.h"
#include "Led.h"

#pragma once

class Listener
{
private:
    Button *powerButton;         // Button이 powerButton이라는 인수를 갖고있다 => Listener가 해당 버튼을 가지고 있다
    Led *light;

public:
    Listener(Button *button, Led *led);           // 자동으로 생성자가 불려진다
    ~Listener();          // 자동으로 소멸자가 불려진다
    void checkEvent();    // Listener class

};

#endif