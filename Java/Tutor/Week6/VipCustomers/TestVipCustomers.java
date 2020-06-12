
public class TestVipCustomers {
    public static void main(String[] args) {
        VipCustomers vip1 = new VipCustomers();
        System.out.println(vip1.getName());
        System.out.println(vip1.getCreditLimit());
        System.out.println(vip1.getEmail());
        System.out.println();

        VipCustomers vip2 = new VipCustomers("Aiman", "aiman@gmai.com");
        System.out.println(vip2.getName());
        System.out.println(vip2.getCreditLimit());
        System.out.println(vip2.getEmail());
        System.out.println();

        VipCustomers vip3 = new VipCustomers("Syahmi", 5000, "brosyahmifauzi@gmai.com");
        System.out.println(vip3.getName());
        System.out.println(vip3.getCreditLimit());
        System.out.println(vip3.getEmail());
        System.out.println();
    }
}