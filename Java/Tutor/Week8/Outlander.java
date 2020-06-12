
public class Outlander extends Car {
  private int roadServicesMonthly;

  // Constructor(s)
  Outlander() {
    super("Outlander", "4WD", 4, 4, 6, false);
  }

  // Additional Methods
  public void accelerate(int rate) {
    int newVelocity = getCurrentVelocity() + rate;
    if (newVelocity <= 0)
      setCurrentGears(0);
    else if (newVelocity <= 10)
      setCurrentGears(1);
    else if (newVelocity <= 20)
      setCurrentGears(2);
    else if (newVelocity <= 30)
      setCurrentGears(3);
    else if (newVelocity <= 40)
      setCurrentGears(4);
    else if (newVelocity <= 50)
      setCurrentGears(5);
    else
      setCurrentGears(6);

    if (newVelocity > 0)
      move(getCurrentDirection(), newVelocity);
    else
      stop();
  }
}