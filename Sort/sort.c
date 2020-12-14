/*
 * sort.c
 *
 *  Created on: Dec 11, 2020
 *      Author: hanus
 */



void selection_sort(int32_t list[], uint32_t size)
{
	int32_t pass, min_pos, index;

	for (pass = 0; pass < size - 1; ++pass)
	{
		min_pos = pass;
		for (index = pass + 1; index < size; ++index)
		{
			if (list[index] < list[min_pos])
			{
				min_pos = index;
			}
		}
		_swap_(&list[pass], &list[min_pos]);
	}
}


