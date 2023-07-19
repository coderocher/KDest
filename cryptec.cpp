#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
#define MAX 50
int main() {
    int arr[MAX];
    char dum, ele;
    int i=-1;
    do{
        cin>>ele;
        arr[++i]=(int)ele;
        cin>>dum;
    }while(((int)ele==44)||((int)ele>47&&(int)ele<58));
    int len=i;
    int o = -1;
    int count=0;
    for (int p=0;p<len;p++){
        for(int k=p;k<len;k++){
            if(arr[k]==arr[p])
                count++;
        }
        if(count<=(int)len/2)
            o=arr[p];
        count=0;
    }
    cout<<o;
    return 0;
}
