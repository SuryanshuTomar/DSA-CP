package PrepBytes.IterationStatement;

import java.util.Scanner;

public class VPattern {
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        Character ch = scan.next().charAt(0);

        if(ch.equals('v') || ch.equals('V')){
            int space = 0;
            space = (5*2)-2;

            for (int i = 1; i <= 5 ; i++) {
                //Left part
                for (int j = 1; j <=i ; j++) {
                    System.out.print(j);
                }//Space
                for (int s = 0; s <space ; s++) {
                    System.out.print(" ");
                }

                //Right part
                for (int k = i; k >= 1 ; k--) {
                    System.out.print(k);
                }

                space = space - 2;
                System.out.println();
            }
        }
    }
}
