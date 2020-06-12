import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.StackPane;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;
import javafx.scene.control.Label;

public class BScenes extends Application {
  Stage window;
  Button btn1, btn2;
  Scene scene1, scene2;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    window = primaryStage;

    // Button 1
    Label lbl1 = new Label("Scene 1");
    btn1 = new Button("Go To Scene 2");
    btn1.setOnAction(e -> window.setScene(scene2));

    // Layout 1
    VBox layout1 = new VBox(20);
    layout1.getChildren().addAll(lbl1, btn1);
    layout1.setAlignment(Pos.TOP_CENTER);
    scene1 = new Scene(layout1, 200, 200);

    // Button 2
    Label lbl2 = new Label("Scene 2");
    btn2 = new Button("Back To Scene 1");
    btn2.setOnAction(e -> window.setScene(scene1));

    // Layout 2
    VBox layout2 = new VBox(20);
    layout2.setAlignment(Pos.CENTER);
    layout2.getChildren().addAll(lbl2, btn2);
    scene2 = new Scene(layout2, 500, 250);

    // On Start (make sure put this at last)
    window.setTitle("Moving Around Scenes");
    window.setScene(scene1);
    window.show();
  }

}