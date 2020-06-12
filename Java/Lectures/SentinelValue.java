import java.util.Scanner;

public class SentinelValue {
    public static void main(String[] args) {
        // Create a Scanner
        Scanner input = new Scanner(System.in);

        System.out.print("Enter a value ");
        int data = input.nextInt();

        int sum = 0;
        while (data != 0) {
            sum += data;
            System.out.print("Enter a value ");
            data = input.nextInt();
        }

        System.out.println("The sum is " + sum);
    }
}