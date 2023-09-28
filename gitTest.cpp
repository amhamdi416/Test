#include <iostream>
using namespace std;


int main(void){
    /*
    asks for radius
    computes area of a circle
    prints out the area
    */
    float radius = 0;
    float area = 0;

    cout <<"type in the radius: " << endl;
    cin >> radius;

    area = 3.14 * radius *radius;

    cout<< "The area of a circle with the radius of "<< radius << "is "<< area << endl;

    return 0;
    
}