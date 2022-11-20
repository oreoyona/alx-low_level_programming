/**
 * twoSum - returns the indexes of elements in an array
 * which addition equals to target
 * @nums: the given array.
 * @numsSize: the size of nums
 * @target: the sum
 * @returnSize: the size of the returned array
 * Return: the realloced nums with the 2 index
 *  [-1, -1] if there is no correspondance
 *
 * Note: The returned array must be malloced, assume caller calls free().
 */
int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
	int x, y, one = -1, two = -1;

	*returnSize = 2;
	for (x = 0; x < numsSize; x++)
	{
		for (y = x + 1; y < numsSize; y++)
		{
			if (nums[x] + nums[y] == target)
			{
				one = x;
				two = y;
			}
		}
	}
	nums = (int *) malloc(2 * (sizeof(int)));
	nums[0] = one;
	nums[1] = two;
	return(nums);
	
}
