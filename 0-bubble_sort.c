#include "sort.h"
#include <stdio.h>
#include <stdlib.h>
/**
*bubble_sort - ftn to sort an array
*using bubble sort algorithm
*@array: array
*@size: size of the array
*Return: Always success
*/

void bubble_sort(int *array, size_t size)
{
    size_t i, j;
    size_t flag;

    /* check if array is empty or less than 2 */
    if (array == NULL || size < 2)
    {
        return;
    }

    for (i = 0; i < size - 1; i++)
    {
        flag = 0;
        for (j = 0; j < size - i - 1; j++)
        {
            if (array[j] > array[j + 1])
            {
                size_t temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
                print_array(array, size);
                flag = 1;
            }
        }
        if (flag == 0)
        break;
    }

}
