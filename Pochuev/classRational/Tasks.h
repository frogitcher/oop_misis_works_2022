#pragma once

#include"Rational.h"
#include<vector>
#include<algorithm>
#include<map>

namespace Task {
	using std::cin;
	using std::cout;

	void Task1();
	void Task2();
	void Task3();
	void Task4();
	void Task5();
	void Task6();
	void Task7();
	void Task8();
	void Task11();
	void Task21();
	void Task31();

	void Start() {
		try {
			cout << "Choose task:1,2,3,4,5,6,7,8,11,21,31\n";
			int choice;
			cin >> choice;
			switch (choice) {
			case 1:
				Task1();
				break;
			case 2:
				Task2();
				break;
			case 3:
				Task3();
				break;
			case 4:
				Task4();
				break;
			case 5:
				Task5();
				break;
			case 6:
				Task6();
				break;
			case 7:
				Task7();
				break;
			case 8:
				Task8();
				break;
			case 11:
				Task11();
				break;
			case 21:
				Task21();
				break;
			case 31:
				Task31();
				break;
			}
		}
		catch (std::exception& exc) {
			std::cerr << exc.what();
		}
	}

	void Task1() {
		try {
			cout << "Ведите два числа:\n";
			Rational r1, r2;
			cin >> r1;
			cin >> r2;
			cout << r1 + r2 << ' ' << r1 - r2 << ' ' << r1 * r2 << ' ' << r1 / r2;
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task2() {
		try {
			cout << "Ведите два числа:\n";
			Rational r1, r2;
			cin >> r1;
			cin >> r2;
			cout << (r1 == r2 ? "YES" : "NO");
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task3() {
		try {
			cout << "Ведите два числа:\n";
			Rational r1, r2;
			cin >> r1;
			cin >> r2;
			cout << "бОльшее : " << (r1 > r2 ? r1 : r2);
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task4() {
		try {
			cout << "Ведите количество элементов:\n";

			int size;
			Rational summ, pr = 1;

			cin >> size;

			for (int i = 0; i < size; i++) {
				Rational r;
				cin >> r;
				summ += r;
				pr *= r;
			}
			cout << "Sum = " << summ << " Mult = " << pr;
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task5() {
		try {
			cout << "Ведите число:\n";

			int num, size;
			std::vector<Rational>arr;

			cin >> num;

			cout << "Ведите количество элементов:\n";
			cin >> size;

			for (int i = 0; i < size; i++) {
				Rational r;
				cin >> r;
				arr.push_back(r);
			}
			cout << "массив + число:\n";
			for (auto& elem : arr) {
				std::cout << elem + num << ' ';
			}
			cout << "\nмассив - число:\n";
			for (auto& elem : arr) {
				std::cout << elem - num << ' ';
			}
			cout << "\nмассив * число:\n";
			for (auto& elem : arr) {
				std::cout << elem * num << ' ';
			}
			cout << "\nмассив / число:\n";
			for (auto& elem : arr) {
				std::cout << elem / num << ' ';
			}
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task6() {
		try {
			int size;
			std::vector<Rational>arr;

			cout << "Ведите количество элементов:\n";
			cin >> size;

			for (int i = 0; i < size; i++) {
				Rational r;
				cin >> r;
				arr.push_back(r);
			}
			cout << *std::max_element(arr.rbegin(), arr.rend()) << ' ' << *std::min_element(arr.rbegin(), arr.rend());
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task7() {
		try {
			int num;
			cout << "введите число:\n";
			cin >> num;
			cout << ((std::to_string(num).find('/') != -1) ? "Rational" : "Not Rational");
		}
		catch (std::exception& exc) {
			throw exc;
		}
	}

	void Task8() {
		try {
			cout << "A*X = B\n введите A и B(можно с плавающей точкой;целые числа вводятся или в рациональном виде, или через <число>.0)\n";

			Rational a, b;

			cin >> a >> b;

			cout << b / a;
		}
		catch (std::exception& exc) {
			throw exc;
		}
	}

	void Task11() {
		try {
			cout << "введите a1,b1,c1,a2,b2,c2 в рациональном виде или с плавающей точкой\n";
			Rational a1, b1, c1, a2, b2, c2;

			cin >> a1 >> b1 >> c1 >> a2 >> b2 >> c2;

			if (a1 / a2 == b1 / b2 and b1 / b2 == c1 / c2) {
				cout << "Infinite answers";
			}
			else if (a1 / a2 == b1 / b2 and b1 / b2 != c1 / c2) {
				cout << "No answers";
			}
			else {
				Rational x = (b1 * c2 - b2 * c1) / (b1 * a2 - b2 * a1);
				Rational y = (c1 - a1 * x) / b1;

				std::cout << "One answer: " << x << ", " << y << std::endl;
			}
		}
		catch (std::exception exc) {
			throw exc;
		}
	}

	void Task21() {
		try {
			int size;
			Rational* first = nullptr;
			Rational* second = nullptr;

			cout << "Ведите количество элементов:\n";
			cin >> size;

			std::vector<Rational>arr(size);

			for (int i = 0; i < size; i++) {
				Rational r;
				cin >> r;
				arr[i] = r;
				for (int j = 0; j < i; j++) {
					if ((arr[j] + r).GetDen() == 1) {
						first = &arr[i];
						second = &arr[j];
					}
				}
			}
			cout << ((first != nullptr) ? (first->asString() + " " + second->asString()) : "No answer");
		}
		catch (std::exception& exc) { throw exc; }
	}

	void Task31() {
		try {
			int size;

			cout << "Ведите количество элементов:\n";
			cin >> size;

			std::vector<Rational>arr;
			std::vector<Rational>temp_arr;
			std::map<int, Rational>sums;
			//sums.insert(std::make_pair(0, Rational(0)));
			Rational summ;
			bool isFound = false;

			for (int i = 0; i < size; i++) {
				Rational r;
				cin >> r;
				arr.push_back(r);
				summ += r;
				if (summ.GetNum() % summ.GetDen() == 0 and isFound != 0) {
					for (auto& j : arr) {
						temp_arr.push_back(j);
						isFound = 1;
					}
				}
				if (!isFound) {
					for (auto& [key, value] : sums) {
						//cout << "here" << i;
						Rational diff = summ - value;
						if (diff.GetNum() % diff.GetDen() == 0) {
							for (int index = key+1; index <= i; index++) {
								temp_arr.push_back(arr[index]);
							}
							isFound = true;
						}
					}
					if (!isFound) {
						sums.insert(std::make_pair(i, summ));
					}
				}
			}
			if (isFound) {
				for (auto& i : temp_arr) {
					cout << i << " ";
				}
				return;
			}
			cout << "Not Found";
		}
		catch (std::exception& exc) { throw exc; }
	}
}