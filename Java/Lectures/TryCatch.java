
public class TryCatch {
  public static void main(String[] args) {
    int x = 14;
    int y = 10;
    try {
      System.out.println(x / y);
    } catch(ArithmeticException ex) {
      System.out.println("Cannot divided by zero");
    }
    System.out.println("The program still run");
  }
}