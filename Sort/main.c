/*
 * main.c
 *
 *  Created on: Dec 11, 2020
 *      Author: hanus
 */

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include "sort.h"

void assert_sorting(int32_t list[], uint32_t size)
{
	int32_t pass;
	for (pass = 0; pass < size - 1; ++pass)
	{
		assert (list[pass] <= list[pass + 1]);
		printf("Sort passed!");
	}

}

void test_sort()
{
	int32_t input[] = {23, 14, 45, 76, 89, 23, 9, 75, 34, 55};
	//bubble_sort(input, 10);
	//selection_sort(input, 10);
	insertion_sort(input, 10);
	assert_sorting(input, 10);
}

int main()
{
	test_sort();
	printf("Hello sort!");
	return 0;
}


