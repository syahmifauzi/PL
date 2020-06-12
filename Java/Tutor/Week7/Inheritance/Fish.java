
public class Fish extends Animal {
  private Boolean hasGills;
  private Boolean hasFins;

  Fish(String name, double weight, double height, Boolean hasGills, Boolean hasFins) {
    super(name, weight, height);
    this.hasGills = hasGills;
    this.hasFins = hasFins;
  }

  public void rest() {
    System.out.println("Fish.rest() is called");
  }

  @Override
  public void move() {
    System.out.println("Fish.move() is override Animal.move()");
  } 
}