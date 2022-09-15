#include <vector>
#include <algorithm>
using namespace std;

// Solution #1: Linear pass + Two Pointer
// O(n^2) time | O(n) space
vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {

  sort(array.begin(), array.end());

  vector<vector<int>> triplets;
  int size = array.size();
  for (int i = 0; i < size - 2; ++i) {
    
    // Two Pointer -> Same idea as the Two Number Sum problem,
    // but on subarray[i+1..n]
    int leftIdx = i + 1, rightIdx = size - 1;
    while (leftIdx < rightIdx) {

      int sum = array[i] + array[leftIdx] + array[rightIdx];
      if (sum == targetSum) {
        triplets.push_back({array[i], array[leftIdx], array[rightIdx]});
        ++leftIdx;
        --rightIdx;
      } else if (sum < targetSum) {
        ++leftIdx;
      } else {
        --rightIdx;
      }

    }

  }

  return triplets;

}

// Solution #2: Generate all triplets (Brute Force)
// O(n^3) time | O(n) space - where n is the size of the array.
//vector<vector<int>> threeNumberSum(vector<int> array, int targetSum) {
//  sort(array.begin(), array.end());
//  vector<vector<int>> triplets;
//  for (int i = 0; i < array.size() - 2; ++i) {
//    for (int j = i + 1; j < array.size() - 1; ++j) {
//      for (int k = j + 1; k < array.size(); ++k) {
//        if (array[i] + array[j] + array[k] == targetSum) {
//          triplets.push_back({array[i], array[j], array[k]});
//        }
//      }
//    }
//  }
//  sort(triplets.begin(), triplets.end());
//  return triplets;
//}
