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
#include "project.h"

int main(void)
{
    __enable_irq(); /* Enable global interrupts. */
    int delay_ms = 700;

    /* Place your initialization/startup code here (e.g. MyInst_Start()) */

    for(;;)
    {
        Cy_GPIO_Write(RED_PORT, RED_NUM, 0);
        CyDelay(delay_ms);
        
        Cy_GPIO_Write(RED_PORT, RED_NUM, 1);
        CyDelay(delay_ms);
        
        Cy_GPIO_Write(GREEN_PORT, GREEN_NUM, 0);
        CyDelay(delay_ms);
        
        Cy_GPIO_Write(GREEN_PORT, GREEN_NUM, 1);
        CyDelay(delay_ms);
        
        Cy_GPIO_Write(BLUE_PORT, BLUE_NUM, 0);
        CyDelay(delay_ms);
        
        Cy_GPIO_Write(BLUE_PORT, BLUE_NUM, 1);
        CyDelay(delay_ms);
    }
}

/* [] END OF FILE */
