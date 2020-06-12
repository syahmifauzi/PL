public class MethodExamples {
    public static void main(String[] args) {
        printQuote();
        greetUser("Syamekkk");
        System.out.println(getPiValue());
        System.out.println(maxValue(12, 123));
        System.out.println(maxValue(98.7, 6.54));
    }
    // void method without parameter
    public static void printQuote() {
        System.out.println("Carry out a random act of kindness, with no " +
                            "expectation of reward, safe in the knowledge " +
                            "that one day someone might do the same for you. " +
                            "- Princess Diana");
    }
    // void method with parameter
    public static void greetUser(String name) {
        System.out.println("Hi " + name + "!");
    }
    // value-returning method without parameter
    public static double getPiValue() {
        return 3.141592653589;
    }
    // value-returning method with parameter
    public static int maxValue(int a, int b) {
        return (a > b ? a : b);
    }
    // method overloading
    public static double maxValue(double a, double b) {
        return (a > b ? a : b);
    }
}