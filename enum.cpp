#include <iostream>
#include <stdint.h>

enum LedState: int8_t{
    led_off,
    led_on
}; 

enum Port{
    HTTP=80,
    MQTT=8883,
    SSH=22,
    TELNET=23,
    SMTP= 25
};
int main(){
    LedState state= led_on;
    Port Protocol=HTTP;
    switch (state)
    {
    case led_off:
        std::cout <<static_cast<int>(state);  // output=0
        break;

    case led_on:
        std::cout <<static_cast<int>(state);  // output=1
        break;
    
    default:
        break;
    }

    std::cout<< "Protocol port number" << Protocol;
    return 0;
}