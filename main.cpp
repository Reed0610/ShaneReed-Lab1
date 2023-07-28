#include "mbed.h"

InterruptIn bttn(PC_13);
volatile bool buttonPressed = false; // Flag to indicate button press

void bttn_interrupt() {
    buttonPressed = true; // Set the flag when the button is pressed
}

int main() {
    bttn.fall(&bttn_interrupt);

    while (true) {
        if (buttonPressed) {
            printf("Button Pressed.\r\n");
            buttonPressed = false; // Reset the flag after printing the message.
        }
    }
}
