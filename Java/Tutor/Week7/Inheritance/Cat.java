
public class Cat extends Animal {
  // states specific to dog class
  private Boolean hasEyes;
  private Boolean hasTail;

  // constructor must same with base class + few in of this class
  Cat(String name, double weight, double height, Boolean hasEyes, Boolean hasTail) {
      super(name, weight, height);
      this.hasEyes = hasEyes;
      this.hasTail = hasTail;
  }

  // specific methods for cat class
  public void chew() {
    System.out.println("Cat.chew() is called");
  }

  // override the base method
  @Override
  public void eat() {
    System.out.println("Cat.eat() is override Animal.eat()");
    // super.eat();
  }
}