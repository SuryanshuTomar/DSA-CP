package Leetcode.Arrays;

import java.util.Arrays;

public class LeetCode832 {
    public static void main(String[] args) {
        int[][] image  = {{1,1,0},{1,0,1},{0,0,0}};
        int[][] flippedImage = flipAndInvertImage(image);
        for(int[] row : flippedImage){
            System.out.println(Arrays.toString(row));
        }
    }

    private static int[][] flipAndInvertImage(int[][] image) {
        for(int[] row : image){
            for (int col = 0; col < (image[0].length + 1)/2 ; col++) {
                // reversing the array using two pointer
                // inverting the array using xor
                int temp = row[col] ^ 1;
                row[col] = row[image[0].length - col - 1] ^ 1;
                row[image[0].length - col - 1] = temp;
            }
        }
        return image;
    }
}
