//#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <set>
#include <queue>
#include <stack>

using namespace std;

////////////////////////STRINGS////////////////////////
void creating_initializingString() {

  //strings are objects that represent a sequence of characters

  //declaring a string
  string s1;

  //putting some value in string s1
  s1 = "Value in a string";

  //different ways to initialize a string
  string s = "One way of creating a string";
  string s2("Another way of creating a string");
  string s3 = s2;     //s3="Another way of creating a string"
  string s4(10, 'a');   //s4="aaaaaaaaaa"

  cout << "INITIALIZING STRINGS:\n";

  cout << "s1: " << s1 << "\ns2: " << s2 << "\ns3: " << s3 << "\ns4: " << s4
      << endl;
}

void stringElementAccess() {
  //what if i don't want to output the entire string and i only want a certain character
  //at a certain position

  //in this case we access the position of the desired character
  //NOTE: Don't forget that a string is treated as an array so first character is at index 0
  //second character is at index 1 and so on.

  cout << "\nACCESSING ELEMENTS OF STRINGS:\n\n";

  string s = "IIUM ICPC team";
  cout << "first character of " << s << " (s[0]): " << s[0] << endl;

  //now i would like to change first element to anything i want

  s[0] = 'i';

  cout << "new string: " << s << endl;
}

void stringCapacity() {
  cout << "\nWORKING WITH STRING CAPACITY:\n\n";
  //if we want to know the number of characters currently in a certain string we use:
  string s = "Number of characters in this string is 41";
  int sizeOfS = s.size();
  int lengthOfS = s.length();

  cout << "Number of characters = " << sizeOfS << endl;
  cout << "Number of characters = " << lengthOfS << endl;

  //You will notice that s.size() and s.length() produce the same outcomes
  //basically s.size() and s.length() are equivalent

  //how about resizing a string

  string original = "this string will be trimmed shortly";
  cout << original << endl;

  original.resize(11);//resize the string original to be exactly 11 characters long

  cout << original << endl;

  original.resize(14);  //resize the string original to have 14 characters
              //(3 characters added)
  cout << original << endl;

  original.resize(20, 'a');//resize it again to be of 20 characters and let the newly added
               //characters be all a's

  cout << original << endl;

  //now i'm bored with this string and i will clear it entirely

  original.clear(); //original = "" (empty string)
  original = "";    //this would work too

  //i wonder if string original is empty

  bool e = original.empty();//e=true if original is indeed empty, false otherwise
  if (e == true)
    cout << "string original is empty\n";
  else
    cout << "string original is not empty\n";
}

void stringModifiers() {

  cout << "\nWORKING WITH STRING MODIFIERS:\n\n";

  string str = "To Be";
  string str2 = "or Not to Be";
  string str3 = "THAT is the question.";

  //how about merging all these string in one string
  string result = str + str2 + str3;//result="To Beor Not to BeTHAT is the question"
                    //wait but now it looks stupid

  string result2 = str + ", " + str2 + ": " + str3;
  cout << result << endl << result2 << endl;

  //we can also get the desired string using the following:
  str += ", ";
  str += str2;
  str += ": ";
  str += str3;

  cout << str << endl;

  //if i want to erase some characters from a string:
  string temp = "IEEE-NotSo-Xtreme";

  temp.erase(4, 7);//erase 7 characters from string temp starting from index 4

  cout << temp << endl;
}

void stringOperations() {

  cout << "\nWORKING WITH STRING OPERATIONS:\n\n";

  string str = "There is a needle in this haystack";
  string str2 = "needle";

  //here i want to find where does str2 occur in str (the index at which it starts)

  int idx = str.find(str2);//find str2 in str and return the index number at which it starts
               //in str

  string str3 = "needles";
  int idx2 = str.find(str3);//now str3 doesn't exist in str so idx2 will be -1

  if (idx != -1)
    cout << "Found " << str2 << " in " << str << endl;

  else
    cout << "Found nothing\n";

  if (idx2 != -1)
    cout << "Found " << str3 << " in " << str << endl;

  else
    cout << "Found nothing\n";

  string str4 = "I'm a Programmer who loves coding";
  //i'm interested in the "Programmer" part of that last string
  //if i want to extract a sequence of consecutive characters in a string i do this:

  string str5 = str4.substr(6, 10); //start from index 6, take 10 characters

  cout << str5 << endl;
  /////////////

  string s1 = "Ahmed" , s2 = "Mohamed";
  // now we want to see which string is smaller s1 or s2
  // by smaller i mean in lexographically order a < b  , aa < bb , ab < ac ... etc
  if(s1 < s2) cout<<"string1 < string2"<<endl;
  else  cout<<"string2 < string1"<<endl;
}

////////////////////////VECTORS////////////////////////

void creating_initializingVector() {
  //a vector is a linear container much like an array but with a lot more functions

  cout << "\nINITIALIZING VECTORS\n\n";

  vector<int> vec;    //an empty vector of int called vec
  vector<double> vec2(5); //a vector of double of size 5
  vector<int> vec3(10, 4);//a vector of int of size 10 where all elements = 4
  vector<string> vec4(10, "AB");//a vector of string of size 10 where all elements = "AB"
  vector<string> vec5 = vec4; //now vec5 is a copy of vec4
}

void vectorElementAccess() {
  //like an array, a vector can be accessed with the subscript "[]" operator

  cout << "\nVECTOR ELEMENT ACCESS\n\n";

  vector<int> v = { 1, 2, 3, 4, 5 };
  for (int i = 0; i < 5; ++i)
    cout << v[i] << ' ';
  cout << endl;

  //an easy way to get the last element of a vector is using vec.back()

  cout << v.back() << endl;   //outputs 5
}

void vectorCapacity() {

  cout << "\nWORKING WITH VECTOR CAPACITY\n\n";

  vector<int> v(20, 5);

  //to know the number of elements in a vector we use:

  int s = v.size();

  cout << "size of v = " << s << endl;

  //like a string, if i want to change the size of a vector

  v.resize(3);
  v.resize(8, 100);   //can you guess what happened in both cases?

  //checking if a vector is empty

  bool e = v.empty();   //e is true if v is empty, false otherwise

  if (e == true)
    cout << "v is empty\n";
  else
    cout << "v is not empty\n";

}

void vectorModifiers() {

  cout << "WORKING WITH VECTOR MODIFIERS\n";

  vector<int> vec;

  //what to do if we want to add an element to the end of the vector

  vec.push_back(5); //now vec={5}
  vec.push_back(6); //now vec={5,6}

  for (int i = 0; i < 10; ++i)
    vec.push_back(i);
  //now vec={5,6,0,1,2,3,4,5,6,7,8,9}

  //now i want to delete the last element in vec

  vec.pop_back();   //the last 9 is removed

  //erasing some elements from such vector

  vec.erase(vec.begin() + 5); //here i erased the element with index 5 (element 3)
  //so basically what you gotta do is type (vec.begin() + idx)
  //what if i want to erase, say, the first 3 elements

  vec.erase(vec.begin(), vec.begin() + 2);//erase(first,last), from first to last

  //clearing a vector

  vec.clear();

}

bool comp(int x, int y) {
  return x > y;
}

void algorithmOperations() {

  cout << "\nWORKING WITH ALGORITHM OPERATIONS\n\n";

  //swapping two values
  int x = 5, y = 10;
  swap(x, y); //now x=10,y=5;

  //say we have an array or a vector and we want to reverse the ordering of its elements

  int arr[5] = { 1, 2, 3, 4, 5 };
  vector<int> vec = { 1, 2, 3, 4, 5 };

  reverse(arr, arr + 5);    //arr={5,4,3,2,1}
  reverse(vec.begin(), vec.end());    //vec={5,4,3,2,1}

  //moreover we can do it with strings

  string str = "ABCDE";
  reverse(str.begin(), str.end());  //str="EDCBA"

  //in other words, you can do it with any linear container

  int arr2[10] = { 1, 4, 11, 9, 4, 1, 0, 2, 1, 10 };
  vector<int> vec2 = { 1, 4, 11, 9, 4, 1, 0, 2, 1, 10 };

  //if we want to sort in a non-decreasing order we just do this:
  sort(arr2, arr2 + 10);
  sort(vec2.begin(), vec2.end()); //=arr={0,1,1,1,2,4,4,9,10,11}

  //what if we want to do it in a non-increasing way

  sort(arr2, arr2 + 10, comp); //where comp is a boolean function that we use to define
                 //the behaviour of our sorting

  //if we want the min/max between two elements
  int x2 = 4, y2 = 10;
  int z = min(x2, y2);    //z=4
  z = max(x2, y2);        //z=10
}


int main() {

////////////////////////STRINGS////////////////////////
  creating_initializingString();
  stringElementAccess();
  stringCapacity();
  stringModifiers();
  stringOperations();
  return 0;
////////////////////////VECTORS////////////////////////
  creating_initializingVector();
  vectorElementAccess();
  vectorCapacity();
  vectorModifiers();

//////////////////////ALGORITHMS//////////////////////
  algorithmOperations();
}