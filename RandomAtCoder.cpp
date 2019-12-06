#include<iostream>
#include <string>

using namespace std;

int RandomNum(){
    return rand()%146+1;
}

int main(){
    int problemNum;
    string url1;

    srand((unsigned int)time(NULL));
    problemNum = RandomNum();
    url1 = "open -a '/Applications/Google Chrome.app' https://atcoder.jp/contests/abc";
    if(problemNum<10){
        url1 = url1 + "00" + to_string(problemNum) + "/tasks";  
    }
    else if(problemNum<100){
        url1 = url1 + "0" + to_string(problemNum) + "/tasks";
    }
    else{
        url1 = url1 + to_string(problemNum) + "/tasks";      
    }
    system(url1.c_str());
    return 0;
}