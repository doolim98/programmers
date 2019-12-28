#include <string>
#include <vector>

using namespace std;

vector<int> solution(vector<int> answers) {
    vector<vector<int>> pattern={{1,2,3,4,5},
                                 {2,1,2,3,2,4,2,5},
                                 {3,3,1,1,2,2,4,4,5,5}};
    vector<int> answer;
    int max=0;
    int score[3]={0,};
    vector<int>::iterator ait;
    int n=0;
    for(ait=answers.begin();ait!=answers.end();ait++,n++){
        for(int i=0;i<3;i++){
            if(*ait==pattern[i][n%pattern[i].size()]){
                score[i]++;
            }
        }
    }
    for(int i=0;i<3;i++){
        if(max<score[i]){
            max=score[i];
        }
    }
    for(int i=0;i<3;i++){
        if(max==score[i]){
            answer.push_back(i+1);
        }
    }
    return answer;
}
