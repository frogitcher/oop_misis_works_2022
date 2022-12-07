#include <queue>
#include <iostream>
#include <array>
#include <map>


void process_batch() {
    int planet_count, cost_of_uber;
    std::cin >> planet_count >> cost_of_uber;
    std::map<int, int> orbitas;
    for (int i = 0; i < planet_count; i++) {
        int i_at_orbita;
        std::cin >> i_at_orbita;
        orbitas[i_at_orbita]++;
    }
    long int total_cost = 0;
    for (const auto& [orbita, planet_count_at_orbita] : orbitas) {
        total_cost += std::min(cost_of_uber, planet_count_at_orbita);
    }
    std::cout << total_cost << std::endl;
}

int main() {
    int batches;
    std::cin >> batches;
    for (int i = 0; i < batches; i++) {
        process_batch();
    }
}