#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int N;

bool cmp(string a, string b){
    if(a[N]==b[N]){
        return a<b;
    }
    return a[N]<b[N];
}

vector<string> solution(vector<string> strings, int n) {
    N=n;
    vector<string> answer;
    sort(strings.begin(),strings.end(),cmp);
    answer=strings;
    return answer;
}
