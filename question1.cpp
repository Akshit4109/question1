#include<iostream>
using namespace std;

void findpair(int nums[],int target,int n)
{
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n ; j++)
        {
            if (nums[i]+nums[j]==target)
            {
                cout<<"("<<nums[i]<<" or "<<nums[j]<<")"<<endl;
            }
            
        }
        
    }
    
}

int main()
{
    int n,target;
    cout<<"enter the size of array"<<endl;
    cin>>n;
    int nums[n];
    for (int  i = 0; i < n; i++)
    {
        cout<<"enter the numbers of array "<<endl;
        cin>>nums[i];
    }
    cout<<"enter the target"<<endl;
    cin>>target;
    findpair(nums,target,n);
}