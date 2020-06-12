
interface Mr_Robot { // use interface because java doesn't support multi level inheritance
  public abstract void sing(); // same as void sing();
}

abstract class Robot { // abstract class
  private String name;
  Robot(String name) {
    this.name = name;
  }
  public void walk() {
    System.out.println("Walking...");
  }
  public abstract void talk(); // any class having an abstract method is an abstract class
  public abstract void sleep();
  public abstract void eat();
}

abstract class RobotV2 extends Robot {
  RobotV2() {
    super("rb");
  }
  public void talk() {
    System.out.println("Talking...");
  }
}

class RobotV3 extends RobotV2 implements Mr_Robot { // concrete class
  RobotV3() {
    super();
  }
  public void sleep() {
    System.out.println("Sleeping...");
  }
  public void eat() {
    System.out.println("Eating...");
  }
  public void sing() { // from the interface
    System.out.println("Singing...");
  }
}

public class Abstract {
  public static void main(String[] args) {
    Robot rb = new RobotV3();
    rb.walk();
    rb.talk();
    rb.sleep();
    rb.eat();

    RobotV3 rb1 = new RobotV3();
    rb1.sing();
  }
}