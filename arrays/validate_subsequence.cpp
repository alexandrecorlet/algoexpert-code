#include <bits/stdc++.h>
using namespace std;


// Solution 1
// O(N) time | O(1) space, where n is the size of the array
bool isValidSubsequence(vector<int> array, vector<int> sequence) {

  int idx = 0;
  for (auto x : array) {
    if (idx < sequence.size() && sequence[idx] == x) {
      idx++;
    }
  }

  return idx == sequence.size();
}


// Solution 2
// O(N) time | O(1) space, where n is the size of the array
//bool isvalidsubsequence(vector<int> array, vector<int> sequence) {
//  int arrIdx = 0, seqIdx = 0;
//  while (arrIdx < array.size() && seqIdx < sequence.size()) {
//    if (array[arrIdx] == sequence[seqIdx]) {
//      seqIdx++;
//    }
//    arrIdx++;
//  }
//  return seqIdx == sequence.size();
//}

