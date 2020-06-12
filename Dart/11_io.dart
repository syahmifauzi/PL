import 'dart:io';

void main() {

  stdout.write('What is your name? ');
  String name = stdin.readLineSync();
  stdout.write('Phone Number: ? ');
  String phoneNumber = stdin.readLineSync();
  print('Hi $name!. Call me at $phoneNumber');

}
