#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test;   //input number of test cases
    cin>>test;
    while(test--)
    {
        int number; //input number of elements
        cin>>number;
        int array[number]; //declare array of size
        for(int i=0;i<number;i++)
        {
            cin>>array[i];
        }
        int max=array[0];int count=1;// declaring maximum and count variable to store the maximum height building and counting it respectively
        for(int j=1;j<number;j++)
        {
            if(max<array[j])//if current building height is less than succeding building height
            {
                max=array[j]; // if current building height is less than next than store it in max variable
                count++;// counting number of buildings
            }
        }
        cout<<count<<endl;  //output;
    }
}
