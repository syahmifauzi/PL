import java.util.Scanner;

public class E1 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter the number of students: ");
        int n = input.nextInt();
        int[] score = new int[n];
        // Get the scores
        System.out.print("Enter " + n + " scores: ");
        for (int i = 0; i < n; ++i)
            score[i] = input.nextInt();
        // Display the grades
        displayGrades(score);

    }
    public static void displayGrades(int[] score) {
        // Get the best score
        int best = bestScore(score);
        char grade = 'A';
        // Display the grades
        for (int i = 0; i < score.length; ++i) {
            if (score[i] >= best - 10)
                grade = 'A';
            else if (score[i] >= best - 20)
                grade = 'B';
            else if (score[i] >= best - 30)
                grade = 'C';
            else if (score[i] >= best - 40)
                grade = 'D';
            else
                grade = 'E';
            System.out.println("Student " + i + " score is " + score[i] + " and grade is " + grade);
        }

    }
    public static int bestScore(int[] score) {
        int best = score[0];
        for (int i = 1; i < score.length; ++i)
            if (best < score[i])
                best = score[i];
        return best;
    }
}