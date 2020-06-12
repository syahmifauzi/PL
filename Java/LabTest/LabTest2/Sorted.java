import java.util.Scanner;
import java.util.Arrays;

public class Sorted {
    private static Scanner input = new Scanner(System.in);
    public static void main(String[] args) {
        System.out.print("Enter total integers: ");
        int n = input.nextInt();
        int[] list = new int[n];

        System.out.print("Enter list: ");
        for (int i = 0; i < n; ++i)
            list[i] = input.nextInt();
        
        if (isSorted(list))
            System.out.println("The list is already sorted\n");        
        else
            System.out.println("The list is not sorted\n");        
    }
    public static Boolean isSorted(int[] list) {
        int[] list2 = new int[list.length];
        System.arraycopy(list, 0, list2, 0, list.length);
        Arrays.sort(list2);
        return Arrays.equals(list, list2); // list == list2 ?
    }
}
