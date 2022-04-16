package DSA.Patterns;

public class Patterns {
    public static void main(String[] args) {
        int noOfLines = 5;
//
//        pattern1(noOfLines);
//        pattern2(noOfLines);
//        pattern3(noOfLines);
//        pattern4(noOfLines);
//        pattern5(noOfLines);
//        pattern6(noOfLines);
//        pattern7(noOfLines);
//        pattern8(noOfLines);
//        pattern9(noOfLines);
//        pattern10(noOfLines);
//        pattern11(noOfLines);
//        pattern12(noOfLines);
//        pattern13(noOfLines);
//        pattern14(noOfLines);
        pattern15(noOfLines);

    }

    private static void pattern15(int noOfLines) {
        for (int row = 1; row <= 2 * noOfLines ; row++) {
            int noOfStarInCol = row > noOfLines ?  2*(2 * noOfLines - row) - 1: 2 * row -1;
            int spaceInCol = row > noOfLines ? row - noOfLines: noOfLines - row;
            for (int space = 0; space < spaceInCol; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= noOfStarInCol; column++) {
                if (column == 1 || column == noOfStarInCol){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    private static void pattern14(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int column = 1; column <= 2 * noOfLines - row; column++) {
                if (column == row || row == 1 || column == 2 * noOfLines - row){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    private static void pattern13(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 0; space < noOfLines - row; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= 2 * row -1; column++) {
                if (column == 1 || row == noOfLines || column == 2 * row -1){
                    System.out.print("*");
                }
                else{
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
    }

    private static void pattern12(int noOfLines) {
        for (int row = 1; row <= 2 * noOfLines ; row++) {
            int colInRow = row > noOfLines ? row - noOfLines : noOfLines - row + 1;
            int spaceinCol = row > noOfLines ? 2 * noOfLines - row : row - 1;
            for (int space = 0; space < spaceinCol; space++) {
                System.out.print(" ");
            }
            for (int column = 0; column < colInRow; column++) {
                System.out.print("*" + " ");
            }
            System.out.println();
        }
    }

    private static void pattern11(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 0; space < row; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= noOfLines - row + 1; column++) {
                System.out.print("*" + " ");
            }
            System.out.println();
        }
    }

    private static void pattern10(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 0; space < noOfLines - row; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= row; column++) {
                System.out.print("*" + " ");
            }
            System.out.println();
        }
    }

    private static void pattern9(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 1; space <= row - 1; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= 2 * (noOfLines - row + 1) - 1; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern8(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 1; space <= noOfLines - row; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= 2 * row - 1; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern7(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 1; space <= row - 1; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= noOfLines - row + 1; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
    }

    private static void pattern6(int noOfLines) {
        for (int row = 1; row <= noOfLines ; row++) {
            for (int space = 1; space <= noOfLines - row; space++) {
                System.out.print(" ");
            }
            for (int column = 1; column <= row; column++) {
                System.out.print("*");
            }
            System.out.println();
        }
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
