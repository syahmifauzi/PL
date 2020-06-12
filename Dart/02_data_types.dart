void main() {

  /* Numbers */
  int age = 22;
  double pi = 3.142;
  num a = 45;
  num b = 4.5;
  print('Numbers: $age $pi $a $b');

  /* Strings */
  String firstName = 'Syahmi';
  String lastName = 'Fauzi';
  String rawString = r'No special treatement eg for \n in raw string.';
  String multiLineStr = """We can
    create multi-line
    strings like this
  """;
  print('Strings: $firstName ${lastName}'); // string interpolation

  /* Booleans */
  bool flag = false;
  bool isGood = true;
  bool isItNull;
  print('Booleans: $flag $isGood ${isItNull ?? 'YesItIsNULL'}');

  /* Keyword var can declare any data type */
  /* runtimeType prints the type of the variable declared */
  var x = 'Dart';
  print(x.runtimeType);
  var y = 4.5;
  print(y.runtimeType);

  /* Convert one datatype to another */
  int myNum = int.parse('6');          // str to int
  double myPI = double.parse('3.142'); // str to double
  String myStr = '22'.toString();   // int to str
  String oneAsString = 1.toString();
  assert(oneAsString == '1');
  String piAsString = 3.1415.toStringAsFixed(2);
  assert(piAsString == '3.14');

}
