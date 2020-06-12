import java.util.Scanner;
import java.util.Date;

public class MidTerm {
  private static Scanner input = new Scanner(System.in);
  public static void main(String[] args) {
    // // Get the input using scanner
    System.out.print("Enter an integer: ");
    int inInt = input.nextInt();
    System.out.println("inInt is " + inInt);

    System.out.print("Enter a float: ");
    double inDouble = input.nextDouble();
    System.out.println("inDouble is " + inDouble);

    System.out.print("Enter a string: ");
    String inString = input.next();
    System.out.println("inString is " + inString);

    // Working with Date object
    Date fullDate = new Date();
    System.out.println("Full date is " + fullDate.toString());

    // Working with functions
    System.out.println(inInt + " Factorial: " + factorial(inInt));
    System.out.println("\nFibonacci up to " + inInt + ": ");
    fibonacci(0, 1, inInt);
    System.out.println("\n\nPrime number up to " + inInt);
    for (int i = 0; i <= inInt; ++i)
      if (isPrimeNumber(i))
        System.out.print(i + " ");
    System.out.println("\n");

    // Working with arrays
    int[] list1 = new int[inInt];
    double[] list2 = {1.2, 2.3, 3.4};
    System.out.print("Enter " + inInt + " integers: ");
    for (int i = 0; i < list1.length; ++i)
      list1[i] = input.nextInt();
    System.out.print("List 1: ");
    for (int i = 0; i < list1.length; ++i)
      System.out.print(list1[i] + " ");
    System.out.println();
    System.out.print("List 2: ");
    for (int i = 0; i < list2.length; ++i)
      System.out.print(list2[i] + " ");
    System.out.println();

    // Math class Random number

    // Methods overloading
  }

  public static long factorial(int n) {
    long sum = 1;
    for (int i = 1; i <= n; ++i)
      sum *= i;
    return sum;
  }

  public static void fibonacci(int n0, int n1, int n) {
    if (n0 + n1 > n) return;
    System.out.print(n0 + n1 + " ");
    fibonacci(n1, n0 + n1, n);
  }

  public static boolean isPrimeNumber(int n) {
    if (n <= 1)
      return false;
    if (n <= 3)
      return true;
    if (n % 2 == 0 || n % 3 == 0)
      return false;
    for (int i = 5; i * i <= n; i += 2)
      if (n % i == 0)
        return false;
    return true;
  }
}