
class ProgrammingBooks {
  private String name;
  ProgrammingBooks(String name) {
    this.name = name;
  }
  public void description() {
    System.out.println("Generic Programming Description");
  }
  public String getName() {
    return this.name;
  }
}

class CleanCode extends ProgrammingBooks {
  CleanCode() {
    super("C++ Cleane Code");
  }
  public void description() {
    System.out.println("Clean Code Programming Description");
  }
}

class CodeComplete extends ProgrammingBooks {
  CodeComplete() {
    super("C++ Code Complete");
  }
  public void description() {
    System.out.println("Code Complete Programming Description");
  }
}

class JavaScript extends ProgrammingBooks {
  JavaScript() {
    super("JS");
  }
  public void description() {
    System.out.println("JavaScript Programming Description");
  }
}

class Python extends ProgrammingBooks {
  Python() {
    super("Py");
  }
  public void description() {
    System.out.println("Python Programming Description");
  }
}

class Assembly extends ProgrammingBooks {
  Assembly() {
    super("Machine Language");
  }
  public void description() {
    System.out.println("Assembly Programming Description");
  }
}

public class Main {
  public static void main(String[] args) {
    ProgrammingBooks[] ProgBook = new ProgrammingBooks[5];
    ProgBook[0] = new CleanCode();
    ProgBook[1] = new CodeComplete();
    ProgBook[2] = new JavaScript();
    ProgBook[3] = new Python();
    ProgBook[4] = new Assembly();
    for (int i = 0; i < ProgBook.length; ++i) {
      System.out.println(ProgBook[i].getName());
      ProgBook[i].description();
      System.out.println();
    }
  }
}