
public class Car extends Vehicle {
  private int wheels;
  private int doors;
  private int gears;
  private int currentGears;
  private boolean isManual;
  
  // Constructor(s)
  Car(String name, String size, int wheels, int doors, int gears, boolean isManual) {
    super(name, size);
    this.wheels = wheels;
    this.doors = doors;
    this.gears = gears;
    this.currentGears = 0;
    this.isManual = isManual;
  }

  // Setters
  public void setCurrentGears(int gear) {
    this.currentGears = gear;
    System.out.println("Car's gear is changed to " + this.currentGears);
  }
  public void setCurrentDirection(int direction, int velocity) {
    move(direction, velocity);
  }
  
  // Additional Methods

  // Getters

}