import java.util.Scanner;

public class E1 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter the no of students: ");
        int students = input.nextInt();

        // assume the first student has the highest score
        System.out.print("Enter a name: ");
        String name_1 = input.next();
        System.out.print("Enter a score: ");
        int score_1 = input.nextInt();
        // assume the second student has the second highest score
        System.out.print("Enter a name: ");
        String name_2 = input.next();
        System.out.print("Enter a score: ");
        int score_2 = input.nextInt();

        // swap the score if it is wrong
        if (score_1 < score_2) {
            String temp_name = name_1;
            name_1 = name_2;
            name_2 = temp_name;
            int temp_score = score_1;
            score_1 = score_2;
            score_2 = temp_score;
        }

        for (int i = 0; i < students - 2; ++i) {
            // get the next students
            System.out.print("Enter a name: ");
            String name = input.next();
            System.out.print("Enter a score: ");
            int score = input.nextInt();
            // get the highest score
            if (score > score_1) {
                name_2 = name_1;
                score_2 = score_1;
                name_1 = name;
                score_1 = score;
            } else if (score > score_2) {
                name_2 = name;
                score_2 = score;
            }
        }

        System.out.println("Top two students are:");
        System.out.println(name_1 + "'s score is " + score_1);
        System.out.println(name_2 + "'s score is " + score_2);
    }
}