package DSA.Arrays;

import java.util.Arrays;

public class ArrayBasic {
    public static void main(String[] args) {
        // SYNTAX1:
        // datatype [] variable_name = new datatype[size];
        // SYNTAX2:
        // datatype [] variable_name = {data1, data2......dataN};

        //Q. Store 5 roll no.
        int[] rollNo = new int[5];
        // Assigning values to the indices of this rollNo array.
        rollNo[0] = 11;
        rollNo[1] = 12;
        rollNo[2] = 13;
        rollNo[3] = 14;
        rollNo[4] = 15;

        // OR directly
        // int [] rNO = {11, 12, 13, 14, 15};
        // This is Java Internal Syntax, and It's doing the same thing as above array creation method.

        int[] ros;
        // Declaration of array, ros is getting defined in the stack
        // This happens at compile time.

        ros = new int[5];
        // Initialization :  where the actual object is being created in the heap memory.
        // This happens at run time. AKA Dynamic Memory Allocation. (Assigning the memory space during the runtime.)
        // new keyword is used to create objects.
        // By default, It's going to assign default values according to the datatype.
        // In this case, 0 as value to all the indices of array object. i.e- [0, 0, 0, 0, 0]

        //Note:
        // 1. All the types of data present in the array should be of same type.
        // 2. In c++ and c, Array is stored in continuous memory locations.
        // 3. In java, it depends on JVM, whether the array elements allocation should be continuous or not.
        //      Because, array objects are stored in heap memory and In JLS, its mentioned that heap objects
        //      are not continuous. Hence, array objects in java may not be continuous. It all depends on JVM.
        // 4. Arrays always starts from index 0 and not from 1.


        // Creating a string array.
        String[] arr = new String [5];
        System.out.println(arr[0]);
        // For Non-primitive datatype, by default value is null.
        // We can only assign null to Non-primitive datatype only.

        //Making a copy of Array
        // This will create a copy of Array rollNo with a different memory location
        // and will not point to the same memory location in heap.
        int[] number = Arrays.copyOf(rollNo, rollNo.length);
        System.out.println(Arrays.toString(number));
    }
}
