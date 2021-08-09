#include <iostream>

using namespace std;

int main(){
    int a;
    cin>>a;
    int cnt=0;
    while (a>0)
    {
        if (a-5>-1)
        {
            a-=5;
        }
        else if (a-4>-1)
        {
            a-=4;
        }
          else if (a-3>-1)
        {
            a-=4;
        }
          else if (a-2>-1)
        {
            a-=4;
        }
          else if (a-1>-1)
        {
            a-=4;
        }
        cnt++;
    }
    cout<<cnt<<endl;
}