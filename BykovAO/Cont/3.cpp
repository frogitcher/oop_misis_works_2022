#include <iostream>
#include <string>
#include <set>
#include <map>

struct StringsStatistics {

    std::set<std::string> set_;
    std::map<int, int> map_;

    StringsStatistics& StringsStatistics::InsertString(const std::string& value) {
        set_.insert(value);
        if (map_.find(value.size()) != map_.end()) {
            map_.at(value.size())++;
        }
        else {
            map_.insert(value.size(), 1);
        }
    }

    StringsStatistics& StringsStatistics::EraseString(const std::string& value) {
        set_.erase(set_.find(value));
        map_.at(value.size())--;
        if (map_.at(value.size()) == 0) {
            map_.erase(value.size());
        }
    }

    int StringsStatistics::CountUnique() const {
        return set_.size();
    }

    int StringsStatistics::CountOfSize(int size) const {
        return map_.at(size);
    }

};