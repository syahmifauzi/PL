
public class Main {
  public static void main(String[] args) {
    System.out.println("Hello World!");
    // base class -> general class
    // subclasses inherit from the base class
    Animal animal = new Animal("Animal", 123.2, 443.2);
    // animal.move();

    Cat cat = new Cat("Cat", 40.2, 50.3, true, true);
    // cat.chew();
    // cat.eat();

    Fish fish = new Fish("Fish", 10.1, 15, false, true);
    fish.eat();
    fish.rest();
    fish.move();
  }
}