import javafx.stage.*;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.geometry.*;

public class CConfirmBox {

  static boolean answer;

  public static boolean display(String title, String message) {
    Stage window = new Stage();

    window.initModality(Modality.APPLICATION_MODAL);
    window.setTitle(title);

    Label label = new Label();
    label.setText(message);
    
    // Yes & No buttons
    Button yesBtn = new Button("Yes");
    Button noBtn = new Button("No");
    yesBtn.setOnAction(e -> {
      answer = true;
      window.close();
    });
    noBtn.setOnAction(e -> {
      answer = false;
      window.close();
    });
    
    VBox layout = new VBox(10);
    layout.getChildren().addAll(label, yesBtn, noBtn);
    layout.setAlignment(Pos.CENTER);

    Scene scene = new Scene(layout, 200, 100);
    window.setScene(scene);
    window.showAndWait();

    // Don't forget to return the answer
    return answer;
  }

}