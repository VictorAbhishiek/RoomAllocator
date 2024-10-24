#include "RoomAllocator.h"
#include <algorithm>

struct Event{
    int time;
    bool isArrivial;
}; 

// comparator function to sort events
bool compare(Event a, Event b){
    if(a.time == b.time){
        return a.isArrivial < b.isArrivial; //prioritize departure over arrivial 
    }
    return a.time < b.time;
}

//function to calculate minimum number of rooms required
int RoomAllocator::calculateMinRooms(vector<pair<int, int>>& days, vector<pair<int,int>>& times){
    vector<Event> events;

    // create event list for days and times
    
        for(int i = 0; i < days.size(); i++){
        int arrivalTimestamp = days[i].first * 10000 + times[i].first;  // Combine day and arrival time
        int departureTimestamp = days[i].second * 10000 + times[i].second; // Combine day and departure time
    
        events.push_back({arrivalTimestamp, true}); //arrivial time
        events.push_back({departureTimestamp, false}); //departure time
    }

    //sort the events based on time
    sort(events.begin(), events.end(), compare);

    int roomInUse = 0;
    int maxRooms = 0;

    //traverse the events
    for(auto &event : events){
        if(event.isArrivial){
            roomInUse++; // A room is occupied
        }else{
            roomInUse--; // A room is free
        }
        maxRooms = max(maxRooms, roomInUse); //track the maximum rooms in use
    }
    return maxRooms;
}