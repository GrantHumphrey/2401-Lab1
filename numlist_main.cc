
#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <fstream>
#include "numlist.h"
#include "numlist.cc"
using namespace std;
int main(){
ifstream fin;
string filename;
NumList list;
cout << "Enter filename: " << endl;
cin >> filename;
fin.open(filename.c_str());
list.load_from_file(fin);
cout << "Enter 3 numbers to be added to the file: " << endl;
string tmp;
for(size_t i = 0; i < 3; i++){
    int tmp;
    cin >> tmp;
    list.insert(tmp);
}

list.b_sort();
cout << "Your numbers have been added and sorted." << endl;
list.insert(106);
list.insert(237);
list.insert(45701);
ofstream outStream;
size_t fileSpot = filename.find(".");
filename.insert(fileSpot, "sorted");
outStream.open(filename);
if(outStream.fail()){
    cout << "Error: Output file cannot be loaded" << endl;
    exit (0);
}
list.save_to_file(outStream);
fin.close();
outStream.close();

list.see_all();





}
