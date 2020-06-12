public class Exercise {
    public static void main(String[] args) {
        // create arrays
        int[] numA = {3, 5, 1, 4, 2};
        int[] numB = {65, 32, 21, 40, 88};
        int[] numC = new int[numA.length + numB.length];
        // merge arrays
        System.arraycopy(numA, 0, numC, 0, numA.length);
        System.arraycopy(numB, 0, numC, numA.length, numB.length);
        // sort the array ascendingly or descendingly
        bubbleSortAsc(numC);
        bubbleSortDesc(numC);
        // display numC
        for (int i = 0; i < numC.length; ++i)
            System.out.print(numC[i] + " ");
        System.out.println();
        // display min and max
        System.out.println("Min: " + min(numC));
        System.out.println("Max: " + max(numC));
    }
    public static void bubbleSortAsc(int[] arr) {
        int temp;
        for (int i = 0; i < arr.length - 1; ++i) {
            for (int j = 0; j < arr.length - i - 1; ++j) {
                if (arr[j] > arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static void bubbleSortDesc(int[] arr) {
        int temp;
        for (int i = 0; i < arr.length - 1; ++i) {
            for (int j = 0; j < arr.length - i - 1; ++j) {
                if (arr[j] < arr[j+1]) {
                    temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
    }
    public static int max(int[] arr) {
        int max = arr[0];
        for (int i = 1; i < arr.length; ++i)
            if (arr[i] > max)
                max = arr[i];
        return max;
    }
    public static int min(int[] arr) {
        int min = arr[0];
        for (int i = 1; i < arr.length; ++i)
            if (arr[i] < min)
                min = arr[i];
        return min;
    }
}