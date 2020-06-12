import javafx.application.Application;
import javafx.geometry.Pos;
import javafx.scene.Scene;
import javafx.scene.control.Button;
import javafx.scene.layout.VBox;
import javafx.stage.Stage;

public class CAlert extends Application {
  Stage window;

  public static void main(String[] args) {
    launch(args);
  }

  @Override
  public void start(Stage primaryStage) throws Exception {
    window = primaryStage;

    Button alertBtn = new Button("Open Alert Box");
    alertBtn.setOnAction(e -> CAlertBox.display("Window's Title", "This is awesome!"));

    Button confirmBtn = new Button("Open Confirm Box");
    confirmBtn.setOnAction(e -> {
      boolean ans = CConfirmBox.display("Window's Title", "Are u sure?");
      System.out.println(ans);
    });

    VBox layout = new VBox(20);
    layout.getChildren().addAll(alertBtn, confirmBtn);
    layout.setAlignment(Pos.CENTER);
    Scene scene = new Scene(layout, 300, 200);

    // On Start (make sure put this at last)
    window.setTitle("Alert Boxes");
    window.setScene(scene);
    window.show();
  }

}