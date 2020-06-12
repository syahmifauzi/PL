
public class TestAccount {
    public static void main(String[] args) {
        // Using Banking Methods
        Account acc1 = new Account();
        acc1.deposit(500);  
        acc1.deposit(300);
        acc1.withdrawal(1000);
        acc1.withdrawal(100);
        System.out.println();

        // Using Setter Methods
        Account acc2 = new Account();
        acc2.setAccNo("74321932");
        acc2.setBalanced(400);
        acc2.setCustName("Syamekkk");
        acc2.setCustEmail("sss@sf.com");
        acc2.setCustPhoneNo("0123456789");

        // Using Getter Methods
        System.out.println(acc2.getAccNo());
        System.out.println(acc2.getBalanced());
        System.out.println(acc2.getCustName());
        System.out.println(acc2.getCustEmail());
        System.out.println(acc2.getCustPhoneNo());
        System.out.println();

        // Using Constructors
        Account acc3 = new Account("74532419", 7654, "Eman", "eman@gmail.com", "0134523432");
        System.out.println(acc3.getAccNo());
        System.out.println(acc3.getBalanced());
        System.out.println(acc3.getCustName());
        System.out.println(acc3.getCustEmail());
        System.out.println(acc3.getCustPhoneNo());
        System.out.println();

        Account acc4 = new Account("Syakir", "syakir@gmail.com", "0134787632");
        System.out.println(acc4.getAccNo());
        System.out.println(acc4.getBalanced());
        System.out.println(acc4.getCustName());
        System.out.println(acc4.getCustEmail());
        System.out.println(acc4.getCustPhoneNo());
    }
}