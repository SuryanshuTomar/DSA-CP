package DSA.Functions;

// Shadowing in Java is the practice of using variables in overlapping scopes with the same name
// where the variable in low-level scope overrides the variable of high-level scope.

public class Shadowing {
    static int x = 90; //This will be shadowed at line 8.
    public static void main(String[] args) {
        System.out.println(x); //x = 90
        int x; // The class variable at line 7 is shadowed by this variable.
//        System.out.println(x);  // Scope will begin when value is initialized.
        x = 40;
        System.out.println(x); //x = 40
        fun();
    }

    static void fun(){
        System.out.println(x);
    }
}
