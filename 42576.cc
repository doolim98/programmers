#include <string>
#include <vector>
#include <algorithm>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
    sort(participant.begin(),participant.end());
    sort(completion.begin(),completion.end());
    vector<string>::iterator pit=participant.begin();
    vector<string>::iterator cit=completion.begin();
    while(*pit==*cit){
        pit++;
        cit++;
    }
    answer=*pit;
	return answer;
}
