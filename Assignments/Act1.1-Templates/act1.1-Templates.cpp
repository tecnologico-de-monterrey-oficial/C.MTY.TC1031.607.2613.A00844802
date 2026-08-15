#include <iostream>
#incluide "List.h"
using namespace std;

int sum(int a, int b){
    return a + b;
}
double sum(double a, double b){
    return a + b;
}

int main() {

    double a= 5.5;
    double b= 10.5;

    cout << "Sum of " << a << " and " << b << " is: " << sum(a,b) << endl;

    return 0;

    List<int> list;
    list.insert(5);
}