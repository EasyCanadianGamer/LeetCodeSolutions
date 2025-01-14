/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
char** fizzBuzz(int n, int* returnSize) {
    char** bruzz =  (char**)malloc(sizeof(char*) * n); 
    *returnSize = n;

    for(int i = 1; i<= n; i++)
    {
        int index = i-1;
        if( i % 3 == 0 && i % 5 == 0)
        {
            bruzz[index] = (char*) malloc(9 * sizeof(char));
          strcpy(bruzz [ index ], "FizzBuzz");
        }
        else if( i % 3 == 0)
        {
            bruzz[index] = (char*) malloc(5 * sizeof(char));
          strcpy(bruzz [ index ], "Fizz");
        }
         else if( i % 5 == 0)
        {
            bruzz[index] = (char*) malloc(5 * sizeof(char));
          strcpy(bruzz [ index ], "Buzz");
        }
        else
        {
             bruzz[index] = (char*) malloc(6 * sizeof(char));

            sprintf(bruzz[index], "%d", i);
        }

    }
        return bruzz;

}