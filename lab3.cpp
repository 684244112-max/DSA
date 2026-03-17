#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream MyWriteFile("Readfile.txt");

  MyWriteFile << "68244112 tin";
  MyWriteFile << "68244112 tin";
 
  MyWriteFile.close();

  string myText;

  ifstream MyReadFile("Readfile.txt");

  while (getline (MyReadFile, myText)) {
    cout << myText;
  }

  MyReadFile.close();
}