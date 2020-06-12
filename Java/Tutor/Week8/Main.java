
public class Main {
  public static void main(String[] args) {
    Outlander myOutlanderCar = new Outlander();
    myOutlanderCar.setCurrentDirection(45);
    myOutlanderCar.accelerate(50);
    myOutlanderCar.accelerate(30);
    myOutlanderCar.accelerate(-40);
    myOutlanderCar.stop();
  }
}
