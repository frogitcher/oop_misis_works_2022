#include <queue>
#include <iostream>
#include <array>
#include <set>
#include <map>


template <typename T>
std::set<T> union_of(const std::set<T>& lhs, const std::set<T>& rhs)
{
    std::set<T> out = lhs;
    out.insert(rhs.begin(), rhs.end());
    return out;
}


void process_batch() {
    long int station_count;
    long int query_count;
    std::cin >> station_count >> query_count;
    std::map<long int, long int> station_first;
    std::map<long int, long int> station_last;
    for (long int i = 0; i < station_count; i++) {
        long int station_n;
        std::cin >> station_n;
        if (station_first.find(station_n) == station_first.end()) {
            station_first[station_n] = i;
            station_last[station_n] = i;
        }
        else {
            station_last[station_n] = i;
        }
    }
    for (long int i = 0; i < query_count; i++) {
        long int a, b;
        std::cin >> a >> b;
        bool result = false;
        if (station_first.find(a) != station_first.end() && station_first.find(b) != station_first.end()) {
            long int a_first = station_first[a];
            long int b_last = station_last[b];

            if (a_first < b_last) {
                result = true;
            }
        }
        std::cout << (result ? "YES" : "NO") << std::endl;
    }
}

int main() {
    int batches;
    std::cin >> batches;
    for (int i = 0; i < batches; i++) {
        process_batch();
    }
}