// The FizBuzz game

// Go through all numbers between 1 - 100 (included) and print the number, except:

//     If the number is divisible by 3, print Foo.
//     If the number is divisible by 5, print Bar.
//     If the number is divisible by both 3 and 5, print FooBar.

// Expected output:

// 1
// 2
// Foo
// 4
// Bar
// Foo
// 7
// ...
// 14
// FooBar
// 16
// ...

#include "stdio.h"
#include "stdlib.h"
#include <sys/types.h>

typedef enum {
    foo_bar,
    foo,
    bar,
    none
} output_t;


void NazwaPliku_NazwaFunkcji() 
{

}

static void nazwaPliku_NazwaFunkcji2() 
{
    NazwaPliku_NazwaFunkcji()

    
}

void if_div() 
{

    for(int number=1; number<=100; number++) {
        if(number%5 == 0 && number%3 == 0)
            printf("FooBar\n");
        else if (number%3 == 0) 
            printf("Foo\n");
        else if(number%5 == 0) 
            printf("Bar\n");
        else
            printf("%d\n", number);
    }

}

int main() {
    return 0;
}


int a(void)
{
    //code
    goto funb;
    //code 2
    ret_label:
    return 0;
}

int b(void)
{
    //code 3
    funb:
    //code 4
    goto ret_label;
    return 1;
}


/*-------------TASK 2------------*/
/*
Count set bits

Write a function to count the number of set bits (bits set to ‘1’) in any given number.

Example:

16 (decimal) = 0x10 (hex) = b10000 (bin), Number of set bits: 1
17 (decimal) = 0x11 (hex) = b10001 (bin), Number of set bits: 2

*/

#define IS_BIT_SET(value, bit) ((value) & (0x1 << (bit)))  

int a = 1;

IS_BIT_SET(a+1, a);

a + (1 & (0x1 << a))

int get_number_of_bit(uint32_t number) {

    uint128_t count = 0;

    uint8_t n[4] = {number>>24, number>>16, number>>8, number};

    while(number > 0) {
        if(number%2 == 1) {
            count++;
        }

        number = number>>1;
    }

    return count;
}

int count_bit(void * value, u_int64_t size) {



}









/*
Implement the memcpy function

Function as the standard libc prototype.

void *memcpy(void *destination, void *source, size_t size);

The function returns destination
*/

destination -> 0x20000133
des -> ? 0x20000133

destination -> 0x20000100


void *memcpy(void *destination, void *source, size_t size) {

    u_int32_t * des = (u_int32_t *)destination;
    u_int32_t * sour = (u_int32_t *)source;

    for(int i=0; i<(size/4); i++) {
        des[i] = sour[i];
    }

    int r = size%4;
    
    for(int i=0; i<r; i++) {
        des[size/4] |= sour[size/4] & (0xFF << (i*8));
    }

    return (void *)des;
}


