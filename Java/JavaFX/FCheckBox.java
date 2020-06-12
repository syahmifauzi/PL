import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class FCheckBox extends Application {

  Stage window;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    this.window = primaryStage;
    this.window.setTitle("JavaFX CheckBoxes");

    // Create 2 checkboxes
    CheckBox box1 = new CheckBox("C++");
    CheckBox box2 = new CheckBox("Python");
    box1.setSelected(true);

    // Create Button
    Button button = new Button("Submit");
    button.setOnAction(e -> handleCheckBoxes(box1, box2));

    // Create a layout
    VBox layout = new VBox(10);
    layout.setPadding(new Insets(10, 10, 10, 10));
    layout.getChildren().addAll(box1, box2, button);
  
    // Don't Forget to show the window/stage.. lol
    Scene scene = new Scene(layout, 200, 200);
    window.setScene(scene);
    window.show();
  }

  // Handle checkbox options
  private void handleCheckBoxes(CheckBox box1, CheckBox box2) {
    String msg = "User know:\n";
    if (box1.isSelected()) msg += box1.getText() + "\n";
    if (box2.isSelected()) msg += box2.getText() + "\n";
    System.out.println(msg);  
  }

}