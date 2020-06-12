public class AnalyzeNumbers {
    public static void main(String[] args) {
        java.util.Scanner input = new java.util.Scanner(System.in);
        System.out.print("Enter the number of items: ");
        int n = input.nextInt();
        double[] numbers = new double[n];
        double sum = 0;

        System.out.println("Enter the numbers: ");
        for (int i = 0; i < n; ++i) {
            numbers[i] = input.nextDouble();
            sum += numbers[i];
        }

        double avg = sum / n;

        int count = 0; // the no of elements above avg;
        for (int i = 0; i < n; ++i)
            if (numbers[i] > avg)
                ++count;
        
        System.out.println("Average is " + avg);
        System.out.println("Number of elements above the average is " + count);
    }
}