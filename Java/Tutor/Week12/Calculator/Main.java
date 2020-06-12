// Create a simple calculator -> +, -, *, /, % 
// Create an abstract class with 4 abstract methods
// Create another class that extends this class
// and implements all the abstract methods.
// In your main method -> ask for two integers.
// Lastly, do the all the operations.
import java.util.Scanner;

abstract class Calculator {
  private String name;
  protected int a;
  protected int b;
  Calculator(String name, int a, int b) {
    this.name = name;
    this.a = a;
    this.b = b;
  }
  public String getName() {
    return this.name;
  }
  public abstract int add();
  public abstract int sub();
  public abstract int mul();
  public abstract int div();
  public abstract int mod();
}

class Casio extends Calculator {
  Casio(int a, int b) {
    super("Casio", a, b);
  }
  public int add() {
    return this.a + this.b;
  }
  public int sub() {
    return this.a - this.b;
  }
  public int mul() {
    return this.a * this.b;
  }
  public int div() {
    return this.a / this.b;
  }
  public int mod() {
    return this.a % this.b;
  }
}

public class Main {
  private static Scanner input = new Scanner(System.in);
  public static void main(String[] args) {
    int a = input.nextInt();
    int b = input.nextInt();
    Casio cal = new Casio(a, b);
    System.out.println("Name: " + cal.getName());
    System.out.println("Add: " + cal.add());
    System.out.println("Sub: " + cal.sub());
    System.out.println("Mul: " + cal.mul());
    System.out.println("Div: " + cal.div());
    System.out.println("Mod: " + cal.mod());
  }
}