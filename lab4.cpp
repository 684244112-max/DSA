#include <iostream>
#include <fstream>
using namespace std;

int main(){
string A;
A = "Readfile.txt";
ofstream MyWriteFile(A);

MyWriteFile <<"Flies can be tricky , but it is fun enough!-1";
MyWriteFile <<"Files can be tricky , but it is fun enough!-2";

MyWriteFile.close();

string myText;

ifstream MyReadFile(A);

while (getline (MyReadFile, myText))
{
cout << myText;
}}