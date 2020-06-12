
public class Account {
    private String accNo;
    private double balanced;
    private String custName;
    private String custEmail;
    private String custPhoneNo;
    // Constructors
    Account() {
        this("NA", 0, "NA", "NA", "NA");
        System.out.println("Default constructor was called.");
    }
    Account(String accNo, double balanced, String custName,
            String custEmail, String custPhoneNo) {
        System.out.println("Constructor with 5 parameters was called.");
        this.accNo = accNo;
        this.balanced = balanced;
        this.custName = custName;
        this.custEmail = custEmail;
        this.custPhoneNo = custPhoneNo;
    }
    Account(String custName, String custEmail, String custPhoneNo) {
        this("NA", 0, custName, custEmail, custPhoneNo);
        System.out.println("Constructor with 3 parameters was called.");
    }
    // Setter/Mutator Methods
    public void setAccNo(String accNo) {
        this.accNo = accNo;
    }
    public void setBalanced(double balanced) {
        this.balanced = balanced;
    }
    public void setCustName(String custName) {
        this.custName = custName;
    }
    public void setCustEmail(String custEmail) {
        this.custEmail = custEmail;
    }
    public void setCustPhoneNo(String custPhoneNo) {
        this.custPhoneNo = custPhoneNo;
    }
    // Getter/Accessor Methods
    public String getAccNo() {
        return this.accNo;
    }
    public double getBalanced() {
        return this.balanced;
    }
    public String getCustName() {
        return this.custName;
    }
    public String getCustEmail() {
        return this.custEmail;
    }
    public String getCustPhoneNo() {
        return this.custPhoneNo;
    }
    // Other Banking Methods
    public void deposit(double depositAmt) {
        this.balanced += depositAmt;
        System.out.println("A deposit of " + depositAmt + " was made.");
        System.out.println("Your new balanced is " + this.balanced);
    }
    public void withdrawal(double withdrawalAmt) {
        if (this.balanced - withdrawalAmt <= 0) {
            System.out.println("Only " + this.balanced + " is available.");
            System.out.println("Transaction failed");
        } else {
            this.balanced -= withdrawalAmt;
            System.out.println("A withdrawal of " + withdrawalAmt + " was made.");
            System.out.println("Your new balanced is " + this.balanced);
        }
    }
}