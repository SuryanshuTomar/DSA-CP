package DSA.Arrays;

/*
    Q- You are given an integer array prices where prices[i] is the price of a given
    stock on the ith day. On each day, you may decide to buy and/or sell the stock.
    You can only hold at most one share of the stock at any time.
    However, you can buy it then immediately sell it on the same day.
    Find and return the maximum profit you can achieve.

 */

public class StockBuyAndSell2 {
    public static void main(String[] args) {
    int[] stockPrices = {5, 2, 6, 1, 4, 7, 3, 6};
    int stockDays = stockPrices.length;

    /*
        Approach 1: If we make and analyze the graph, we notice that the points of interest
         are the consecutive valleys and peaks.
         Mathematically speaking: TotalProfit=∑i(height(peaki)−height(valleyi))
         The key point is we need to consider every peak immediately following a valley to
         maximize the profit.
         In case we skip one of the peaks (trying to obtain more profit),
         we will end up losing the profit over one of the transactions leading to an overall
         lesser profit.

        For example, in the above case,
        if we skip peaki and valleyj trying to obtain more profit by considering points with
        more difference in heights, the net profit obtained will always be lesser than the
        one obtained by including them, since C will always be lesser than A+B.

        TC: 0(n) and AS: 0(1)

     */
        findMaximizedProfit1(stockPrices, stockDays);

    /*
    Approach 2: Optimized Approach:
        In this, we are just checking if the current day price is greater than yesterday
        and if yes then calculating the profit and adding the new profit to the older one.

        TC: 0(n) and AS: 0(1)
     */

    findMaximizedProfit2(stockPrices, stockDays);
        int i = 0;
        int valley = stockPrices[0];
        int peak = stockPrices[0];
        int maxprofit = 0;
        while (i < stockDays - 1) {
            while (i < stockDays - 1 && stockPrices[i] >= stockPrices[i + 1])
                i++;
            valley = stockPrices[i];
            while (i < stockDays - 1 && stockPrices[i] <= stockPrices[i + 1])
                i++;
            peak = stockPrices[i];
            maxprofit += peak - valley;
        }
        System.out.println(maxprofit);
    }

    private static void findMaximizedProfit1(int[] stockPrices, int stockDays) {

    }

    private static void findMaximizedProfit2(int[] stockPrices, int stockDays) {
        int maximizedProfit = 0;

        for (int i = 1; i < stockDays; i++) {
            if(stockPrices[i] > stockPrices[i-1]){
                maximizedProfit += (stockPrices[i] - stockPrices[i-1]);
            }
        }
        System.out.println(maximizedProfit);
    }
}
