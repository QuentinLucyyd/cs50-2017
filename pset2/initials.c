/* 00000000000000000000000000000000000000000000000000000000000  */
/*	 															*/
/*	File: initials.c											*/
/*	Quentin_Lucyyd											    */
/*	quinton@flareon.co.za										*/
/*																*/
/* 00000000000000000000000000000000000000000000000000000000000  */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(void)
{
	
	string name;
	do
	{
		name = get_string();
	}
	while(name == '\0');
	
	// iterate through the string as long as the counter is less than the length
	for (int i = 0, l = strlen(name); i < l; i++)
	{
		if(name[i] >= 'a' && name[i] <= 'z') // Capitalize & Print out the charecter if it is smaller than 'z' but bigger than 'a'
		{
			printf("%c",toupper(name[i]));
			break; //Break out of the loop
		}
		if(name[i] >= 'A' && name[i] <= 'Z') //Print the charecter if it is already capitalized as is.
		{
			printf("%c",name[i]);
			break; // Break out of the Loop.
		}
	}
	
	for (int i = 0, l = strlen(name); i < l; i++) // for loop for strings more than 1 word
	{
		if (name[i] >= 'a' && name[i] <= 'z' && name[i - 1] == ' ') //Print out and capitalize if the string is in lower case and the charecter before it is an empty space
		{
			printf("%c",toupper(name[i]));
		}
		if (name[i] >= 'A' && name[i] <= 'Z' && name[i - 1] == ' ') // Same if loop as about now only for Capitalized charecters
		{
			printf("%c",name[i]);
		}
	}
	printf("\n");
	return (0);
}
