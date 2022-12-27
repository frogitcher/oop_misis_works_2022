#include<iostream>
#include<string>

int CharToInt(const char c)
{
    switch (c)
    {
    case '0':
        return 0;
    case '1':
        return 1;
    case '2':
        return 2;
    case '3':
        return 3;
    case '4':
        return 4;
    case '5':
        return 5;
    case '6':
        return 6;
    case '7':
        return 7;
    case '8':
        return 8;
    case '9':
        return 9;
    default:
        return 0;
    }
}

int main() {
    int n;
    std::string seq;

    std::cin >> n;
    std::cin >> seq;

    std::string ans(10, '0');

    for (int i = 0; i < seq.size(); i++) {
        char ch = seq[i];
        if (ch == 'L') {
            ans[ans.find('0')] = '1';
        }
        else if (ch == 'R') {
            ans[ans.find_last_of('0')] = '1';
        }
        else {
            ans[CharToInt(ch)] = '0';
        }
    }
    std::cout << ans;

    return 0;
}