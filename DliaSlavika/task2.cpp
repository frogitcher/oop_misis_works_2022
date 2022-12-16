#include <iostream>
#include <math.h>
#include <regex>

bool checkException(std::string s, std::string pattern) {
    std::regex r(pattern);
    return std::regex_match(s, r);
}

void view(int ** matrix, int * vector, int size) {
    std::cout << "Матрица:" << std::endl;
    for(int i = 0; i < size; i++){
        for(int j = 0; j < size; j++) std::cout << matrix[i][j] << " ";
        std::cout << std::endl;
    }
    std::cout << std::endl << "Вектор:" << std::endl;
    for(int i = 0; i < size; i++) std::cout << vector[i] << " ";
    std::cout << std::endl;
}

int execute(int ** matrix, int * vector, int size) {
    int countZero = 0;
    bool zeroesIsExist = true;
    for(int i = 0; i < size; i++) {
        bool isZeroesInColumn = false;
        for(int j = 0; j < size; j++) 
            if(matrix[j][i] == 0) {
                countZero++;
                isZeroesInColumn = true;
            }
        if(!isZeroesInColumn) {
            zeroesIsExist = false;
            break;
        }
        isZeroesInColumn = false;
    }
    if(zeroesIsExist){
        std::cout << "Количество нулей в матрице: ";
        return countZero;
    }
    else {
        int sum = 0;
        for (int i = 0; i < size; i++) sum += abs(vector[i]);
        std::cout << "Абсолютная сумма вектора: ";
        return sum;
    }
}

int setElement() {
    std::string element;
    std::cin >> element;
    if (checkException(element, "[-]*\\d+")) return std::atoi(element.c_str());
    else {
        std::cout << "Это должно быть число. Введите еще раз: " << std::endl;
        setElement();
    }
}

void getRandomMatrix(int** matrix, int size) {
    for(int i = 0; i < size; i++) 
        for(int j = 0; j < size; j++) matrix[i][j] = rand()%1000 - (2<<9);
}

void getRandomVector(int* vector, int size) {
    for(int i = 0; i < size; i++) vector[i] = rand()%1000 - (2<<9);
}

void getMatrix(int** matrix, int size) {
    for(int i = 0; i < size; i++) 
        for(int j = 0; j < size; j++) matrix[i][j] = setElement();
}

void getVector(int* vector, int size) {
    for(int i = 0; i < size; i++) vector[i] = setElement();
}

int useKeyBoard(int** matrix, int* vector, int size) {
    std::cout << "Введите элементы матрицы:" << std::endl;
    matrix = new int* [size];
    for (int i = 0; i < size; i++)
        matrix[i] = new int[size];
    getMatrix(matrix, size);

    vector = new int[size];
    std::cout << "Введите элементы вектора:" << std::endl;
    getVector(vector, size);

    view(matrix, vector, size);
    return execute(matrix, vector, size);
}

int useRandom(int** matrix, int* vector, int size) {
    matrix = new int* [size];
    for (int i = 0; i < size; i++)
        matrix[i] = new int[size];
    getRandomMatrix(matrix, size);

    vector = new int[size];
    getRandomVector(vector, size);

    view(matrix, vector, size);
    return execute(matrix, vector, size);
}

void executeByWay(std::string way) {
    std::cout << "Введите размер массива и вектора: " << std::endl;
    int size = setElement();
    int** matrix = 0;
    int* vector = 0;
    if(way == "1") std::cout << useKeyBoard(matrix, vector, size);
    else if(way == "2") std::cout << useRandom(matrix, vector, size);
    else std::cout << "ebat lox";
}

int main() {
    std::cout << "Выберете способ задания значений:" << std::endl;
    std::cout << "1 - задать значения с клавиатуры. 2 - задать рандомные." << std::endl;
    std::string way;
    std::cin >> way;
    if(checkException(way, "[12]")) executeByWay(way);
    else {
        std::cout << "Ошибка при вводе данных, вводите 1 или 2." << std::endl;
        main();
    } 
}
