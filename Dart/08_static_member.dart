void main() {

  print(Constants.ID);      // calling static class variable
  print(Constants.getID()); // calling static class method

}

class Constants {
  static String ID = '13DS23F2K32';
  static String getID() {
    return 'ID is $ID';
  }
}
