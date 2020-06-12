void main() {

  /* =============== LISTS =============== */

  // list (array in other PL)
  List anyTypes = ['Syahmi', 'Aiman', 10, 3.142, true];
  print(anyTypes[0]);
  print(anyTypes.length);

  List<String> names = const ['Syahmi', 'Aiman'];
  // names[1] = 'Fahmi'; // throw error
  for (var name in names) {
    print(name);
  }

  // pointing to the same list
  List<String> fruits = ['banana', 'oranges'];
  print(fruits);
  var fruits2 = fruits;
  fruits[1] = 'watermelon';
  print(fruits2);

  // to copy list, use spread operator
  var fruits3 = [...fruits];
  fruits[1] = 'manggo';
  print(fruits3);


  /* =============== SET =============== */

  // set, unique collection of items
  var animalTypes = {'mammals', 'birds', 'reptiles', 'mammals'}; // have copies
  for (var type in animalTypes) {
    print(type);
  }

  // empty set
  var emptySet = <String>{}; // same as
  Set<String> emptySet2 = {};
  print(emptySet.runtimeType);
  print(emptySet2.runtimeType);


  /* =============== MAP =============== */

  // map (dictionary in other PL), collection of key: value pair
  Map helmet = {
    'brand': 'ARC',
    'color': {
      'body': 'blue',
      'visor': 'transparent',
    },
    'quantity': 3,
  };
  print(helmet);

  // define empty map
  var cat = Map();
  cat['color'] = 'white';
  print(cat);

}
