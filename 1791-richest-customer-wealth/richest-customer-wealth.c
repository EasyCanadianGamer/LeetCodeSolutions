int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {


    int res =0;
    for ( int i = 0; i < accountsSize; i++ )
    {
            int sum = 0;

        for ( int j = 0; j < *accountsColSize; j++)
        {
            sum+=accounts[i][j];

        }
        if( sum > res)
        {
            res = sum;
        }

    }
           return res;


}