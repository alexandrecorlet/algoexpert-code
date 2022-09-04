#include <vector>
using namespace std;


// Solution 1: O(n) time | O(n) space
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
  set<int> seen;
  
  for (int i = 0; i < array.size(); ++i) {
    int need = targetSum - array[i];
    if (seen.count(need) > 0) {
      return {array[i], need};
    }
    seen.insert(array[i]);
  }

  return {};
}

// Solution 2: O(nlgn) time | O(1) space
//vector<int> twoNumberSum(vector<int> array, int targetSum) {
//  sort(array.begin(), array.end());
//  
//  int l = 0, r = array.size() - 1;
//  while (l < r) {
//    int potentialSum = array[l] + array[r];
//
//    if (potentialSum < targetSum) {
//      l++;
//    } else if (potentialSum == targetSum) {
//      return {array[l], array[r]};
//    } else {
//      r--;
//    }
//
//  }
//
//  return {};
//}


// Solution 3: O(n^2) time | O(1) space
//vector<int> twoNumberSum(vector<int> array, int targetSum) {
//
//  for (int i = 0; i < array.size(); ++i) {
//    for (int j = i + 1; j < array.size(); ++j) {
//      if (array[i] + array[j] == targetSum) {
//        return {array[i], array[j]};
//      }
//    }
//  }
//    
//  return {};
//}
