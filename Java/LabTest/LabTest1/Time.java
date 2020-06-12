import java.util.Scanner;

public class Time {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter total seconds: ");
        int sec = input.nextInt();
        int min = sec / 60;
        sec %= 60;
        System.out.println(min + "m : " + sec + "s");
    }
}