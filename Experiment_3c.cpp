//Name-Darshan Soni
//PRN-24070123034
//Exp3

//To find coordinates are from which quadrant

#include <iostream>
using namespace std;

int main() {
    float x, y;

    cout<<"Enter x coordinate: ";
    cin>>x;
    cout<<"Enter y coordinate: ";
    cin>>y;

    if(x > 0 && y > 0){
        cout << "Point lies in Quadrant I" << endl;
    }
    else if(x < 0 && y > 0){
        cout << "Point lies in Quadrant II" << endl;
    }
    else if(x < 0 && y < 0){
        cout << "Point lies in Quadrant III" << endl;
    }
    else if(x > 0 && y < 0){
        cout << "Point lies in Quadrant IV" << endl;
    }
    else if(x == 0 && y == 0){
        cout << "Point lies at the Origin" << endl;
    }
    else if(x == 0){
        cout << "Point lies on the Y-axis" << endl;
    }
    else if(y == 0){
        cout << "Point lies on the X-axis" << endl;
    }
    return 0;
}

/*
Output
Enter x coordinate: 4
Enter y coordinate: -7 
Point lies in Quadrant IV
*/