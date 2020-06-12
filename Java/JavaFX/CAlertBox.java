import javafx.stage.*;
import javafx.scene.*;
import javafx.scene.layout.*;
import javafx.scene.control.*;
import javafx.geometry.*;

public class CAlertBox {

  public static void display(String title, String message) {
    Stage window = new Stage();

    window.initModality(Modality.APPLICATION_MODAL);
    window.setTitle(title);
    // window.setMinWidth(350);

    Label label = new Label();
    label.setText(message);
    Button closeBtn = new Button("Close Me");
    closeBtn.setOnAction(e -> window.close());
    
    VBox layout = new VBox(10);
    layout.getChildren().addAll(label, closeBtn);
    layout.setAlignment(Pos.CENTER);

    Scene scene = new Scene(layout, 200, 100);
    window.setScene(scene);
    window.showAndWait();
  }

}