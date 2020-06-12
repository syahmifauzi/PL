import java.util.Scanner;

public class E0 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter # of integers: ");
        int n = input.nextInt();
        int[] nums = new int[n];

        System.out.print("Enter " + n + " integers: ");
        for (int i = 0; i < n; ++i)
            nums[i] = input.nextInt();
        
        System.out.println("sumAll: " + sumAll(nums));
        System.out.println("sumSquareNum: " + (int)sumSquareNum(nums));
        displaySquareNum(nums);
    }
    public static int sumAll(int[] n) {
        int sum = 0;
        for (int i = 0; i < n.length; ++i)
            sum += n[i];
        return sum;
    }
    public static long sumSquareNum(int[] n) {
        long sum = 0;
        for (int i = 0; i < n.length; ++i)
            sum += Math.pow(n[i], 2);
        return sum;
    }
    public static void displaySquareNum(int[] n) {
        System.out.print("displaySquareNum: ");
        for (int i = 0; i < n.length; ++i)
            System.out.print((int)Math.pow(n[i], 2) + " ");
        System.out.println();
    }
}