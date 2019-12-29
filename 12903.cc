#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    string answer = "";
    answer=s.substr((s.length()-1)/2,(s.length()+1)%2+1);
    return answer;
}
