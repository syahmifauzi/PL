import java.util.Scanner;

public class DetermineGender {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the last 4 digits of your IC: ");
        int ic = input.nextInt();

        if (ic % 2 == 0)
            System.out.println("Female");
        else
            System.out.println("Male");
    }
}