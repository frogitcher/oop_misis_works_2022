#include <iostream>
#include <map>
#include <string>

int main() {   
    int t;
    std::cin >> t;

    while(t) {
        int n;
        std::cin >> n;

        std::map <std::string, int> word;
        std::string first [n];
        std::string second [n];
        std::string third [n];

        for (int i = 0; i < n; i++) {
            std::cin >> first[i];
            if (word.count(first[i]) == 0) 
                word[first[i]] = 0;
            word[first[i]] += 1;
        }

        for (int i = 0; i < n; i++) {
            std::cin >> second[i];
            if (word.count(second[i]) == 0) 
                word[second[i]] = 0;
            word[second[i]] += 1;
        }

        for (int i = 0; i < n; i++) {
            std::cin >> third[i];
            if (word.count(third[i]) == 0)
                word[third[i]] = 0;
            word[third[i]] += 1;
        }

        int firstPoint = 0; 
        int secondPoint = 0;
        int thirdPoint = 0;

        for (int i = 0; i < n; ++i) {
            switch (word[first[i]]) {
                case 1:
                    firstPoint += 2;
                case 2:
                    firstPoint += 1;
            }

            switch (word[second[i]]) {
                case 1:
                    secondPoint += 2;
                case 2:
                    secondPoint += 1;
            }

            switch (word[third[i]]) {
                case 1:
                    thirdPoint += 2;
                case 2:
                    thirdPoint += 1;
            }
        }

        std::cout << firstPoint << " " << secondPoint << " " << thirdPoint << std::endl;

        t--;
    }
}