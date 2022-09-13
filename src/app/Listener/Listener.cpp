#include "Listener.h"



Listener::Listener(Button *button, Led *led)    // *~ = 포인터 = 주소를 가진 변수  ==> 여기서 포인터 사용했으므로 private에서도 * 사용해야한다
{
    powerButton = button;
    light = led;
}


void Listener::checkEvent()     // 콜론(:) = 소속
{
    if (powerButton->getState() == RELEASE_ACTIVE)    // LIstener가 Button을 call 하고 있다 = Listener가 Button에 의존적이다
        {
            light->Toggle();                          // Listener가 LED를 call 하고 있다 = Listener가 LED에 의존적이다
        }
}

Listener::~Listener()
{

}
