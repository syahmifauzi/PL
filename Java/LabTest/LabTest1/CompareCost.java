import java.util.Scanner;

public class CompareCost {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        double package1, package2, price1, price2;

        System.out.print("Enter weight for package 1: ");
        package1 = input.nextDouble();
        System.out.print("Enter price for package 1: ");
        price1 = input.nextDouble();
        
        System.out.print("Enter weight for package 2: ");
        package2 = input.nextDouble();
        System.out.print("Enter price for package 2: ");
        price2 = input.nextDouble();

        if (price1 / package1 <= price2 / package2)
            System.out.println("Package1 has a better price");
        else
            System.out.println("Package2 has a better price");
    }
}