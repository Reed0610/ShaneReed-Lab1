#include "mbed.h"
// ++ MbedOS Error Info ++
// Error Status: 0x80010133
// Code: 307
// Module: 1
//Error Message: Mutex: 0x20000160, Not allowed in ISR context
// Location: 0x800911D
// Error Value: 0x20000160
// Current Thread: main Id: 0x200003B0
// Entry: 0x8006863
// StackSize: 0x1000
// StackMem: 0x10000548
// SP: 0x20017F48 
// For more info, visit: https://mbed.com/s/error?error=0x80010133&tgt=DISCO_L475VG_IOT01A
// -- MbedOS Error Info --

// = System will be rebooted due to a fatal error =
// = Reboot count(=1) reached maximum, system will halt after rebooting =
// This error indicates that you are attempting to use a Mutex in an ISR (Interrupt Service Routine) context, which is not allowed.
// Mutexes are synchronization mechanisms used to protect shared resources from concurrent access by multiple threads.
// However, using them in an ISR context can lead to issues because ISRs run at a higher priority than normal threads 
// and are not meant to perform blocking operations like waiting for a Mutex.

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

