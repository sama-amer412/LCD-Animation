#include"../HALL/LCD/LCD_interface.h"
#include"../Lib/STD_TYPES.h"
#include <util/delay.h>
#include"../MCAL/DIO/DIO_interface.h"
#include"../Lib/Bit_math.h"
#include"../HALL/LCD/LCD_private.h"
#include"../HALL/LCD/LCD_cofig.h"
#include"../HALL/Button/Button_interface.h"
#include"../HALL/LED/LED_interface.h"



     // Dinosaur patterns
    
    u8 din[8] = {
        0b00111,
        0b00111,
        0b10110,
        0b11111,
        0b01010,
        0b01010,
        0b00000,
        0b00000
    };
    // Obstacle patterns
    u8 obstacle1[8] = {
        0b00100,
        0b10101,
        0b10101,
        0b11111,
        0b00100,
        0b00100,
        0b00100,
        0b00100
      };


u8 isJumping = 0;       
u8 jumpCounter = 0;
u8 dinoRow = line2;
s8 treePos = 15;

int main(void)
{
  
    LCD_init();
    u8 arr[10] = {'S', 't', 'a', 'r', 't', ' ', 'G', 'a', 'm', 'e'};

    // Welcome display
    LCD_curserPosition(line1, 2);
    LCD_print_string(arr);
    _delay_ms(1000);
    LCD_ClearDisplay();

    //the game
    LCD_Draw_pattarn(din, 1); 
    LCD_Draw_pattarn(obstacle1, 2);  
    DIO_SetPinDirection(PORTB,PIN0,INPUT);
    
    DIO_SetPinValue(PORTB,PIN0,HIGH);
    LCD_CursorOff();
    LCD_print_pattarn(din, line2 ,0,1);

    while (1)
    {
        
        if (DIO_GetPinValue(PORTB, PIN0) == 0 && !isJumping)
        {
            isJumping = 1;
        }

        moveTree();
        
        handleJump();

        _delay_ms(100); 
    }

    return 0;
}