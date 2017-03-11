/* 00000000000000000000000000000000000000000000000000000000000  */
/*	 															*/
/*	File: water.c												*/
/*	Quentin_Lucyyd											    */
/*	quinton@flareon.co.za										*/
/*																*/
/* 00000000000000000000000000000000000000000000000000000000000  */

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    printf("Minutes: ");
    int i = get_int();
    printf("Bottles: %.0f\n", (i * 1.5 * 128)/16);
}