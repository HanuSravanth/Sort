/*
 * sort.h
 *
 *  Created on: Dec 11, 2020
 *      Author: hanus
 */

#ifndef SORT_H_
#define SORT_H_
#include <stdint.h>

// insertion_sort > selection_sort > bubble_sort

void bubble_sort(int32_t list[], uint32_t size);

void selection_sort(int32_t list[], uint32_t size);

void insertion_sort(int32_t list[], uint32_t size);

void quick_sort(int32_t list[], uint32_t start, uint32_t end);

void merge_sort(int32_t list[], uint32_t low, uint32_t high);

#endif /* SORT_H_ */
