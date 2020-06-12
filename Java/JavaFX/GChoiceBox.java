import javafx.application.Application;
import javafx.geometry.Insets;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.control.CheckBox;
import javafx.scene.control.ChoiceBox;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class GChoiceBox extends Application {

  Stage window;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    this.window = primaryStage;
    this.window.setTitle("JavaFX ChoiceBox");

    // Create ChoiceBox
    ChoiceBox<String> choiceBox = new ChoiceBox<>();
    // getItems() returns the ObservableList object when u can add items to
    String[] fruits = {"Apples", "Oranges", "Bananas"};
    choiceBox.getItems().addAll(fruits);
    choiceBox.setValue(fruits[0]); // Set default value
    // Immediately get the value when selected
    // choiceBox.setOnAction(e -> System.out.println(choiceBox.getValue())); // don't use this, instead
    // Listen for selection changes (use this)
    choiceBox.getSelectionModel().selectedItemProperty().addListener(
      (v, oldValue, newValue) -> {
        System.out.println(oldValue + " -> " + newValue);
      }
    );


    // Create Button
    Button button = new Button("Click Me");
    button.setOnAction(e -> handleChoice(choiceBox));

    // Create a layout
    VBox layout = new VBox(10);
    layout.setPadding(new Insets(10, 10, 10, 10));
    layout.getChildren().addAll(choiceBox, button);
  
    // Don't Forget to show the window/stage.. lol
    Scene scene = new Scene(layout, 200, 200);
    window.setScene(scene);
    window.show();
  }

  // Handle checkbox options
  private void handleChoice(ChoiceBox<String> choiceBox) {
    String fruit = choiceBox.getValue();
    System.out.println(fruit);
  }

}