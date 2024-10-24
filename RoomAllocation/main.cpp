#include <iostream>
#include "RoomAllocator.h"
using namespace std;

int main(){
    RoomAllocator roomAllocator;
 
    //user input: number of visitors
    int numVisitors;
    cout << "Enter the number of visitors: ";
    cin >> numVisitors;

    //collect arrivial and departure day info
    vector<pair<int, int>> days;
    vector<pair<int, int>> times;
 
    cout << "Enter the arrival and departure day and time (24-hrs format) for each visitor";
    for(int i=0; i < numVisitors; i++){
        int arrivialDay, leaveDay, arrivialTime, leaveTime;
        cout << "visitor" << i + 1 << ": \n";
        cout << "Enter Arrivial Day and Departure Day: ";
        cin >> arrivialDay >> leaveDay;
        days.push_back({arrivialDay, leaveDay});

        cout << "Enter Arrivial Time and Departure Time (24-hrs format): ";
        cin >> arrivialTime >> leaveTime;
        times.push_back({arrivialTime, leaveTime});
    }

    //calculate and display results
    int roomsRequired = roomAllocator.calculateMinRooms(days, times);
    cout << "\nMinimum number of rooms required: " << roomsRequired << endl;

    return 0;
}