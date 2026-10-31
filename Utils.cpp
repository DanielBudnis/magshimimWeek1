#include "Utils.h"

/*
reverses a given array
input: array and its size
output: -
*/
void reverse(int* nums, unsigned int size)
{
	int i;
	Stack* s = new Stack;

	for (i = 0; i < size; i++)
	{
		push(s, nums[i]);
	}

	for (i = 0; i < size; i++)
	{
		nums[i] = pop(s);
	}
}

/*
inputs 10 numbers into an array and reverses
input: -
output: the reversed array
*/
int* reverse10()
{
	int* nums = new int[10];
	int i;
	std::cout << "enter 10 numbers(seperate by newline): ";
	for (i = 0; i < 10; i++) std::cin >> nums[i];

	reverse(nums, 10);
	return nums;
}