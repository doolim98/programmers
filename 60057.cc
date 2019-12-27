#include <string>
#include <vector>
#include <iostream>

using namespace std;

int solution(string s) {
    int answer = 0;
    int len=s.length();
    answer=len;
    for(int split_len=1;split_len<len;split_len++){
        int count=1;
        int result_len=0;
        string split_str="";
        for(int pos=0;pos<len;pos+=split_len){
            string current_str=s.substr(pos,split_len);
            if(split_str!=current_str ){
                if(count!=1){
                    result_len+=to_string(count).length();
                }
                result_len+=split_str.length();
                count=1;
                split_str=current_str;
            }
            else{
                count++;
            }
            if(pos+split_len>=len){
                if(count!=1){
                    result_len+=to_string(count).length();
                }
                result_len+=split_str.length();
            }
        }
        if(result_len < answer){
            answer=result_len;
        }
    }
    return answer;
}


int main(){
	cout << solution("aabbaccc") << endl;
	return 0;
}
