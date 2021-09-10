package DSA.Functions;

public class Swap {
    public static void main(String[] args) {
        int x = 10;
        int y = 30;

        String name = "Death Slayer";

        greet(name); //In here, value of the reference variable name is passed.
        swapping(x , y);
    }

    //In java, there is no such thing called Pass by Reference, Java only supports Pass by Value
    //Now, this naam is the copy of the reference variable name and now points towards the
    //same object which is "Death Slayer" in the heap memory.
   static void greet(String naam) {
        naam = "Alex Mercer"; //Creating a new object
       System.out.println(naam);
       //Now, Instead of change the value of the original object,
       // the naam reference value is pointing towards different object in the heap memory
       //which has a value "Alex Mercer".
    }

    static void swapping(int a, int b){
        int temp = a;
        a = b;
        b = temp;
        //This will swap the numbers in the method scope only and will not the original values.
    }
}

// Note:
// 1. For Primitive Data : Its simple passing the value
// 2. For Objects : It's passing the value of the reference variable
// (value of reference variable's address that points towards the original object in the heap.)
// 3. But if you make a change to the object via a copy of reference variable, then the value
// of the original object is gonna change. We can do this sort of thing in arrays.
