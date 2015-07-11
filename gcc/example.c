#include "CU_TM4C123.h"
#include "example.h"

void rainbow(uint32_t loop_count, uint32_t delay)
{
    //volatile to prevent GCC from optimizing out variable.
    volatile uint32_t ui32Loop;

    // Enable GPIOF
    SYSCTL->RCGCGPIO |= (1UL << 5);
    // Enable the GPIO pin as output
    GPIOF->DIR |= 0x0E;
    // enable digital output
    GPIOF->DEN |= 0x0E;

    while(loop_count--){
        GPIOF->DATA |= RED;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~RED;
        GPIOF->DATA |= GREEN;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~GREEN;
        GPIOF->DATA |= BLUE;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~BLUE;
        GPIOF->DATA |= YELLOW;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~YELLOW;
        GPIOF->DATA |= PURPLE;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~PURPLE;
        GPIOF->DATA |= CYAN;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~CYAN;
        GPIOF->DATA |= WHITE;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        GPIOF->DATA &= ~WHITE;

        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);
    }
}

void flash(char lights, uint32_t loop_count, uint32_t delay)
{
    //volatile to prevent GCC from optimizing out variable.
    volatile uint32_t ui32Loop;

    // Enable GPIOF
    SYSCTL->RCGCGPIO |= (1UL << 5);
    // Enable the GPIO pin as output
    GPIOF->DIR |= 0x0E;
    // enable digital output
    GPIOF->DEN |= 0x0E;

    while(loop_count--){
        // Turn on the LED.
        GPIOF->DATA |= lights;

        // busy wait.
        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);

        // Turn off the LED.
        GPIOF->DATA &= ~lights;

        // Busy wait.
        for(ui32Loop = 0; ui32Loop < delay; ui32Loop++);
    }
}
