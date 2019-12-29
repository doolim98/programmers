#include <string>
#include <iostream>
using namespace std;

bool solution(string s)
{
    bool answer = true;
    int count=0;
    for(char i:s){
        if(i=='p'||i=='P')
            count++;
        if(i=='y'||i=='Y')
            count--;
    }
    if(count==0)
        answer=true;
    else
        answer=false;
    return answer;
}
