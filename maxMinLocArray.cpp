#include<iostream>
using namespace std;

void big(int a[],int max,int maxloc,int num);
void smallest(int a[], int min, int minloc,int num);

void big(int a[],int max,int maxloc,int num)
{

    for(int i=2;i<=num;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
            maxloc=i;
        }
    }
    cout<<"\nMaximum is :"<<max<<endl;
    cout<<"Maximum location is :"<<maxloc<<endl;
}

void smallest(int a[], int min, int minloc,int num)
{
    int i;
    for(int i=2;i<=num;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
            minloc = i;
        }
    }

    cout<<"\nMinimum is: "<<min<<endl;
    cout<<"Minimum location is: "<<minloc<<endl;

}

int main()
{
    int num;
    cout<<"Enter the size of array: ";
    cin>>num;
    int arr[num];
    for(int i=1;i<=num;i++)
    {
        cout<<"Enter index "<<i<<" of element: ";
        cin>>arr[i];
    }

    int max=arr[1],maxloc=1;
    int min=arr[1],minloc=1;

    big(arr,max,maxloc,num);
    smallest(arr,min,minloc,num);


    return 0;

}
