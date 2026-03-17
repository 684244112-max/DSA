#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main () {
  ofstream MyWriteFile("mooo.txt");

  MyWriteFile << "684244112 kittin jarurattanachai tin";
 
  MyWriteFile.close();

  string myText;

  ifstream MyReadFile("mooo.txt");

  while (getline (MyReadFile, myText)) {
    cout << myText;
  }

  MyReadFile.close();
}
