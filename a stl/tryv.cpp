#include <iostream>
#include <array>
using namespace std;

int main() {
    array <int , 5> arr;
    arr.fill(1);
    for(int i: arr)
       cout<<arr[i]<<" ";
    return 0;
}
