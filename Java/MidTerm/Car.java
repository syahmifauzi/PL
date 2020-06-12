import java.util.Date;

public class Car {
  private String make;
  private int speed;
  private Date date;

  public Car(String newMake) {
    make = newMake;
    speed = 0;
    date = new Date();
  }

  public void accelerate(int s) {
    speed += s;
  }

  public int getSpeed() {
    return speed;
  }

  public Date getDate() {
    return date;
  }

  public static void main(String[] args) {
    Car a, b, c;
    a = new Car("Inspira");
    b = new Car("Jazz");
    c = b;
    a.accelerate(10);
    b.accelerate(80);
    a = c;
    c.accelerate(50);
    System.out.print(a.getSpeed() + " ");
    System.out.print(b.getSpeed() + " ");
    System.out.println(c.getSpeed() + " ");

    Date newDate = c.getDate();
    newDate = new Date();
    System.out.println(c.getDate());
    System.out.println(newDate);

    Date date = new Date();
    System.out.println(date);
    System.out.println(date.toString());
  }
}