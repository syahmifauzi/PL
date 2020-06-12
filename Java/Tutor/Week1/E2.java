import java.util.Scanner;

public class E2 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {

        System.out.print("Enter the # of rows: ");
        int rows = input.nextInt();
        for (int i = 0; i <= rows; ++i) {
            for (int j = 0; j < i; ++j)
                System.out.print(j + 1 + " ");
            System.out.println();
        }
        // System.out.print("Enter size: ");
        // int size = input.nextInt();
        // int[] num = new int[s];
        // for (int i = 0; i < s; ++i)
        //     num[size]
    }
}