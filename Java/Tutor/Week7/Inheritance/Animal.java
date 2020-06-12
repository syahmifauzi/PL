
public class Animal {
  // some of the general states
  private String name;
  private double weight;
  private double height;

  Animal(String name, double weight, double height) {
      this.name = name;
      this.weight = weight;
      this.height = height;
  }

  // some general methods
  public void move() {
    System.out.println("Animal.move() is called");
  }


  public void eat() {
    System.out.println("Animal.eat() is called");
  }

  public String getName() {
    return this.name;
  }
}