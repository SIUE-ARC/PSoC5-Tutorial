/* ========================================
 *
 * Copyright YOUR COMPANY, THE YEAR
 * All Rights Reserved
 * UNPUBLISHED, LICENSED SOFTWARE.
 *
 * CONFIDENTIAL AND PROPRIETARY INFORMATION
 * WHICH IS THE PROPERTY OF your company.
 *
 * ========================================
*/
#include <project.h>

#define HIGH 1
#define LOW 0

void digitalWrite(char val);

int i;

int main()
{
    CyGlobalIntEnable; /* Enable global interrupts. */
    
    PWM_Start();
    

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        /* Place your application code here. */
        //digitalWrite(HIGH);
        //for(i = 0; i < 1000000; i++);
        //digitalWrite(LOW);
        //for(i = 0; i < 1000000; i++);
        for(i = 0; i < 5000000; i++);
        PWM_WriteCompare(209);
    }
}

/* [] END OF FILE */

void digitalWrite(char val)
{
    if(val == HIGH)
        LED_DR |= LED_MASK;
    else if(val == LOW)
        LED_DR &= ~LED_MASK;
}