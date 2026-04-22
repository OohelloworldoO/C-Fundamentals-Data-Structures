int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 1. 配置記憶體空間
    int* result = (int*)malloc(2 * sizeof(int));
    
    // 2. 雙層迴圈尋找組合
    for (int i = 0; i < numsSize; i++) {
        for (int j = i + 1; j < numsSize; j++) {
            // 3. 判斷是否符合條件
            if (nums[i] + nums[j] == target) {
                result[0] = i;
                result[1] = j;
                
                // 4. 設定回傳大小並回傳
                *returnSize = 2;
                return result;
            }
        }
    }
    
    // 5. 若沒找到，設定 returnSize 為 0