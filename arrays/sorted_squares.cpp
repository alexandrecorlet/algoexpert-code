#include <vector>
#include <algorithm>            // to use sort built-in function (2nd solution)
using namespace std;

// SOLUTION #1
// O(n) time | O(n) space, where n is the length of the array
vector<int> sortedSquaredArray(vector<int> array) {
  int n = array.size();
  vector<int> sortedSquares(n, 0);
  int leftIdx = 0, rightIdx = n - 1;
  for (int i = n - 1; i > -1; --i) {
    if (abs(array[leftIdx]) < abs(array[rightIdx])) {
      sortedSquares[i] = array[rightIdx] * array[rightIdx];
      --rightIdx;
    } else {
      sortedSquares[i] = array[leftIdx] * array[leftIdx];
      ++leftIdx;
    }
  }
  return sortedSquares;
}

// SOLUTION #2
// O(nlogn) time | O(n) space, where n is the length of the array
//vector<int> sortedSquaredArray(vector<int> array) {
//  int n = array.size();
//  vector<int> sortedSquares(n, 0);
//  for (int i = 0; i < n; ++i) {
//    sortedSquares[i] = array[i] * array[i];
//  }
//  sort(sortedSquares.begin(), sortedSquares.end());
//  return sortedSquares;
//}
