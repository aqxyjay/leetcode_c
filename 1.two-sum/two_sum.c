/**
 * 给定一个整数数组 nums 和一个目标值 target，请你在该数组中找出和为目标值的那 两个 整数，并返回他们的数组下标。
 * 你可以假设每种输入只会对应一个答案。但是，数组中同一个元素不能使用两遍。
 * Note: The returned array must be malloced, assume caller calls free().
 */

#include <stdlib.h>

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    if (numsSize < 2)
    {
        return NULL;
    }
    int *retNums = NULL;
    *returnSize = 2;
    retNums = (int *)malloc(sizeof(int) * 2);
    for (size_t i = 0; i < numsSize; i++)
    {
        for (size_t j = i + 1; j < numsSize; j++)
        {
            if (nums[i] + nums[j] == target)
            {
                retNums[0] = i;
                retNums[1] = j;
            }
        }
    }
    return retNums;
}

void main()
{
    int nums[] = {-3, 4, 3, 90};
    int target = 0;
    int returnSize;
    int *retNums = NULL;
    retNums = twoSum(nums, 4, target, &returnSize);
    if (retNums == NULL)
    {
        printf("FAILED");
    }
    else
    {
        printf("retNums: [%d, %d]\n", retNums[0], retNums[1]);
    }
}