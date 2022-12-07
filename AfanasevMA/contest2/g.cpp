#include <queue>
#include <iostream>
#include <array>
#include <set>
#include <map>


void process_batch() {
    long int station_count;
    long int query_count;
    std::cin >> station_count >> query_count;
    std::map<long int, long int> station_first;
    std::map<long int, long int> station_last;
    for (long int i = 0; i < station_count; i++) {
        long int station_n;
        std::cin >> station_n;
        if (station_first.count(station_n) == 0) {
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
        if (station_first.count(a) != 0 && station_first.count(b) != 0) {
            if (station_first[a] < station_last[b]) {
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