
class Animal {
  private String name;
  public void walk() {
    System.out.println("Generic animal walk.");
  }
}

class Elephan extends Animal {
  public void walk() {
    System.out.println("Elephan walk slowly.");
  }
}

class Fox extends Animal {
  public void walk() {
    System.out.println("Fox walk faster.");
  }
}

class Cat extends Animal {
  public void walk() {
    System.out.println("Cat walk slowly.");
  }
}

class Shark extends Animal {
  public void walk() {
    System.out.println("Shark swim.");
  }
}

class Butterfly extends Animal {
  public void walk() {
    System.out.println("Butterfly fly.");
  }
}

public class Main {
  public static void main(String[] args) {
    Animal animal = new Animal();
    animal.walk();

    Animal elephan = new Elephan();
    elephan.walk();
    System.out.println(elephan instanceof Animal);
    System.out.println(new Fox() instanceof Animal);

    Animal[] myAnimal = new Animal[5];
    myAnimal[0] = new Elephan();
    myAnimal[1] = new Fox();
    myAnimal[2] = new Cat();
    myAnimal[3] = new Shark();
    myAnimal[4] = new Butterfly();
    for (int i = 0; i < myAnimal.length; ++i)
      myAnimal[i].walk();
  }
}