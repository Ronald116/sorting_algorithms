#include "sort.h"
/**
 * selection_sort - a ftn that sorts an array 
 * using selection sort algorithm
 * @array: array
 * @size: size of the array
 * Return: array sorted in ascending order
*/

void selection_sort(int *array, size_t size)
{
    size_t i, j, temp;
    int min;

    for (i = 0; i < size - 1; i++)
    {
        min = i;
        for (j = i + 1; j < size; j++)
        {
            if (array[j] < min)
            {
                min = array[j];
            }
        }
        if (min != i)
        {
            temp = array[i];
            array[i] = array[min];
            array[min] = temp;
        }
    }
}
