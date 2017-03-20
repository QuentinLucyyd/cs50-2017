/**
 * helpers.c
 *
 * Helper functions for Problem Set 3.
 */
 
#include <cs50.h>

#include "helpers.h"

/**
 * Returns true if value is in array of n values, else false.
 */
bool search(int value, int values[], int n)
{
    // TODO: implement a searching algorithm
    for (int i = 0; i <= n; i++)
    {
        if (values[i] == value)
        return true;
    }
    return false;
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    // TODO: implement an O(n^2) sorting algorithm
    // Bubble sort will be used. ('haystack' is the array with all the values we need to sort and 'size is the number of values')
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++) // Iterates through the array and swaps if the current value is greater than the next
        {
            if (values[j] > values[j + 1])
            {
                temp = values[j];
                values[j] = values [j + 1];
                values[j + 1] = temp;
            }
        }
    }
    return;
}
