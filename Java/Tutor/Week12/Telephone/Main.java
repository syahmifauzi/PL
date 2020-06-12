
interface Telephone {
  void powerOn(); // same as public abstract void powerOn()
  void dialNumber(int number);
  void call(int number);
  void answer();
}

class DeskPhone implements Telephone {
  private int myNumber;
  DeskPhone(int myNumber) {
    this.myNumber = myNumber;
  }
  public void powerOn() {
    System.out.println("DeskPhone power on...");
  }
  public void dialNumber(int number) {
    System.out.println("DeskPhone dialing " + this.myNumber);
  }
  public void call(int number) {
    System.out.println("DeskPhone calling " + this.myNumber);
  }
  public void answer() {
    System.out.println("DeskPhone answering...");
  }
}

class SmartPhone implements Telephone {
  private int myNumber;
  SmartPhone(int myNumber) {
    this.myNumber = myNumber;
  }
  public void powerOn() {
    System.out.println("SmartPhone power on...");
  }
  public void dialNumber(int number) {
    System.out.println("SmartPhone dialing " + this.myNumber);
  }
  public void call(int number) {
    System.out.println("SmartPhone calling " + this.myNumber);
  }
  public void answer() {
    System.out.println("SmartPhone answering...");
  }
}

public class Main {
  public static void main(String[] args) {
    Telephone myDeskPhone = new DeskPhone(12345);
    myDeskPhone.powerOn();
    myDeskPhone.dialNumber(678910);
    myDeskPhone.call(678910);
    myDeskPhone.answer();

    System.out.println();

    Telephone mySmartPhone = new SmartPhone(874234);
    mySmartPhone.powerOn();
    mySmartPhone.dialNumber(54321);
    mySmartPhone.call(54321);
    mySmartPhone.answer();
  }
}