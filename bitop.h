
#ifndef __BIT_OP__
#define __BIT_OP__


/* _BV(a) is a macro which returns the value corresponding to 2 to the power 'a'. Thus _BV(PX3) would be 0x08 or 0b00001000 */
#define sbi(x,y) x |= _BV(y) 								//set bit - using bitwise OR operator 
#define cbi(x,y) x &= ~(_BV(y)) 						//clear bit - using bitwise AND operator
#define tbi(x,y) x ^= _BV(y) 								//toggle bit - using bitwise XOR operator
#define is_high(x,y) (x & _BV(y) == _BV(y)) //check if the y'th bit of register 'x' is high ... test if its AND with 1 is 1

#endif // __BIT_OP__