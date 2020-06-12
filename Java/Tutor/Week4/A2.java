/*
 * ASSIGNMENT 02: HIGH SCORE POSITION
 * Muhammad Syahmi Fathimi bin Ahmad Fauzi
 * 1715845
 * Section 1
 **/
import java.util.Scanner;

public class A2 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter total # of player: ");
        int n = input.nextInt();
        String[] name = new String[n];
        int[] score = new int[n];
        for (int i = 0; i < n; ++i) {
            System.out.print("Player #" + (i + 1) + " name: ");
            name[i] = input.next();
            System.out.print("Player #" + (i + 1) + " score: ");
            score[i] = input.nextInt();
        }
        displayHighScorePosition(name, score);
    }
    public static void displayHighScorePosition(String[] name, int[] score) {
        for (int i = 0; i < name.length; ++i) {
            System.out.println(name[i] + " managed to get into position " +
                               calculateHighScorePosition(score[i]) +
                               "th in the high score table.");
        }
    }
    public static int calculateHighScorePosition(int score) {
        if (score > 1000) return 1;
        if (score > 500) return 2;
        if (score > 100) return 3;
        return 4;
    }
}