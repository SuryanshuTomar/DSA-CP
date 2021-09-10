package DSA.Arrays;

import java.util.Arrays;

public class PassingArray {
    public static void main(String[] args) {
        int [] nums = {11, 22, 33, 44};
        System.out.println(Arrays.toString(nums));
        change(nums);
        System.out.println(Arrays.toString(nums));
    }

    static void change(int[] arr){
        arr[0] = 99;
    }
}
