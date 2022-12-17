#include <iostream>
#include "3.h"

MapFather::MapFather() {
    this->_map1 = {};
    this->_map2 = {};
}

void MapFather::FirstSetTo(int x, int y) {
    this->_map1[x] = y;
}

void MapFather::SecondSetTo(int x, int y) {
    this->_map2[x] = y;
}

bool MapFather::FirstIsSet(int x) {
    return this->_map1.count(x) > 0;
}

bool MapFather::SecondIsSet(int x) {
    return this->_map2.count(x) > 0;
}

std::optional<int> MapFather::FirstGet(int x) {
    if (this->FirstIsSet(x)) {
        return this->_map1[x];
    } else {
        return {};
    }
}

std::optional<int> MapFather::SecondGet(int x) {
    if (this->SecondIsSet(x)) {
        return this->_map2[x];
    } else {
        return {};
    }
}

std::map<int, int> MapFather::GetMapUnion() {
    std::map<int, int> out = {};

    std::set<int> keys_union = {};
    for (const auto &pair: this->_map1) {
        keys_union.emplace(pair.first);
    }
    for (const auto &pair: this->_map2) {
        keys_union.emplace(pair.first);
    }

    for (const auto &key: keys_union) {
        auto first = this->FirstGet(key);
        auto second = this->SecondGet(key);
        if (first && second) {
            if (std::abs(first.value()) > std::abs(second.value())) {
                out[key] = first.value();
            } else {
                out[key] = second.value();
            }
        } else if (first) {
            out[key] = first.value();
        } else if (second) {
            out[key] = second.value();
        } else {
            throw std::runtime_error("something went wrong...");
        }
    }
    return out;
}

int main() {
    auto father = MapFather();
    father.FirstSetTo(2, 8);
    father.SecondSetTo(2, 10);
    father.FirstSetTo(3, 228);
    father.SecondSetTo(3, 10);
    father.FirstSetTo(11123, 123);
    father.SecondSetTo(128, 321);

    std::cout << father.FirstIsSet(11123) << std::endl;
    std::cout << father.FirstIsSet(128) << std::endl;
    std::cout << father.SecondIsSet(11123) << std::endl;
    std::cout << father.SecondIsSet(128) << std::endl;

    father.FirstSetTo(888, -123);
    father.SecondSetTo(888, 4);

    auto uni = father.GetMapUnion();
    for (const auto& pair : uni) {
        std::cout << "[" << pair.first << "] = " << pair.second << std::endl;
    }
}