#include <iostream>
#include <math.h>

using namespace std;

int main () {

   int x,y,z;
   cin >> x;
   cin >> y;
   cin >> z;{
    if (x>=y && x>=z && y>=z){
    cout << z << endl;
    cout << y << endl;
    cout << x << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
    else if (x>=y && x>=z && z>=y){
    cout << y << endl;
    cout << z << endl;
    cout << x << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
    else if (y>=z && y>=x && z>=x){
    cout << x << endl;
    cout << z << endl;
    cout << y << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
    else if (y>=z && y>=z && x>=z ){
    cout << z << endl;
    cout << x << endl;
    cout << y << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
    else if (z>=x && z>=y && x>=y){
    cout << y << endl;
    cout << x << endl;
    cout << z << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
    else if (z>=x && z>=y && y>=x){
    cout << x << endl;
    cout << y << endl;
    cout << z << endl<< endl;
    cout << x << endl;
    cout << y << endl;
    cout << z << endl;}
   }
    return 0;
}
