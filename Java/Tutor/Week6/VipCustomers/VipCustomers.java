
public class VipCustomers {
    private String name;
    private double creditLimit;
    private String email;
    // Constructors
    VipCustomers() {
        this("NA", 0, "NA");
    }
    VipCustomers(String name, String email) {
        this(name, 0, email);
    }
    VipCustomers(String name, double creditLimit, String email) {
        this.name = name;
        this.creditLimit = creditLimit;
        this.email = email;
    }
    // Getter/Accessor Methods
    public String getName() {
        return this.name;
    }
    public double getCreditLimit() {
        return this.creditLimit;
    }
    public String getEmail() {
        return this.email;
    }
}