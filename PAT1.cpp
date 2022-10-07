#include <iostream>
using namespace std;
int main() 
{
    int r,c;
    cin >>r>>c;
    int a[r][c],safe[r][c];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>a[i][j];
            safe[i][j]=1;
        }
    }
    int max = a[0][0];
    int min = a[0][0];
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] > max)
            {
    
                max = a[i][j];
            }       
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] < min)
            {
                min = a[i][j];
            }       
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] == max)
            {
                for(int p =0;p<c;p++)
                {
                    safe[i][p] = 0;
                }
                for(int c =0;c<r;c++)
                {
                    safe[c][j] = 0;
                }
            }
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] == min)
            {
                for(int p =0;p<c;p++)
                {
                    safe[i][p] = 0;
                }
                for(int c =0;c<r;c++)
               {
   
                    safe[c][j] = 0;
                }
            }
        }
    }
    int count = 0;
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            count = count + safe[i][j];
        }
    }
    cout<<count<<endl;
}