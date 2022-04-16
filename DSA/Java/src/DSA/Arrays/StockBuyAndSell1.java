package DSA.Arrays;

import java.util.Arrays;

/*
    Q- You are given an array prices where prices[i] is the price of a given stock on the ith day.
       You want to maximize your profit by choosing a single day to buy one stock and
       choosing a different day in the future to sell that stock.
       Return the maximum profit you can achieve from this transaction.
       If you cannot achieve any profit, return 0.

    Approach 1: Naive Approach or Brute Force Approach:
    A simple approach is to try buying the stocks and selling them on every single
    day when profitable and store the maximum profit in till the end.

    Approach 2: Optimized Approach using Auxiliary space
    In this approach, we will do some pre-preprocessing on an array and store it in an
    auxiliary array. In Auxiliary array, we'll store the maximum sell value that could be
    possible from the last to first day. and then try to maximize the profit by comparing the
    stock prices to the auxiliary array corresponding days.

    Approach 3: Optimized Approach without using Auxiliary space
    We will traverse the array from 0 to end. We'll try to sell the stock every day and
    for that we will check the minimum stock price so far and if we sell it
    today(on current iteration) then, will we get the maximum profit out of it or not.
 */
public class StockBuyAndSell1 {
    public static void main(String[] args) {
        int[] stockPrices = {5, 2, 6, 1, 4, 8};
        int stockDays = stockPrices.length;

        //Approach 1: Brute Force Approach
        // TC: 0(n^2) and AS: 0(1)
        findMaxProfit1(stockPrices, stockDays);

        //Approach 2: Optimized Approach using Auxiliary space
        // TC: 0(n) and AS: 0(n)
        findMaxProfit2(stockPrices, stockDays);

        //Approach 2: Optimized Approach without using Auxiliary space
        // TC: 0(n) and AS: 0(1)
        findMaxProfit3(stockPrices, stockDays);
    }

    private static void findMaxProfit3(int[] stockPrices, int stockDays) {
        int minStockPriceSoFar = stockPrices[0];
        int maxProfitTillNow = 0;

        for (int i = 0; i < stockDays; i++) {
            int profit = 0;
            minStockPriceSoFar = Math.min(minStockPriceSoFar, stockPrices[i]);
            profit = stockPrices[i] - minStockPriceSoFar;
            maxProfitTillNow = Math.max(maxProfitTillNow, profit);
        }

        System.out.println(maxProfitTillNow);
    }

    private static void findMaxProfit2(int[] stockPrices, int stockDays) {
        int maxProfit = 0;
        int[] maxProfitPossibilityAA = new int[stockDays];

        maxProfitPossibilityAA[stockDays-1] = stockPrices[stockDays-1];
        for (int i = stockDays-2 ; i >= 0 ; i--) {
            maxProfitPossibilityAA[i] = Math.max(maxProfitPossibilityAA[i+1], stockPrices[i]);
        }

//        System.out.println(Arrays.toString(maxProfitPossibilityAA));
        for (int i = 0; i < stockDays; i++) {
            int currentprofit = 0;
            currentprofit = maxProfitPossibilityAA[i] - stockPrices[i];
            maxProfit = Math.max(maxProfit, currentprofit);
        }

        System.out.println(maxProfit);
    }

    private static void findMaxProfit1(int[] stockPrices, int stockDays) {
        int maxProfit = 0;
        int currentProfit = 0;

        for (int i = 0; i < stockDays ; i++) {
            for (int j = i; j < stockDays ; j++) {
                currentProfit = stockPrices[j] - stockPrices[i];
                if(maxProfit < currentProfit){
                    maxProfit = currentProfit;
                }
            }
        }

        System.out.println(maxProfit);
    }
}
