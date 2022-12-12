#include <queue>
#include <iostream>
#include <array>
#include <map>
#include <stdexcept>

void ProcessBatch() {
    int n_words_per_player;
    std::cin >> n_words_per_player;
    std::vector<std::vector<std::string>> player_words;
    std::map<std::string, int> word_count;
    for (int i_player = 0; i_player < 3; i_player++) {
        std::vector<std::string> player_words_curr {};
        for (int i_word = 0; i_word < n_words_per_player; i_word++) {
            std::string word;
            std::cin >> word;
            word_count[word]++;
            player_words_curr.push_back(word);
        }
        player_words.push_back(player_words_curr);
    }
    for (int i_player = 0; i_player < 3; i_player++) {
        int score = 0;
        for (const std::string& word : player_words[i_player]) {
            int cnt = word_count[word];
            switch (cnt) {
                case 1:
                    score += 3;
                    break;
                case 2:
                    score += 1;
                    break;
                case 3:
                    break;
                default:
                    throw std::invalid_argument("wtf");
            }
        }
        std::cout << score << ' ';
    }
    std::cout << std::endl;
}

int main() {
    int batches;
    std::cin >> batches;
    for (int i = 0; i < batches; i++) {
        ProcessBatch();
    }
}