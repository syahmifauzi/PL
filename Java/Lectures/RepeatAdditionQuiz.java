import java.util.Scanner;

public class RepeatAdditionQuiz {
    public static void main(String[] args) {
        int num1 = (int)(Math.random() * 10);
        int num2 = (int)(Math.random() * 10);
    
        // Create a Scanner
        Scanner input = new Scanner(System.in);

        System.out.print("What is " + num1 + " + " + num2 + "? ");
        int ans = input.nextInt();

        while (num1 + num2 != ans) {
            System.out.print("Wrong answer. What is " + num1 + " + " + num2 + "? ");
            ans = input.nextInt();
        }

        System.out.println("You got the answer!");
    }
}