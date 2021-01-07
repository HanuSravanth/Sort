/*
 * sort.c
 *
 *  Created on: Dec 11, 2020
 *      Author: hanus
 */

#include <stdint.h>
#include "sort.h"

static void _swap_(int32_t *num1, int32_t *num2)
{
	int32_t temp;
	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
	//pass by address - nothing to return
}

void bubble_sort(int32_t list[], uint32_t size)
{
	int32_t pass, index;

	for (pass = 0; pass < size - 1; ++pass)
	{
		for (index = size - 1; index > pass; --index)
		{
			if (list[index] < list[index-1])
			{
				_swap_(&list[index], &list[index-1]);
			}
		}

	}
}

void selection_sort(int32_t list[], uint32_t size)
{
	int32_t pass, index, min_pos;


	for (pass = 0; pass < size - 1; ++pass)
	{
		min_pos = pass;
		for (index = size; index > pass; --index)
		//for (index = pass + 1; index < size; ++index)
		{
			if (list[index] < list[min_pos])
			{
				min_pos = index;
			}
		}
		_swap_(&list[pass], &list[min_pos]);
	}

}

void insertion_sort(int32_t list[], uint32_t size)
{
	int32_t pass, index, key;

	for (pass = 1; pass < size; ++pass)
	{
		key = list[pass];
		index = pass - 1;

		while  (index >= 0 &&  list[index] > key)
		{
			list[index + 1] = list[index];
			--index;
		}
		list[index + 1 ] = key;
	}
}

static uint32_t _partition_(int32_t list[], uint32_t start, uint32_t end)
{
	uint32_t up    = start, down = end;
	uint32_t pivot = list[start];

	do
	{
		while (list[up] <= pivot) {++up;}
		while (list[down] > pivot) {--down;}

		if (up <= down)
		{
			_swap_(&list[up], &list[down]);
		}

	} while(up <= down);
	_swap_(&list[up], &list[start]);

	return down;
}

void quick_sort(int32_t list[], uint32_t start, uint32_t end)
{
	uint32_t mid;
	if (start < end)
	{
		mid = _partition_(list, start, end);
		quick_sort(list, start, mid - 1);
		quick_sort(list, mid + 1, end);
	}
}

