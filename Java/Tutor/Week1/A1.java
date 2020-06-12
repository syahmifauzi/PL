/*
 * ASSIGNMENT 01: PYRAMID
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi
 * 1715845
 * Section 1
 **/
import java.util.Scanner;

public class A1 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter the # of rows: ");
        int rows = input.nextInt();
        // print the pyramid
        for (int i = 0; i < rows; ++i) {
            for (int j = 0; j < rows * 2; ++j) {
                if (j >= rows - i && j <= rows + i)
                    System.out.print("* ");
                else
                    System.out.print("  ");
            }
            System.out.println();
        }
    }
}