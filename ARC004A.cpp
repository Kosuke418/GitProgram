#include<iostream>
#include <math.h>

using namespace std;

int main(){
    int N;
    float x[100],y[100];
    float dis;
    float disMax=0;

    cin >> N;

    for(int i=0;i<N;i++){
        cin >> x[i] >> y[i];
    }
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            if(i<j) dis = sqrt((x[i]-x[j])*(x[i]-x[j])+(y[i]-y[j])*(y[i]-y[j]));
            if(disMax<dis) disMax=dis;
        }
    }
    cout << disMax << endl;
}