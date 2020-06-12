import java.util.Scanner;

public class E2 {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter # of values: ");
        int n = input.nextInt();
        int[] list1 = new int[n];
        double[] list2 = new double[n];
        System.out.print("Enter " + n + " integers: ");
        for (int i = 0; i < n; ++i)
            list1[i] = input.nextInt();
        System.out.print("Enter " + n + " doubles: ");
        for (int i = 0; i < n; ++i)
            list2[i] = input.nextDouble();
        // invoke overloading methods
        System.out.println("Average list1: " + average(list1));
        System.out.println("Average list2: " + average(list2));
        System.out.println("Idx of smallest value in list1: " + indexOfSmallestValue(list1));
        System.out.println("Idx of smallest value in list2: " + indexOfSmallestValue(list2));
    }
    public static int average(int[] n) {
        int sum = 0;
        for (int i = 0; i < n.length; ++i)
            sum += n[i];
        return sum / n.length;
    }
    public static double average(double[] n) {
        double sum = 0;
        for (int i = 0; i < n.length; ++i)
            sum += n[i];
        return sum / n.length;
    }
    public static int indexOfSmallestValue(int[] n) {
        int idx = 0;
        for (int i = 1; i < n.length; ++i)
            if (n[idx] > n[i])
                idx = i;
        return idx;
    }
    public static int indexOfSmallestValue(double[] n) {
        int idx = 0;
        for (int i = 1; i < n.length; ++i)
            if (n[idx] > n[i])
                idx = i;
        return idx;
    }
}