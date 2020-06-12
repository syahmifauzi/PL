import java.util.Scanner;

public class Factorial {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter a number: ");
        int n = input.nextInt();
        long sum = 1;

        for (int i = 1; i <= n; ++i)
            sum *= i;
        
        System.out.println(n + "! is " + sum);
    }
}