#include "mbed.h"
// Comment why the error occurred

InterruptIn bttn(PC_13);

void bttn_interrupt(){
printf("button pressed \r\n");

} 
int main()
{
    bttn.fall(&bttn_interrupt);
    while (true) {

    }
}

