#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main(void){

    int *ip;
    int j = 10;

    ip = &j;

    cout << &j << " "<<ip << " "<<*ip;

    return 0;
}