#include <string>
#include <vector>
#include <iostream>

using namespace std;

long long solution(int a, int b) {
    long long answer = 0;
    long long gab=a-b;
    if(gab<0)
        gab*=-1;
    answer=(a+b)*(gab+1);
    answer/=2;
    return answer;
}
