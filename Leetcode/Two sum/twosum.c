/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    // 1. 配置記憶體空間
    int* result = (int*)malloc(2 * sizeof(int)); // sizeof(int) 為告訴電腦"一個整數"占用多少空間、(int *) 是強制轉型，用來告訴電腦這塊空間當作裝 int 陣列使用 因為 malloc 剛申請到空間時 只知道這是一塊空白空間，不知道要存甚麼
    
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
    *returnSize = 0;
    return NULL;
}