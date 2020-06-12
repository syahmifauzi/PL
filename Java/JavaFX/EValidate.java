import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

public class EValidate extends Application {

  Stage window;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    this.window = primaryStage;

    // GridPane
    GridPane grid = new GridPane();
    grid.setAlignment(Pos.CENTER);
    grid.setPadding(new Insets(10, 10, 10, 10));
    grid.setHgap(5);

    // Input
    TextField input = new TextField();
    GridPane.setConstraints(input, 0, 0);

    // Login Button
    Button button = new Button("Validate");
    GridPane.setConstraints(button, 1, 0);
    button.setOnAction(e -> this.isInt(input, input.getText()));

    // Add Everything to the grid
    grid.getChildren().addAll(input, button);
    
    // Show the window/stage
    Scene scene = new Scene(grid, 300, 100);
    this.window.setScene(scene);
    this.window.show();
  }

  private boolean isInt(TextField input, String value) {
    try {
      int age = Integer.parseInt(value);
      System.out.println("User is " + age);
      return true;
    } catch (NumberFormatException e) {
      System.out.println("Error: " + e + " is not a number");
      return false;
    }
  }

}