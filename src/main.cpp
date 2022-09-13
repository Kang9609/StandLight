#include <iostream>
#include <wiringPi.h>
#include "Button.h"
#include "Led.h"
#include "Listener.h"






int main()
{
    std::cout << "Hello World!" << std::endl;

    Button button1(27);     // 27번 버튼에 의미부여 
    Led led1(25);              // => class 정의 후에는
    Listener listener(&button1, &led1);   // &button1 = button1(27), &led1 = led1(25)  => 생성자를 부를 때 같이 들어간다
                                          // listener = 객체에 포함되어 있는 매체를 부르는 것 (L => l)


    while (1)    
    {
        listener.checkEvent();
        delay(50);

    }

    return 0;
}


