/*
  https://dart.dev/samples
  https://dart.dev/guides/language/language-tour
*/

int main() {

  print('Hello Dart');

  // variables
  var name = 'Syahmi Fauzi';                  // String
  var year = 1997;                            // integer
  var pi = 3.142;
  var fruits = ['apple', 'orange', 'grape'];
  var image = {
    'tags': ['saturn', 'uranus'],
    'url': '//path/to/planets.jpg',
  };
  dynamic hello = 25;                         // the type can change
  hello = 'world';

  // control flow statements
  if (year >= 2001) {
    print('21st century');
  } else if (year >= 1991) {
    print('20th century');
  }

  for (var fruit in fruits) {
    print(fruit);
  }

  for (int month = 1; month <= 12; ++month) {
    print(month);
  }

  while (year < 2016) {
    year += 1;
  }



}
