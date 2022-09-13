#include "Listener.h"



Listener::Listener(Button *button, Controller *control)    // *~ = 포인터 = 주소를 가진 변수  ==> 여기서 포인터 사용했으므로 private에서도 * 사용해야한다
{
    powerButton = button;
    controller = control;
}


void Listener::checkEvent()     // 콜론(:) = 소속
{
    if (powerButton->getState() == RELEASE_ACTIVE)    // LIstener가 Button을 call 하고 있다 = Listener가 Button에 의존적이다
        {
            controller->updateEvent("powerButton");
        }
}

Listener::~Listener()
{

}
