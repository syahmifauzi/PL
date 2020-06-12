void main() {

  // for loop
  for (var i = 0; i < 5; ++i) {
    print(i);
  }

  // for in loop
  var fruits = ['banana', 'apple', 'orange'];
  for (var fruit in fruits) {
    print(fruit);
  }

  // forEach loop
  var nums = [10, 20, 30];
  nums.forEach((num) => print(num)); // or
  nums.forEach(printNum); // reference to the fn

  // while loop
  int x = 5;
  while (x > 0) {
    print('x is $x');
    --x;
  }

  // do while loop
  int y = 1;
  do {
    print('y is $y');
    ++y;
  } while (y < 5);

  // break and continue
  for (var i = 0; i < fruits.length; ++i) {
    if (i == 2) break; // try continue
    print(fruits[i]);
  }
}

void printNum(num) {
  print(num);
}
