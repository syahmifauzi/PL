
public class PriceMenu {
    public static void main(String[] args) {
        String[] menu = {"Fried rice", "Chicken rice", "Spaghetti",
                         "Beef Lasagna", "Laksa Penang"};
        double[] price = {5.0, 5.5, 8.0, 12.0, 3.5};
        int max_idx = 0;

        System.out.println("Menu\t\tPrice (RM)");
        System.out.println("--------------------------");
        for (int i = 0; i < menu.length; ++i) {
            System.out.println(menu[i] + "\t" + price[i]);
            if (price[i] > price[max_idx])
                max_idx = i;
        }
        System.out.printf("\nThe expensive menu is: %s RM%.2f\n\n",
                          menu[max_idx], price[max_idx]);
    }
}

