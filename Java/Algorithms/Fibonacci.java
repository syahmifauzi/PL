import java.util.Scanner;

public class Fibonacci {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Fibonacci # up to: ");
        int n = input.nextInt();
        fibonacci(0, 1, n);
        System.out.println();
    }
    public static void fibonacci(int n0, int n1, int n) {
        if (n0 + n1 > n) return;
        System.out.print(n0 + n1 + " ");
        fibonacci(n1, n0 + n1, n);
    }
}