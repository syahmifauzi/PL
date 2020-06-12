import java.util.Scanner;

public class PrimeNumber {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Prime # up to: ");
        int n = input.nextInt();
        for (int i = 1; i <= n; ++i)
            if (isPrimeNumber(i))
                System.out.print(i + " ");
        System.out.println();
    }
    public static boolean isPrimeNumber(int n) {
        if (n <= 1)
            return false;
        if (n <= 3)
            return true;
        if (n % 2 == 0 || n % 3 == 0)
            return false;
        for (int i = 5; i * i <= n; i += 2)
            if (n % i == 0)
                return false;
        return true;        
    }
}