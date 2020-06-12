
public class Player {
  private String name;
  private String weapon;
  private int health = 100;

  Player(String name, int health, String weapon) {
    this.name = name;
    this.weapon = weapon;
    if (health > 0 && health <= 100)
      this.health = health;
  }

  public void loseHealth(int damage) {
    this.health -= damage;
    if (this.health <= 0) {
      System.out.println("Player knocked out.");
    }
  }

  public int getHealth() {
    return this.health;
  }

  public static void main(String[] args) {
    Player p1 = new Player("Ahmad", 20, "sword");
    int damageCasued = 10;
    p1.loseHealth(damageCasued);
    // p1.loseHealth(damageCasued);
    System.out.println("Remaining health: " + p1.getHealth());
  }
}