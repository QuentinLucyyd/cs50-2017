/* 00000000000000000000000000000000000000000000000000000000000  */
/*	 															*/
/*	File: caesar.c 												*/
/*	Quentin_Lucyyd											    */
/*	quinton@flareon.co.za										*/
/*																*/
/* 00000000000000000000000000000000000000000000000000000000000  */

#include <cs50.h>
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[])
{
    string plain;
    
    if(argc == 2)
    {
        do
        {
            
        printf("plaintext: ");
        plain = get_string();
        }
        while(plain == '\0');
    
    printf("ciphertext: ");
    for (int i = 0, l = strlen(plain); i < l; i++)
    {
        int k = atoi(argv[1]);
        char result;
        
        if(plain[i] >= 'A' && plain[i] <= 'Z')
        {
            result = (((plain[i] - 65) + k )% 26);
            printf("%c", result + 65);
        }
        else if(plain[i] >= 'a' && plain[i] <= 'z')
        {
            result = (((plain[i] - 97) + k )% 26);
            printf("%c", result + 97);           
        }
        else
        {
            printf("%c", plain[i]);
        }
    }
    }
    else
    {
        printf("Please input one command-line argument\n");
        return (1);
    }
    printf("\n");
    return(0);
}