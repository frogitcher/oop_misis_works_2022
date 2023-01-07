#include <queue>
#include <iostream>
#include <array>
#include <set>


void ProcessBatch() {
    unsigned long int n_items;
    std::cin >> n_items;
    std::vector<long int> items;
    for (long int i = 0; i < n_items; i++) {
        long int item;
        std::cin >> item;
        items.push_back(item);
    }
    std::set<long int> seen;
    unsigned long int prefix_len = 0;
    for(auto item = items.rbegin(); item != items.rend(); item++) {
        auto emplace_result = seen.emplace(*item);
        if (!emplace_result.second) {
            prefix_len = n_items - seen.size();
            break;
        }
    }
    std::cout << prefix_len << std::endl;
}

int main() {
    int batches;
    std::cin >> batches;
    for (int i = 0; i < batches; i++) {
        ProcessBatch();
    }
}