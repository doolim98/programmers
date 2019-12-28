#include <string>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> solution(vector<int> array, vector<vector<int>> commands) {
    vector<int> answer;
    vector<vector<int>>::iterator ci;
    for(ci=commands.begin();ci!=commands.end();ci++){
        int i=(*ci)[0]-1;
        int j=(*ci)[1]-1;
        int k=(*ci)[2]-1;
        vector<int> sub_array(array.begin()+i,array.begin()+j+1);
        sort(sub_array.begin(),sub_array.end());
        answer.push_back(sub_array[k]);
    }
    return answer;
}
