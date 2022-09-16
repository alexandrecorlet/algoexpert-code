#include <vector>
#include <algorithm>

using namespace std;

// O(n) time | O(1) space - where n is the length of the array
vector<int> moveElementToEnd(vector<int> array, int toMove) {

  int l = 0, r = array.size() - 1;
  while (l < r) {

    while (array[r] == toMove)
      --r;

    if (array[l] == toMove) 
      swap(array[l], array[r]);

    ++l;
  }

  return array;

}

