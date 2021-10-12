package DSA.Patterns;

public class Patterns {
    public static void main(String[] args) {
        int noOfLines = 5;
//
//        pattern1(noOfLines);
//        pattern2(noOfLines);
//        pattern3(noOfLines);
//        pattern4(noOfLines);
        pattern5(noOfLines);

    }

    private static void pattern5(int noOfLines) {
        for (int row = 1; row <= 2 * noOfLines ; row++) {
            int noOfColInRow = row > noOfLines ? (2 * noOfLines) - row : row;
            for (int column = 1; column <= noOfColInRow; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern4(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int column = 1; column <= row; column++) {
                System.out.print(column + " ");
            }
            System.out.println();
        }
    }

    private static void pattern3(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            int col = noOfLines - row + 1;
            for (int column = 1; column <= col; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern2(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int column = 1; column <= row; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern1(int n) {
        for (int row = 1; row <= n ; row++) {
            for (int column = 1; column < n; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }
}
