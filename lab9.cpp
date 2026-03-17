#include <iostream>
#include <fstream>
using namespace std;

int main()
{
string MyGroup;
string MyFriend;

cout << "Enter the file name : ";
cin >> MyGroup;
ofstream MyWriteFile(MyGroup + ".txt");

int n;
cout << "How Many Friends Do You Have : ";
cin >> n;

for (int i = 0; i < n; i++)
{
cout << "Please Enter your " << i + 1 << " friend name : ";
cin >> MyFriend;
MyWriteFile << MyFriend << endl;
}

MyWriteFile.close();

string myText;

ifstream MyReadFile(MyGroup + ".txt");

while (getline(MyReadFile, myText))

cout << myText;
}