#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v = {30,40,50,60,70,10,20};
    int n = v.size();
    int start = 0, end = n-1;
    int key = 10;
    while(start<=end){
        int mid = start + (end -start)/2;
        if(v[mid]==key){
            cout<<mid;
            return 0;
        }
        //Left side
        else if(v[mid]>v[0]){
        
            if(key>=v[start]&&key<v[mid]){
                end = mid-1;
            }
            else{
                start = mid+1;
            }
        }
        //Right side
        else{
            if(key>v[mid]&&key<=v[end]){
                start = mid+1;
            }
            else{
                end = mid-1;
            }
        }
    }
    cout<<-1;
}