import java.util.Scanner;

public class StudentScore {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter # of students: ");
        int total_students = input.nextInt();
        double[] score = new double[total_students];
        
        for (int i = 0; i < total_students; ++i) {
            System.out.print("Enter student's score for student " + (i + 1) + ": ");
            score[i] = input.nextDouble();
        }

        int[] grade = classifyScore(score);

        for (int i = 0; i < grade.length; ++i) {
            System.out.printf("# of students obtained grade %c: %d (%.1f %%)\n",
                              (char)(65 + i), grade[i], calcPercentage(grade[i], total_students));
        }
    }
    public static int[] classifyScore(double[] score) {
        int[] grade = new int[5];
        for (int i = 0; i < score.length; ++i) {
            if (score[i] >= 80 && score[i] <= 100)
                ++grade[0];
            else if (score[i] >= 65)
                ++grade[1];
            else if (score[i] >= 50)
                ++grade[2];
            else if (score[i] >= 40)
                ++grade[3];
            else if (score[i] >= 0)
                ++grade[4];
        }
        return grade;
    }
    public static double calcPercentage(int grade, int tStudents) {
        return grade * 100.0 / tStudents;
    }
}