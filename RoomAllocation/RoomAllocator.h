#ifndef ROOM_ALLOCATOR_H
#define ROOM_ALLOCATOR_H

#include <vector>
#include <utility>
using namespace std;
 
class RoomAllocator{
    public:
        int calculateMinRooms(vector<pair<int, int>>& days, vector<pair<int, int>>& times);
};

#endif //ROOMALLOCATOR_H