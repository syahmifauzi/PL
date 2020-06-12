import java.util.Scanner;

public class ParkingRate {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Type of Vehicle:\n" +
                           "\t1. Motorcycle\n" + 
                           "\t2. Car\n" +
                           "\t3. Van\n" +
                           "\t4. Bus\n" +
                           "\t5. Lorry");
        System.out.print("Enter type of vehicle (1-5): ");
        int opt = input.nextInt();
        System.out.print("Enter duration in hour: ");
        int duration = input.nextInt();

        double rate = 0.0;
        switch (opt) {
            case 1: rate = 1.00; break;
            case 2: rate = 5.00; break;
            case 3: rate = 6.00; break;
            case 4: rate = 8.00; break;
            case 5: rate = 10.00; break;
            default: System.out.println("Invalid type of vehicle");
        }

        if (opt == 1 || opt == 2 || opt == 3 || opt == 4 || opt == 5) {
            double totalRate = duration * rate;
            System.out.printf("Total Rate: RM %.2f\n", totalRate);
        }
    }
}