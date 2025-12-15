#include "leetcode.h"

int	removeElement(int *nums, int numsSize, int val)
{

	int	i;


	i = 0;
	while (i < numsSize)
	{
		if (nums[i] == val)
		{
			nums[i] = nums[numsSize - 1];
			nums[numsSize - 1] = val;
			numsSize--;
		}
		else
			i++;
	}
	return (numsSize);
}

int	main(void)
{
	int nums[] = {0,1,2,2,3,0,4,2};
	int i = 0;
	int size = 8;

	while (i < size)
	{
		printf("%i\n", nums[i]);
		i++;
	}
	int newnums = removeElement(nums, size, 2);
	printf("returns: %i\n", newnums);
	i = 0;
	while (i < newnums)
	{
		printf("%i\n", nums[i]);
		i++;
	}
}