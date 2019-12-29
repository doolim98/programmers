#include <string>
#include <vector>

using namespace std;

string solution(string s, int n) {
    string answer = "";
    for(char c:s){
        if(c==' ')
            c=' ';
        else if('a'<=c&&c<='z')
            c=(c-'a'+n)%('z'-'a'+1)+'a';
        else
            c=(c-'A'+n)%('Z'-'A'+1)+'A';
        answer+=c;
    }
    return answer;
}
