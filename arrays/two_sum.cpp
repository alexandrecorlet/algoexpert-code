#include <vector>
using namespace std;

// O(N) Time complexity | O(N) Space complexity
vector<int> twoNumberSum(vector<int> array, int targetSum) {
  
  set<int> seen;

  for (int i = 0; i < array.size(); ++i) {
    int potential_match = targetSum - array[i];
    if (seen.count(potential_match) > 0)
      return {array[i], potential_match};
    seen.insert(array[i]);
  }

  return {};
}
