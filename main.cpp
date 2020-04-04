#include <iostream>

using namespace std;
int check(string A,string B)
{
    bool test=false;
    int M=A.length();
    int N=B.length();
    for(int i=0;i<=M-N;i++)
    {
        int j;
        for(j=0;j<N;j++)
        {
            if(A[i+j]!=B[j])
            {
                break;
            }
        }
        if(j==N)
        {
            test=true;
            break;
        }
    }
    if(test)
    {
        return 1;
    }
    else{
        return 0;
    }
}
int main()
{
    int value;
    string A,B;
    cin>>A>>B;
    value=check(A,B);
    if(value==1)
    {
        cout<<"1"<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}
