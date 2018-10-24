#include <iostream>
#include "hash.h"
using namespace std;

Hash::Hash() {
  for (int i=0; i<MAX; i++){
  //int i = hashFunction(key);
    hashTable[i] = -999;
  }
}

int Hash::hashFunction(int key){
  return key % MAX;
}

bool Hash::insert(int key){
  //int i = hashFunction(key);
  int count = 0;
  int i = hashFunction(key);
  while (hashTable[i] != -999)
  {
    i = (i+1) % MAX;
    count++;
    if(count == MAX){
      return false;
    }
  }                       
  hashTable[i] = key; 
  
}

void Hash::show(){
for (int i=0; i<MAX; i++){
  cout << hashTable[i] << endl;
}
}

 


