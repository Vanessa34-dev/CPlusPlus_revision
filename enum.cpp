#include <iostream>
#include <stdint.h>

enum ledState: int8_t{
    led_off,
    led_on
};
int main(){
    ledState state= led_on;
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

    return 0;
}