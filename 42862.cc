#include <string>
#include <vector>

using namespace std;

int solution(int n, vector<int> lost, vector<int> reserve) {
    int answer = n;
    vector<int> cn(n+2,1);
    vector<int> abb;
    vector<int>::iterator i;
    for(i=reserve.begin();i!=reserve.end();i++){
        cn[*i]++;
    }
    for(i=lost.begin();i!=lost.end();i++){
        cn[*i]--;
    }
    i=cn.begin();
    while(i!=cn.end()){
        if(*i!=0){
            abb.push_back(*i);
            while(i!=cn.end()&&*i!=0){
                i++;
            }
            abb.push_back(i[-1]);
        }
        else{
            i++;
            abb.push_back(0);
            while(i!=cn.end()){
                if(i[0]==2&&i[1]==0){
                    i+=2;
                    continue;
                }
                else{
                    break;
                }
            }
        }
    }
    for(i=abb.begin();i!=abb.end();i++){
        if(*i==0){
            if(i[-1]!=2&&i[1]!=2){
                answer--;
            }
        }
    }
    return answer;
}
