#include <vector>
using namespace std;

// O(N) time | O(K) space, where N is the size of the competition
// and K is the number of teams 
string tournamentWinner(vector<vector<string>> competitions,
                        vector<int> results) {

  map<string, int> scoreBoard;

  string champion = ""; 
  for (int i = 0; i < competitions.size(); ++i) {
    string winner = competitions[i][(!results[i])];
    scoreBoard[winner] += 3;
    if (scoreBoard[champion] < scoreBoard[winner])
      champion = winner;
  }
  
  return champion;
}

