#include <iostream>
#include <string>
#include <vector>

using namespace std;

string solution(vector<string> participant, vector<string> completion) {
	string answer = "";
	for(vector<string>::iterator it=participant.begin();it!=participant.end();it++){
		if(!find(completion.begin(),completion.end(),*it){
			answer=*it;
		}
	}
	return answer;
}
int main(){
	return 0;
}
