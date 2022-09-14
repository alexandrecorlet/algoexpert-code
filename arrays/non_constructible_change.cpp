#include <vector>
#include <algorithm>
using namespace std;

// O(nlgn) time | O(1) space - where n is the number of coins.
int nonConstructibleChange(vector<int> coins) {
  sort(coins.begin(), coins.end());

  int total = 0;
  for (int coin : coins) {
    if (coin > total + 1) return total + 1;
    total += coin;
  }

  return total + 1;
}

