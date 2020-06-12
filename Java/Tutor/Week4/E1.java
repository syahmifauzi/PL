import java.util.Scanner;

public class E1 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter an integer: ");
        int n = input.nextInt();
        System.out.println("Sum All #: " + sumAll(n));
        System.out.println("Sum First & Last #: " + sumFirstAndLast(n));
        System.out.println("Sum Even #: " + sumEven(n));
        System.out.println("Sum Odd #: " + sumOdd(n));
        System.out.println("Smallest #: " + smallest(n));
        System.out.println("Largest #: " + largest(n));
        System.out.println("Reverse #: " + reverse(n));
    }
    public static int sumAll(int n) {
        int sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    public static int sumFirstAndLast(int n) {
        int first = 0;
        int last = n % 10;
        while (n > 0) {
            first = n % 10;
            n /= 10;
        }
        return first + last;
    }
    public static int sumEven(int n) {
        int sum = 0;
        while (n > 0) {
            if (n % 2 == 0)
                sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    public static int sumOdd(int n) {
        int sum = 0;
        while (n > 0) {
            if (n % 2 != 0)
                sum += n % 10;
            n /= 10;
        }
        return sum;
    }
    public static int smallest(int n) {
        int smallest = n % 10;
        while (n > 0) {
            if (smallest > n % 10)
                smallest = n % 10;
            n /= 10;
        }
        return smallest;
    }
    public static int largest(int n) {
        int largest = n % 10;
        while (n > 0) {
            if (largest < n % 10)
                largest = n % 10;
            n /= 10;
        }
        return largest;
    }
    public static int reverse(int n) {
        int reverse = 0;
        while (n > 0) {
            int rem = n % 10;
            reverse = reverse * 10 + rem;
            n /= 10;
        }
        return reverse;
    }
}