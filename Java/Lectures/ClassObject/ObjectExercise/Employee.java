
public class Employee {
    public String name;
    public int age;
    public int salary;
    public int increment;
    Employee() {}
    Employee(String name, int age) {
        this.name = name;
        this.age = age;
    }
    Employee(String name, int salary, int increment) {
        this.name = name;
        this.salary = salary;
        this.increment = increment;
    }
    public void showNameAgeSalary() {
        System.out.println("Name: " + this.name);
        System.out.println("Age: " + this.age);
        System.out.println("Salary: " + this.salary);
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
        e1.name = "Mr. Andy";
        e1.age = 22;
        e1.salary = 2000;
        e1.increment = 200;
        e1.showNameAgeSalary();
        
        Employee e2 = new Employee("Miss Sandy", 30);
        e2.showNameAge();

        Employee e3 = new Employee("Mr. Alan", 4000, 300);
        System.out.println("Salary: " + e3.salary);
        e3.calcCurrentSalary();
        System.out.println("New Salary: " + e3.salary);
    }
}
