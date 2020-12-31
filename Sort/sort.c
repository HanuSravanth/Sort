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

//void selection_sort(int32_t list[], uint32_t size)
//{
//	int32_t pass, min_pos, index;
//
//	for (pass = 0; pass < size - 1; ++pass)
//	{
//		min_pos = pass;
//		for (index = pass + 1; index < size; ++index)
//		{
//			if (list[index] < list[min_pos])
//			{
//				min_pos = index;
//			}
//		}
//		_swap_(&list[pass], &list[min_pos]);
//	}
//}


