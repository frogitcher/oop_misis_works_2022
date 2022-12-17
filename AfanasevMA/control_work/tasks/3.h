#include <map>
#include <set>

#ifndef AFANASEV_CONTROL_WORK_3_H
#define AFANASEV_CONTROL_WORK_3_H

class MapFather {
public:
    MapFather();

    void FirstSetTo(int x, int y);

    void SecondSetTo(int x, int y);

    std::optional<int> FirstGet(int x);

    std::optional<int> SecondGet(int x);

    bool FirstIsSet(int x);

    bool SecondIsSet(int x);

    std::map<int, int> GetMapUnion();

private:
    std::map<int, int> _map1;
    std::map<int, int> _map2;
};

#endif
