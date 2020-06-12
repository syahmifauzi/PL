import java.util.Date;

public class Main {
  public static void main(String[] args) {
    Student student = new Student(111223333, 1970, 5, 3);
    BirthDate date = student.getBirthDate();
    System.out.println(date);
    date.setYear(2010); // Now the student birth year is changed!
    System.out.println(date);
    date.setYear(1234); // Now the student birth year is changed!
    System.out.println(date);
    date.setYear(5678); // Now the student birth year is changed!
    System.out.println(date);
    date.setYear(3987); // Now the student birth year is changed!
    System.out.println(date);
  }
}