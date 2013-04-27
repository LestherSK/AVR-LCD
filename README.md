AVR-LCD
=======

Hitachi compatible LCD Driver for AVR

4 data lines    
1 Register Select    
1 Enable Clock line    
1 Read/Write bar    
\+_______  
7 Total

## Setup

See the defines in the `lcd.h` file
```
#define LCD_RS PD0
#define LCD_RW PD1
#define LCD_E  PD2

// LCD DATA OUTPUT RD4-RD7
#define LCD PORTD
```

The upper four bits of LCD are used for data, the lower 4 won't be touched. Unless they are used for the comm lines.

## Notes

Tested with a 2 line 16 character display:
http://www.newhavendisplay.com/specs/NHD-0216K1Z-NSW-BBW-L.pdf
