#include<iostream>
using namespace std; 

int main() {
    int ar[] = {1, 1, 1, 2, 2, 3, 3, 4, 4}, num=ar[0];

    for(int i = 1; i < (sizeof(ar)/sizeof(int)); i++) {
        num^=ar[i];
    }
    cout<<num;
}
