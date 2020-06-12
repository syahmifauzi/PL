
public class Sum {
  public static void main(String[] args) {
    int i = 3, j = 7, k = 4;
    int output;
    output = sum(i, j, 5);
    System.out.println(output);

    // Remainder (%) can also used with FPN
    System.out.println(5 % 3);
    System.out.println(5 % 3.2);

    // Default value of variables
    int[] defIntVal = new int[10];
    double[] defDoubleVal = new double[10];
    char[] defCharValue = new char[10];
    System.out.println(defIntVal[0]);
    System.out.println(defDoubleVal[0]);
    System.out.println(defCharValue[0]);

    // Array
    int[] x = { 1, 2, 3, 4 };
    int[] y = x;
    x = new int[4];
    for (int z = 0; z < x.length; z++)
      System.out.print(x[z] + " ");
    for (int z = 0; z < y.length; z++)
      System.out.print(y[z] + " ");
    System.out.println();
  }

  public static int sum(int num1, int num2, int j) {
    int i = 5;
    int result;
    return result = i + num1 + num2 + j;
  }
}