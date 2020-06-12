import javafx.application.Application;
import javafx.event.ActionEvent;
import javafx.event.EventHandler;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.stage.Stage;

public class AEvent extends Application { // implements EventHandler<ActionEvent>

  Stage window;
  Button btnMe;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    window = primaryStage;
    // Main Window
    window.setTitle("Title of the Window");
    btnMe = new Button();
    btnMe.setText("Click me");

    // To handle a button
    // btnMe.setOnAction(this); // (1e) using this class to handle the event
    // btnMe.setOnAction(new EventHandler<ActionEvent>() { // (2e) using anonymus inner classes
    //   @Override
    //   public void handle(ActionEvent event) {
    //     System.out.println("Wow!!!"); // no need to check event sources
    //   }
    // });
    btnMe.setOnAction(e -> System.out.println("Seriously ??")); // (3e) using Java8 lambda expression

    StackPane layout = new StackPane(); // text-align: center
    layout.getChildren().add(btnMe);

    // Main Scene (entire window)
    Scene scene = new Scene(layout, 500, 250); // layout, width, height
    window.setScene(scene);
    window.show();
  }

  // @Override
  // public void handle(ActionEvent event) { // (1e) using this class to handle the event
  //   if (event.getSource() == btnMe) { // add this condition if many btn
  //     System.out.println("Me clicked!");
  //   }
  // }

}