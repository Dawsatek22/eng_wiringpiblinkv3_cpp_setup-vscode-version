


#include <wiringPi.h> // Include WiringPi library!
#include <iostream>
// Pin number declarations. We're using the Broadcom chip pin numbers.

int ledPin = 4; // Regular LED - Broadcom pin 4.



int main(void)
{
    // Setup stuff:
    wiringPiSetupGpio(); // Initialize wiringPi -- using Broadcom pin numbers

    pinMode(ledPin, OUTPUT);     // Set regular LED as output
   



    // Loop (while(1)):
    while(1)
    {
       
         
            digitalWrite(ledPin, HIGH); // Turn LED ON
            std::cout << "on";     
                 delay(500); // Wait 500ms
            digitalWrite(ledPin, LOW); // Turn LED OFF
           std::cout <<"off";
            delay(500); // Wait 500ms again
            
        
}
    return 0;
}
