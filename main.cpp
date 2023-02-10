/*  USNA SY202 ICE01 - Part B
    10 Feb 2023 - CDR Brien Croteau
    mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

/* 
Instructions:  Read through this program and determine how it works.  Add comments
  to the code that describes what each line is doing.  Try your hand at modifying the code to
  allow the LED to get brighter and make each step bigger so that it changes faster.  Also
  consider adding some more protections against users entering invalid responses.
*/

/* 
Pseudo-Code for Part B
1. Include the required header files for the mbed board
2. Declare the required objects to:
     a. communicate with the computer over a serial port
     b. turn on and off the first LED on the bottom left of the board
3. Declare a float variable to hold a value that will determine how bright the LED should come on
4. Within the main function, print a message that tells the users instructions on how to change the LED brightness
5. Create a loop that will constantly repeat without end
6. Read in a single character from the serial port and save it into a character variable
7. Check if the entered character was "u", if so increase the brightness of the LED output, but below some limit (initially 0.5)
8. Check if the entered character was "d", if so decrease the brightness of the LED output, but above some limit (always 0.0)
9. Loop back up to read in a new character
*/

#include "mbed.h"
 
Serial pc(USBTX, USBRX); 
PwmOut led(LED1);
 
float brightness = 0.0;
 
int main() {
    pc.printf("Press 'u' to turn LED1 brightness up, 'd' to turn it down\n");
 
    while(1) {
        char c = pc.getc();
        if((c == 'u') && (brightness < 0.5)) {
            brightness += 0.01;
            led = brightness;
        }
        if((c == 'd') && (brightness > 0.0)) {
            brightness -= 0.01;
            led = brightness;
        } 
 
    }
}


// Reminder you need to add comments to the above code and any modifications you make, then cut and paste your entire main.cpp file into the lab submission.