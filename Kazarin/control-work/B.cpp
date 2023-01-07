#include <iostream>
#include <string>

std::string Foo(std::string s) {
	int cnt_lo = 0, cnt_hi = 0;

	for (char c: s) {
		if (c >= 'a' && c <= 'z')
			++cnt_lo;
		else if (c >= 'A' && c <= 'Z')
			++cnt_hi;
	}

	for (auto i = s.begin(); i != s.end(); ++i) {
		char c = *i;

		if (cnt_lo > cnt_hi && c >= 'A' && c <= 'Z'
			|| cnt_lo <= cnt_hi && c >= 'a' && c <= 'z')
			*i ^= 32;
	}

	return s;
};

int main() {
	std::cout << Foo(std::string("aaaaBB")) << '\n';
	std::cout << Foo(std::string("555555")) << '\n';
	std::cout << Foo(std::string("AAAAbb")) << '\n';
	std::cout << Foo(std::string("aaaBBB")) << '\n';
	std::cout << Foo(std::string("hjkhGHJ312#54228228")) << '\n';
}