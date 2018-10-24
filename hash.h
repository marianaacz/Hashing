#ifndef HASH_H
#define HASH_H

#define MAX (20)

class  Hash {
  private:

  int hashTable[MAX];

  public:
  Hash();
  int hashFunction(int key);
  bool insert(int value);
  //int search(int key);
  bool resolveCollision(int value); 
  void show();

};


#endif