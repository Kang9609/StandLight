#include "Controller.h"

Controller::Controller(Led *Led)
{
    light = Led;      // 불러온 Led를 light라 하겠다
    lightState = LIGHT_OFF;   // 처음에는 초기화 (OFF) = 초기값이 OFF 상태
}

Controller::~Controller()
{

}

void Controller::updateEvent(std::string strBtn)
{
    switch (lightState) 
    {
        case LIGHT_OFF:
            if (strBtn == "powerButton")
            {
                lightState = LIGHT_ON;  // event(Button 입력)이 들어오면 상태를 on으로 바꾼다
                light->On();
            }
            break;
        case LIGHT_ON:
            if (strBtn == "powerButton")
            {
                lightState = LIGHT_OFF;
                light->Off();
            }
            break;
    }
}