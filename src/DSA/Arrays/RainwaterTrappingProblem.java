package DSA.Arrays;
/*
Q- Consider its raining, Given the height of n buildings, find out how many units of rain water
    can be stored in between the buildings. Consider the width of each building to be 1.

Approach 1 - Brute Force Approach -
   Approach: The idea is to traverse every array element and find the highest bars on the left and right sides.
   Take the smaller of two heights.
   The difference between the smaller height and height of the current element is the amount of water that can
   be stored in this array element.

Algorithm:
    Traverse the array from start to end.
    For every element, traverse the array from start to that index and find the maximum height (a) and traverse the array from the current index to end, and find the maximum height (b).
    The amount of water that will be stored in this column is min(a,b) – array[i], add this value to the total amount of water stored
    Print the total amount of water stored.

Approach 2: Optimized Approach using Auxiliary Space
    Approach: In the previous solution, to find the highest bar on the left and right,
    array traversal is needed which reduces the efficiency of the solution.
    To make this efficient one must pre-compute the highest bar on the left and right of every bar in linear time.
    Then use these pre-computed values to find the amount of water in every array element.

Algorithm:
    Create two arrays left and right of size n. create a variable max_ = INT_MIN.
    Run one loop from start to end. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign left[i] = max_
    Update max_ = INT_MIN.
    Run another loop from end to start. In each iteration update max_ as max_ = max(max_, arr[i]) and also assign right[i] = max_
    Traverse the array from start to end.
    The amount of water that will be stored in this column is min(a,b) – array[i],(where a = left[i] and b = right[i]) add this value to total amount of water stored
    Print the total amount of water stored.

NOTE: There are three more approach on GFG learn them after learning more concepts.
 */


public class RainwaterTrappingProblem {
    public static void main(String[] args) {
        int[] buildings = {3, 1, 2, 4, 0, 1, 3, 2};
//        int[] buildings = {1, 2, 3};
        int noOfBuildings = buildings.length;

        // Approach 1: Brute Force Approach
        // TC: 0(n^2) and AS: 0(1)
        findWaterTrapped1(buildings, noOfBuildings);

        // Approach 1: Optimized Approach using Auxiliary Space
        // TC: 0(n) and AS: 0(n)
        findWaterTrapped2(buildings, noOfBuildings);
    }

    private static void findWaterTrapped2(int[] buildings, int noOfBuildings) {
        int[] leftAA = new int[noOfBuildings];
        int[] rightAA = new int[noOfBuildings];

        leftAA[0] = buildings[0];
        for (int i = 1; i < noOfBuildings; i++) {
            leftAA[i] = Math.max(leftAA[i-1], buildings[i]);
        }

        rightAA[noOfBuildings-1] = buildings[noOfBuildings-1];
        for (int i = noOfBuildings-2 ; i >= 0 ; i--) {
            rightAA[i] = Math.max(buildings[i], rightAA[i+1]);
        }

        int waterTrapped = 0;
        for (int i = 0; i < noOfBuildings ; i++) {
            waterTrapped += Math.min(leftAA[i], rightAA[i]) - buildings[i];
        }
        System.out.println(waterTrapped);
    }

    private static void findWaterTrapped1(int[] buildings, int noOfBuildings) {
        int waterTrapped = 0;

        // Running the loop from i=1 to i< noOfBuildings-1 because, no water can be stored
        // on the first and the last building.
        for (int i = 1; i < noOfBuildings - 1; i++) {
            // Checking if the max height of a building on the left of the current building
            int maxHeightOfBuildingLeft = buildings[i];
            for (int j = i; j >= 0 ; j--) {
                maxHeightOfBuildingLeft = Math.max(maxHeightOfBuildingLeft, buildings[j]);
            }
            // Checking if the max height of a building on the right of the current building
            int maxHeightOfBuildingRight = buildings[i];
            for (int j = i+1 ; j < noOfBuildings; j++) {
                maxHeightOfBuildingRight = Math.max(maxHeightOfBuildingRight, buildings[j]);
            }

            waterTrapped = waterTrapped +
                    Math.min(maxHeightOfBuildingLeft, maxHeightOfBuildingRight) - buildings[i];
        }
        System.out.println(waterTrapped);
    }
}
