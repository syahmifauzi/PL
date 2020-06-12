
public class Book {
    String title;
    int pageNo;
    double price;
    boolean isExpensive;
    char book;
    // No-argument constructor with no initialization
    /* Book() {
        System.out.println("This is no-args constructor with no initialization");
        System.out.println(title);
        System.out.println(pageNo);
        System.out.println(price);
        System.out.println(isExpensive);
        System.out.println(book);
    }*/
    // No-argument constructor with initialization
    Book() {
        System.out.println("This is no-args constructor with initialization");
        title = "Wonderland";
        pageNo = 300;
        price = 35.50;
        isExpensive = false;
        book = 'A';
        System.out.printf("%s, %d, %.2f, %b, %c\n", title, pageNo, price, isExpensive, book);
    }
    /* Constructor Overloading */
    // 2 Parameterized constructor with no initialization
    Book(String title, int pageNo) {
        System.out.println(title + " " + pageNo);
    }
    // 3 Parameterized constructor with no initialization
    Book(String title, int pageNo, double price) {
        System.out.printf("%s, %d, %.2f\n", title, pageNo, price);
        this.title = title;
        this.pageNo = pageNo;
        this.price = price;
    }
    /* Methods */
    public void discountPrice(double discount) {
        System.out.printf("%s is now RM%.2f\n", this.title, (this.price - (this.price * discount)));
    }

    // Main function to test the class (can be in another file)
    public static void main(String[] args) {
        Book book1 = new Book();
        book1.title = "Java Programming";
        System.out.println(book1.title);

        Book book2 = new Book("C++ Awesome", 500);
        System.out.println(book2.title);
        System.out.println(book2.pageNo);

        Book book3 = new Book("Python Next", 200, 130.50);
        book3.discountPrice(0.5);
    }
}