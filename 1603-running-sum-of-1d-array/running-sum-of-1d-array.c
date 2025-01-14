/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* runningSum(int* nums, int numsSize, int* returnSize) {


int* results = (int*) malloc(sizeof(int) * numsSize );
    if (results == NULL) {
        // Handle memory allocation failure
        *returnSize = 0;
        return NULL;
    }
 
  results[0] = nums[0];

 for ( int i =1; i < numsSize; i++)
 {
 results[i] =results[ i -1] + nums[i];
 }

    *returnSize = numsSize;
    return results;

}