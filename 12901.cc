#include <string>
#include <vector>

using namespace std;

const vector<string> day={"SUN","MON","TUE","WED","THU","FRI","SAT"};
const vector<int> mday={31,29,31,30,31,30,31,31,30,31,30,31};

string solution(int a, int b) {
    string answer = "";
    int d=0;
    for(int i=0;i<a-1;i++){
        d+=mday[i];
    }
    d+=b;
    d+=4;
    d%=7;
    answer=day[d];
    return answer;
}
