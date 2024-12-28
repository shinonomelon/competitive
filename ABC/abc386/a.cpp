#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>

using namespace std;

int main(){
    vector<int> cards(4);
    for(int i = 0; i < 4; i++){
        cin >> cards[i];
    }

    bool can_full_house = false;

    for(int x = 1; x <= 13; x++){

        vector<int> new_cards = cards;
        new_cards.push_back(x);

        unordered_map<int, int> count_map;
        for(int i = 0; i < new_cards.size(); i++){
            count_map[new_cards[i]]++;
        }

        if(count_map.size() == 2){
            bool has_three = false, has_two = false;
            for(auto &[key, val] : count_map){
                if(val == 3) has_three = true;
                if(val == 2) has_two = true;
            }
            if(has_three && has_two){
                can_full_house = true;
                break;
            }
        }
    }

    if(can_full_house){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}


// #include <iostream>
// #include <vector>
// #include <algorithm>
// #include <map>

// using namespace std;

// int main(){
//     vector<int> cards(4);
//     for(int i = 0; i < 4; i++){
//         cin >> cards[i];
//     }

//     bool can_full_house = false;

//     for(int x = 1; x <= 13; x++){
//         vector<int> new_cards = cards;
//         new_cards.push_back(x);

//         map<int, int> count_map;
//         for(int i = 0; i < new_cards.size(); i++){
//             count_map[new_cards[i]]++;
//         }

//         if(count_map.size() == 2){
//             bool has_three = false, has_two = false;
//             map<int, int> it;
//             for(it = count_map.begin(); it != count_map.end(); ++it){
//                 if(it->second == 3) has_three = true;
//                 if(it->second == 2) has_two = true;
//             }
//             if(has_three && has_two){
//                 can_full_house = true;
//                 break;
//             }
//         }
//     }

//     if(can_full_house){
//         cout << "Yes" << endl;
//     }
//     else{
//         cout << "No" << endl;
//     }

//     return 0;
// }
