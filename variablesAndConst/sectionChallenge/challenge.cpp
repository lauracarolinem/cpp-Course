#include <iostream>

using namespace std;

int main(){
    float small_room_price {25};
    float large_room_price {35};
    float tax {0.06};

    cout << "Laura's Carpet Cleaning Service\n";

    cout << "How many small rooms would you like cleaned? ";
    int small_rooms {0};
    cin >> small_rooms;

    cout << "How many large rooms would you like cleaned? ";
    int large_rooms {0};
    cin >> large_rooms;
    cout << "\n\nEstimate for carpet cleaning service";
    cout << "\nPrice of small rooms: $" << small_room_price;
    cout << "\nPrice of large rooms: $" << large_room_price;

    cout << "\nNumber of small rooms: " << small_rooms;
    cout << "\nNumber of large rooms: " << large_rooms;


    double total_price = (small_room_price * small_rooms) + (large_room_price * large_rooms);
    cout << "\nCost: $" << total_price;
    cout << "\nTax: $" << tax;
    cout << "\n==========================================";

    float total_estimate = (total_price * tax) + total_price;
    cout << "\nTotal estimate: $" << total_estimate;
    cout << "\nThis is valid for 30 days";

    return 0;
}