#include<iostream>

using namespace std;

void honoi (int ring, int one, int two, int three){
    if (ring == 1){
        cout << "Ring 1 from " << one << " to " << three << endl;
    }
    else {
        honoi (ring-1, one, three, two);
        cout << "Ring " << ring << " from " << one << " to " << three << endl;
        honoi (ring-1, two, one, three);
    }
}
int main (){
    int ring;
    cin >> ring;
    honoi (ring, 1, 2, 3);
    return 0;
}