#include<iostream>
#include<stdint.h>
#define LED_PIN 13
namespace Led
{
    enum State
    {
        OFF=0,
        ON=1

    };
    void init(){}
    void set(State state)
    {
        if(state == ON)
        {
           std::cout<<"led on"; 
          //in reality :  //digitalWrite(LED_PIN, HIGH);  
          
        }else
        {
            std::cout<<"led off";
          //in reality :  //digitalWrite(LED_PIN, LOW);  
        }
    }

    State get()
    {
        return OFF;
    }

}
//using namespace Led;
int main()
{
    Led::init();
    Led::set(Led::ON);
    return 0;
}