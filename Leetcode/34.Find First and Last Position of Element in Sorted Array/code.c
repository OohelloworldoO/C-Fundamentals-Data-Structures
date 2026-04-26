/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int getBound(int *nums, int numsSize, int target, bool findLeft)
{
    int left = 0, right = numsSize - 1;
    int ans = -1;
    while(left <= right)
    {
        int mid = left + (right - left)/2;
        if(nums[mid] < target)
        {
            left = mid + 1;
        }
        else if(nums[mid] > target)
        {
            right = mid - 1;
        }
        else if(nums[mid] == target)
        {
            ans = mid;
            if(findLeft)
            {
                right = mid - 1;
            }
            else left = mid + 1;
        }
    }
    return ans;
}
int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int *res = (int*)malloc(sizeof(int) * 2);
    res[0] = getBound(nums, numsSize, target, true);
    res[1] = getBound(nums, numsSize, target, false);
    return res;
}