import java.util.Scanner;

public class HourMinSec {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter total # of seconds: ");
        int hour, min, sec;
        sec = input.nextInt();
        hour = sec / 3600;
        sec %= 3600;
        min = sec / 60;
        sec %= 60;
        System.out.println(hour + "hr : " + min + "min : " + sec + "sec");
    }
}