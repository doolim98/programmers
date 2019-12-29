#include <vector>
#include <iostream>

using namespace std;

vector<int> solution(vector<int> arr) 
{
    vector<int> answer;
    vector<int>::iterator i;
    for(i=arr.begin();i!=arr.end();i++){
        answer.push_back(*i);
        while(i[0]==i[1]){
            i++;
        }
    }
    return answer;
}
