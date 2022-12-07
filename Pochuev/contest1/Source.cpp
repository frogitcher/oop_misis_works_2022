//решал ночью (за несколько часов до сдачи), так что решение может быть замудренным; могу перерешать с более
// простыми алгоритмами
// 
// A
//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//int main() {
//	int n;
//
//	std::cin >> n;
//
//	std::vector<int> arr(n);
//
//	for (auto& elem : arr)
//		std::cin >> elem;
//
//	std::sort(arr.begin(), arr.end(), [](int a, int b) {return b < a; });
//
//	int count = 0;
//	for (auto elem = arr.rbegin() + 1; *elem < *(arr.rend() - 1); elem++)
//		if (*elem > *arr.rbegin())
//			count++;
//
//	std::cout << count;
//
//	return 0;
//}
// 
// 
// B
//#include<iostream>
//#include<map>
//#include<algorithm>
//#include<utility>
//
//int main() {
//	int n;
//
//	std::cin >> n;
//
//	std::map<int, int> dict;
//
//	for (int i = 0; i < n; ++i) {
//		int temp;
//		std::cin >> temp;
//		if (dict.count(temp) == 0)
//			dict.insert(std::make_pair(temp, i));
//		else
//			dict.at(temp) = i;
//	}
//
//	long int max = 10000000, index = 0;
//	for (auto& t : dict) {
//		if (t.second < max) {
//			max = t.second;
//			index = t.first;
//		}
//	}
//	
//	std::cout << index;
//
//	return 0;
//}
//
// 
// C
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<utility>
//
//int main() {
//	int n;
//
//	std::cin >> n;
//
//	std::vector<std::pair<int,int>> arr(n);
//	std::pair<int, int>tomas;
//	{
//		int a, b, c, d;
//		std::cin >> a >> b >> c >> d;
//		tomas = std::make_pair(1, a + b + c + d);
//	}
//
//	arr[0] = tomas;
//
//	for (int i = 2; i <= n; i++) {
//		int a, b, c, d;
//		std::cin >> a >> b >> c >> d;
//		arr[i-1] = std::make_pair(i, a + b + c + d);
//	}
//
//	/*std::cout << "\n"<< arr.size();
//	for (auto& elem : arr)
//		std::cout << elem.first << ' ' << elem.second << "\n";*/
//
//
//	sort(arr.rbegin(), arr.rend(), [](auto a, auto b) {
//		if (a.second == b.second)
//			return a.first > b.first;
//		return a.second < b.second;
//		});
//	
//	for(int i = 0; i < n; i++)
//		if (arr[i] == tomas) {
//			std::cout << i + 1;
//			break;
//		}
//	/*std::cout << "\n";
//	for (auto& elem : arr)
//		std::cout << elem.first << ' ' << elem.second << "\n";*/
//
//	return 0;
//}
//D
//#include<iostream>
//#include<vector>
//#include<algorithm>
//#include<utility>
//
//int main() {
//	int n, a, b, s1, s = 0;
//
//	std::cin >> n >> a >> b >> s1;
//
//	s += s1;
//
//	std::vector<int> arr(n - 1);
//	for (auto& elem : arr) {
//		std::cin >> elem;
//		s += elem;
//	}
//
//	if (s1 * a / s >= b)
//		std::cout << 0;
//	else {
//		std::sort(arr.begin(), arr.end(), [](auto a, auto b) {
//			return b < a;
//			});
//
//		int count = 0;
//		while (s1 * a / s < b) {
//			s -= arr[count];
//			count += 1;
//		}
//		std::cout << count;
//	}
//
//	return 0;
//}
// 
// 
//E
//#include<iostream>
//#include<string>
//#include<vector>
//
//int main() {
//	int n;
//
//	std::cin >> n;
//
//	std::vector<std::string>ans(n);
//	for (auto& elem : ans) {
//		std::string temp;
//		std::cin >> temp;
//		std::string newstr ={(char)std::tolower(temp[0]), (char)std::tolower(temp[1]), (char)std::tolower(temp[2]) };
//		if (newstr == "yes")
//			elem = "yes";
//		else
//			elem = "no";
//	}
//	for (auto& elem : ans)
//		std::cout << elem << '\n';
//	return 0;
//}
//F можно решить намного проще
//#include<iostream>
//#include<string>
//#include<algorithm>
//
//int Count(std::string pstr,const char ch) {
//	int count = 0;
//	/*for (int i = 0; i < pstr.size(); ++i)
//		if (pstr[i] == ch)
//			count++;*/
//	for(auto elem = pstr.cbegin(); elem < pstr.cend(); ++elem)
//		if (*elem == ch)
//			count++;
//	return count;
//}
//
//int main() {
//	int n;
//
//	std::cin >> n;
//	std::string str;
//	std::cin >> str;
//	if (n % 4 != 0)std::cout << "===";
//	else {
//		int countA = Count(str, 'A'), countC = Count(str, 'C'), countG = Count(str, 'G'), countT = Count(str, 'T');
//		if (countA > n / 4 or countC > n / 4 or countG > n / 4 or countT > n / 4)
//			std::cout << "===";
//		else {
//			if (str.find("?") != -1) {
//				while (countA != n / 4 and str.find("?") != -1) {
//					str[str.find("?")] = 'A';
//					countA++;
//				}
//				while (countC != n / 4 and str.find("?") != -1) {
//					str[str.find("?")] = 'C';
//					countC++;
//				}
//				while (countG != n / 4 and str.find("?") != -1) {
//					str[str.find("?")] = 'G';
//					countG++;
//				}
//				while (countT != n / 4 and str.find("?") != -1) {
//					str[str.find("?")] = 'T';
//					countT++;
//				}
//				std::cout << str;
//			}
//			else {
//				std:: cout << str;
//			}
//		}
//	}
//	return 0;
//}
//
// 
// G
//#include<iostream>
//#include<string>
//#include<set>
//
//int main() {
//	int n;
//	std::string str;
//	std::set<char>myset;
//
//	std::cin >> n;
//	std::cin >> str;
//	
//	if (str.size() < 26)
//		std::cout << "NO";
//	else {
//		for (auto& ch : str)
//			myset.insert(std::tolower(ch));
//		if (myset.size() == 26)
//			std::cout << "YES";
//		else
//			std::cout << "NO";
//	}
//	return 0;
//}


//H
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
		if (ch == 'L')
			ans[ans.find('0')] = '1';
			
		else if (ch == 'R') 
			ans[ans.find_last_of('0')] = '1';
		else
			ans[CharToInt(ch)] = '0';
	}
	std::cout << ans;

	return 0;
}

