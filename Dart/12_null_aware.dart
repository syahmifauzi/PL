// Null Aware Operator
// (?.), (??), (??=)

class Num { // some api return json obj contains num
  int num = 10;
}

void main() {

  var n = Num();
  int number;

  // check if n not null
  if (n != null) number = n.num;
  // same as
  number = n?.num;
  // have default value 0
  number = n?.num ?? 0;

  print(number);

  // assign default value
  int num2;
  print(num2 ??= 100);
  print(num2);

}
