#include <iostream>
#include <algorithm>
const int max = 200001;
int ints[max];

int happened[max] = {0};

using namespace std;


void solve() {

    int n;
    cin >> n;
    int ones = 0;
    for (int i = 0; i < n; i++) {
        cin >> ints[i];
        if (ints[i] == 1) {
            ones++;
        }

        happened[ints[i]]++;
        if(happened[ints[i]] > 2){
            cout << "0";
        }
    }
    
    int before = 2;
    for (int i = 1; i < n; i++) {



            if(happened[i] > before){
                cout << "0";
            } else if(happened[i] == before){

            }else if(happened[i] < before){
                int k = i-1;

                cout << "kapit: "<< k ;
            }

        before = happened[i];



    }

    // 1 1 1 2 2 2 2

    if (ones != 2) {
        cout << "0";
    }


}

int main() {
    solve();
    return 0;
}
