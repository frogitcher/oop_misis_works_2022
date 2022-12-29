#include <iostream>
#include <array>
#include <set>
#include <map>

using namespace std;

int main() {
    int t = 0;
    cin >> t;
    int n = 0;
    array<char, 3> word{};
    for (int _ = 0; _ < t; ++_) {
        std::cin >> n;
        map<int, set<array<char, 3>>> players{
                {1, {}},
                {2, {}},
                {3, {}},
        };
        for (int player_index = 1; player_index <= 3; ++player_index) {
            for (int word_index = 0; word_index < n; ++word_index) {
                for (char &letter: word) {
                    cin >> letter;
                }
                players[player_index].insert(word);
            }
        }
        map<int, int> res{
                {1, 0},
                {2, 0},
                {3, 0},
        };
        for (auto &[player_index, words]: players) {
            for (auto &curr_word: words) {
                const int count = players[(player_index + 1) % 3 + 1].count(curr_word) +
                                  players[player_index % 3 + 1].count(curr_word);
                if (count == 0) {
                    res[player_index] += 3;
                } else if (count == 1) {
                    res[player_index] += 1;
                }
            }
        }
        for (auto &player_score: res) { cout << player_score.second << ' '; }
        cout << endl;
    }
}