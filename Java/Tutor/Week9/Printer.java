/*
	* Create a class called Printer and demonstrate proper encapsulation techniques.
	* It will simulate a real computer printer.
	* It should have fields for the inkLevel, number of pages printed and also
	* whether it is a duplex printer. (capable of printing on both sides of the paper).
	* add methods to fill up the ink level, (up to a maximum of 100 percent).
	* add another method to simulate printing of a page. (which should increase the number
	* pages printed.)
	* Decide on the scope whether to user constructor, and anything else you think is needed.
	*
* */

public class Printer {
  private int inkLevel = 0;
  private int printedPages;
  private boolean isDuplex;

  Printer(int printedPages, boolean isDuplex) {
    this.printedPages = printedPages;
    this.isDuplex = isDuplex;
    this.inkLevel = 0;
    System.out.println("Printed Pages: " + this.printedPages);
  }

  public void addInkLevel(int inkLevel) {
    if (this.inkLevel + inkLevel <= 0)
      this.inkLevel = 0;
    else if (this.inkLevel + inkLevel <= 100)
      this.inkLevel += inkLevel;
    else
      this.inkLevel = 100;
    System.out.println("Ink Level: " + this.inkLevel);
  }

  public int addPrintedPage(int newPages) {
    if (isDuplex) {
      newPages /= 2;
      System.out.println("Duplex mode is on.");
    }
    this.printedPages += newPages;
    System.out.println("Printed Pages: " + this.printedPages);
    return this.printedPages;
  }

  public static void main(String[] args) {
    Printer p1 = new Printer(23, true);
    p1.addInkLevel(20);
    System.out.println("Total Printed Pages: " + p1.addPrintedPage(4));
    System.out.println("Total Printed Pages: " + p1.addPrintedPage(6));
    System.out.println("Total Printed Pages: " + p1.addPrintedPage(8));
  }
}