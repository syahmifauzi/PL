
public class Vehicle {
  private String name;
  private String size;
  private int currentDirection;
  private int currentVelocity;

  // Constructor(s)
  Vehicle(String name, String size) {
    this.name = name;
    this.size = size;
    this.currentDirection = 0;
    this.currentVelocity = 0;
  }

  // Setters
  public void setCurrentDirection(int direction) {
    this.currentDirection = direction;
    System.out.println("Vehicle is streeing at " + this.currentDirection + " degrees.");
  }
  public void setCurrentVelocity(int velocity) {
    this.currentVelocity = velocity;
  }

  // Additional Methods
  public void move(int direction, int velocity) {
    this.currentDirection = direction;
    this.currentVelocity = velocity;
    System.out.println("Moving at speed " + this.currentVelocity +
      " and at " + this.currentDirection + " degree.");
  }
  public void stop() {
    this.currentVelocity = 0;
    System.out.println("Stop at speed " + this.currentVelocity +
      " and at " + this.currentDirection + " degree.");
  }

  // Getters
  public String getName() {
    return this.name;
  }
  public String getSize() {
    return this.size;
  }
  public int getCurrentDirection() {
    return this.currentDirection;
  }
  public int getCurrentVelocity() {
    return this.currentVelocity;
  }

}