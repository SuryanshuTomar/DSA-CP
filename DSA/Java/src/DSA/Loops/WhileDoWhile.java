package DSA.Loops;

public class WhileDoWhile {
    public static void main(String[] args) {
        /*
         * SYNTAX FOR WHILE-LOOP:
         *
         * initialization;
         * while(condition)
         *  {
         *      //body
         *      counter;
         *  }
         */

        //Q. Print 1 to 5 numbers.
        int num = 1;
        while(num<6){
            System.out.println(num);
            num++;
        }

        /*
         * SYNTAX FOR DO-WHILE-LOOP:
         *
         * initialization;
         * do{
         *      //body
         *      counter;
         *  }
         * while(condition);
         */

        int n = 1;
        do{
            System.out.println(n);
            n++;
        }while (n<6);
    }
}
