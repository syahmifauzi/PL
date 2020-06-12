public class PassBy {
    public static void main(String[] args) {
        int x = 1;
        int[] y = new int[10];

        m(x, y);

        System.out.println("x = " + x);
        System.out.println("y[0] = " + y[0]);
    }
    public static void m(int num, int[] ArrNum) {
        num = 1001;
        ArrNum[0] = 5555;
    }
}