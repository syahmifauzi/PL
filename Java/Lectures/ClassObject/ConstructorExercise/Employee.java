
public class Employee {
    private String name;
    private int age;
    private int salary;
    private int increment;
    Employee() {
        this.name = "Mr Andy";
        this.age = 22;
        this.salary = 2000;
        this.increment = 200;
    }
    Employee(String name, int age) {
        this.name = name;
        this.age = age;
    }
    Employee(String name, int salary, int increment) {
        this.name = name;
        this.salary = salary;
        this.increment = increment;
        this.calcCurrentSalary();
    }
    public void showAllDetails() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Salary: " + this.salary);
        System.out.println("Annual Increment: " + this.increment);
        System.out.println();
    }
    public void showNameAge() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println();
    }
    public void calcCurrentSalary() {
        this.salary = this.salary + this.increment;
    }

    public static void main(String[] args) {
        Employee e1 = new Employee();
        e1.showAllDetails();
        
        Employee e2 = new Employee("Miss Sandy", 30);
        e2.showNameAge();

        Employee e3 = new Employee("Mr. Alan", 4000, 300);
        e3.showAllDetails();
    }
}
