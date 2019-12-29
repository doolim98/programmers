#include <string>
#include <vector>

using namespace std;

int solution(int n) {
    n++;
    int answer = 0;
    vector<bool> numbers;
    for(int i=0;i<n;i++){
        numbers.push_back(true);
    }
    numbers[0]=false;
    numbers[1]=false;
    for(int i=0;i<n;i++){
        if(numbers[i]==false){
            continue;
        }
        else{
            for(int j=2;j*i<n;j++){
                numbers[j*i]=false;
            }
        }
    }
    for(int i=0;i<n;i++){
        if(numbers[i]==true){
            answer++;
        }
    }
    return answer;
}
