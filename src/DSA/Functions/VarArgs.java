package DSA.Functions;

import java.util.Arrays;

public class VarArgs {
    public static void main(String[] args) {
        fun(2,3,4,5,6,7,8,9);
        multiple(10, 20, "DeathSlayer", "Alex Mercer");
    }

    // This is how we can pass the arguments using three dots
    // before the passing argument when we don't know how much arguments we are gonna pass.
    // Here, the data is stored in var in the form of array.
    static void fun(int ...var){
        System.out.println(Arrays.toString(var));
    }

    // Here is the example of when we want to pass both fixed & variable arguments in the method.
    // Variable length argument should always come at the end of the argument passing.
    static void multiple(int a, int b, String ...var){
        System.out.println(Arrays.toString(var));
        System.out.println(a);
        System.out.println(b);
    }
}
