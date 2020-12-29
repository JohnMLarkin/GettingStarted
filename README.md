# Program 1: Heart beat
**Created by:** John M. Larkin (December 2020)

**Modified by:**

**Purpose:** This program flashes an internal LED on the LPC1768

## Hardware
### Internal
* LED1 (DigitalOut)

## Flow
```mermaid
graph LR
A("main()") --> B{Is it true?}
B --> |yes| C[Turn on LED1]
C --> D([Sleep 250 ms])
D --> E[Turn off LED1]
E --> F([Sleep 250 ms])
F --> B
```