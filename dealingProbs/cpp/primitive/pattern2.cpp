#include <iostream>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int a;
    cin >> a;

    for(int j=1;j<=a;j++){
        if (j%4==3){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    for(int j=1;j<=a;j++){
        if(j%2==0){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;
    for(int j=1;j<=a;j++){
        if (j%4==1){
            cout<<"* ";
        }
        else{
            cout<<"  ";
        }
    }
    cout<<endl;

    return 0;
}