#include <iostream>
#include <vector>
#include <string>


bool find(std::vector<std::string> v, std::string s){
    for (std::string a : v) {
        if (a==s) {
            return true;
        }
    }
    return false;
}

int main() {
    std::vector<int> answers;
    int n;
    std::cin>>n;
    for (int j=0; j<n; j++) {

        int t=0, p1=0, p2=0, p3=0;
        std::vector<std::string> words;
        std::cin>>t;
        std::vector<std::string> f1(t);
        std::vector<std::string> f2(t);
        std::vector<std::string> f3(t);
        for (int i=0; i<t; i++) {
            std::cin>>f1[i];
            if (!find(words, f1[i])) {
                words.push_back(f1[i]);
            }
        }
        for (int i=0; i<t; i++) {
            std::cin>>f2[i];
            if (!find(words, f2[i])) {
                words.push_back(f2[i]);
            }
        }
        for (int i=0; i<t; i++) {
            std::cin>>f3[i];
            if (!find(words, f3[i])) {
                words.push_back(f3[i]);
            }
        }
        for (std::string s : words) {
            if (find(f1, s) && !find(f2, s) && !find(f3, s)) {
                p1+=3;
            } else
            if (!find(f1, s) && find(f2, s) && !find(f3, s)) {
                p2+=3;
            } else
            if (!find(f1, s) && !find(f2, s) && find(f3, s)) {
                p3+=3;
            } else
            if (find(f1, s) && find(f2, s) && !find(f3, s)) {
                p1+=1;
                p2+=1;
            } else
            if (find(f1, s) && !find(f2, s) && find(f3, s)) {
                p1+=1;
                p3+=1;
            } else
            if (!find(f1, s) && find(f2, s) && find(f3, s)) {
                p2+=1;
                p3+=1;
            }
        }
        answers.push_back(p1);
        answers.push_back(p2);
        answers.push_back(p3);
        words.clear();
    }
    for (int b=0; b<answers.size(); b++) {
        std::cout<<answers[b]<<' ';
        if ((b+1)%3==0) {
            std::cout<<std::endl;
        }
    }
}
