public class ComputeExpression {
    public static void main(String[] args) {
        double a = 10.5, b = 3.5;
        int c = 2, d = 3, e = 45;
        double result = (a + c * d) / (e - b);
        System.out.println("(10.5 + 2 * 3) / (45 - 3.5) = " + result);
        // int i = 1;
        // int j = i + ++i; // i = 2, j = 3
        // System.out.println("i = " + i + ", j = " + j);
    }
}