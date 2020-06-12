import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.Label;
import javafx.scene.control.TextField;
import javafx.scene.layout.GridPane;
import javafx.stage.Stage;

public class DGridPane extends Application {

  Stage window;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    window = primaryStage;

    // GridPane
    GridPane grid = new GridPane();
    grid.setPadding(new Insets(10, 10, 10, 10));
    grid.setVgap(8);
    grid.setHgap(10);

    // Name Label
    Label nameLabel = new Label("Username:");
    GridPane.setConstraints(nameLabel, 0, 0);

    // Name Input
    TextField nameInput = new TextField("Syamekkk");
    GridPane.setConstraints(nameInput, 1, 0);

    // Password Label
    Label passLabel = new Label("Password:");
    GridPane.setConstraints(passLabel, 0, 1);

    // Password Input
    TextField passInput = new TextField();
    passInput.setPromptText("Password");
    GridPane.setConstraints(passInput, 1, 1);

    // Login Button
    Button logInBtn = new Button("Log In");
    GridPane.setConstraints(logInBtn, 1, 2);

    // Add Everything to the grid
    grid.getChildren().addAll(nameLabel, nameInput, passLabel, passInput, logInBtn);
    
    // Show the window/stage
    Scene scene = new Scene(grid, 300, 300);
    window.setScene(scene);
    window.show();
  }

}