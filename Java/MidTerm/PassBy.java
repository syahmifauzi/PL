
public class PassBy {
  public static void main(String[] args) {
    int[] x = { 1, 2, 3, 4, 5 };
    increase(x);
    int[] y = { 1, 2, 3, 4, 5 };
    increase(y[0]);
    System.out.println(x[0] + " " + y[0]);
  }

  public static void increase(int[] x) {
    for (int i = 0; i < x.length; i++)
      x[i]++;
  }

  public static void increase(int y) {
    y++;
  }
}