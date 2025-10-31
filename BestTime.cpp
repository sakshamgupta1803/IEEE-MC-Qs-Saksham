int maxProfit(int* prices, int pricesSize) {
    int min=prices[0],maxProfit=0,profit,n;
    if(pricesSize==1)
    {
        return 0;
    }
    for(int i=0;i<pricesSize;i++)
    {
        if(min>prices[i])
        {
            min=prices[i];
            n=i;
        }
        profit = prices[i] - min;
        if (profit > maxProfit) {
            maxProfit = profit;
    }
    }
    return maxProfit;
}