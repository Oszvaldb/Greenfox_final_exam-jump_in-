#include <iostream>
#include <vector>

using namespace std;

//Create a function that takes two arrays and mixes them like this: [1, 2, 3] and [6, 7, 8] becomes [1, 6, 2, 7, 3, 8]

vector<int> unite_vectors(vector<int> vector1, vector<int> vector2) {
  int biggersize;
  if(vector1.size() > vector2.size()) {
    biggersize = vector1.size();
  } else {
    biggersize = vector2.size();
    }
  vector<int> united;
  for(int i = 0; i < biggersize; i++) {
    united.push_back(vector1[i]);
    united.push_back(vector2[i]);
  }
  return united;
}

vector<int> fillvector(int start, int size) {
  vector<int> victor;
  for(int i = start; i < start + size; i++) {
    victor.push_back(i);
  }
  return victor;
}

int main() {
  vector<int> first_vector;
  first_vector = fillvector(1, 3);
  vector<int> second_vector;
  second_vector = fillvector(6, 3);
  vector<int> united;
  united = unite_vectors(first_vector, second_vector);
  return 0;
}
