#include<iostream>
#include<vector>

using namespace std;


bool deleteMin(int[] a){
    if (a.length == 0) throw a;
    int minValue = a[0];
    int pos = 0;
    for (int i = 1;i< a.length;i++){
        if (a[i] < minValue){
            minValue = a[i];
            pos = i;
        }
    }
}

int main(){
    int[10] a = {2,3,4,55,1,7,8,5,21,45,0};

    return 0;
}

