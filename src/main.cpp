/********************************
 * Heart beat program
 * 
 * Flashes an internal LED
 *******************************/
#include <mbed.h>

DigitalOut led(LED1);

int main() {
  while (1) {
    led = 1;
    ThisThread::sleep_for(250ms);
    led = 0;
    ThisThread::sleep_for(250ms);
  }
}