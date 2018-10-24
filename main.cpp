#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include "hash.h"
#include <stdexcept>
using namespace std;


//----------------------MAIN-------------------------
int main() {
    string filename;
    ifstream file;
    //string command;

    cout << "Mariana Acosta Zermeno" << endl;
    cout << "CS2420 Section 1" << endl;
    cout << "Program 2: Linked Lists" << endl;
    
    cout << "Enter the file name you would like to use:" << endl;
    cin >> filename;
    file.open(filename);
    int data;
    Hash myHash;

    while (file >> data){
      myHash.insert(data);

    }
    myHash.show();


  



}
