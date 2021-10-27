#include <iostream>
#include <iomanip>
using namespace std;

int calcResult(int arr[], int len)
{
    int result = 0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]%2==0 || arr[i] == 0)
        {
            result+=1;
        }
        else
        {
            if(arr[i] == 5)
            {
                result+=5;
            }
            else
            {
                result+=3;
            }
        }
    }
    return result;
}
int main()
{
    int inpLength = 0,i=0;
    cout<<"Enter array length: ";
    cin>>inpLength;
    int input[inpLength] = {1,3,5,7};
    for( i=0;i<inpLength;i++)
    {
        cout<<"Enter input "<<i<<" : ";
        cin>>input[i];
    }
    cout<<"The input is : [";
    for( i=0;i<inpLength;i++)
    {
        cout<<input[i]<<",";
    }
    cout<<"]"<<endl;
    cout<<"The output is : "<<calcResult(input,inpLength);
    return 0;
}
