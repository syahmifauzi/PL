void main() {

  /* create a person object (new keyword is optional) */
  Person p1 = new Person('Syahmi Fauzi', 22);
  print(p1.name);
  p1.showInfo();

  var p2 = Person.guest();
  p2.showInfo();
  print(Person.hairColor);
  p2.showAge();

  var s1 = Student('Faiz', 19, 152942);
  s1.showInfo();
  s1.showAge();

  // using getter and setter
  print(s1.studentId);
  s1.studentId = 999999;
  print(s1.studentId);

}

// inherit super class
class Person {
  final name; // type will be defined by inferred value at runtime
  int age;
  static const hairColor = 'black'; // compile time const, must have static

  /* positional constructor */
  Person(this.name, [this.age = 18]);

  /* named constructor method (can't start with underscore) */
  Person.guest({this.name = 'Guest', this.age = 18});

  // method
  void showInfo() {
    print(name);
    print(age);
  }

  void showAge() {
    print('Age is ${this.age}');
  }
}

class Student extends Person {
  int id;

  Student(String name, int age, this.id) : super(name, age);

  void showInfo() {
    super.showInfo();
    print(this.id);
  }

  // method overriding (redefine method)
  @override
  void showAge() {
    print('Student\'s age is ${super.age} yo');
  }

  // getter and setter
  int get studentId => id;
  set studentId(int newId) => id = newId;
}
