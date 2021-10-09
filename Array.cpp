# <iostream>
using namespace std;
int main() 
{
    int a[5],n=5;
    cout<<"Enter five elements\n";
    for(int i=0;i<n;i++)
    cin>>a[i];
    cout<<"Elements you entered\n";
    for (int i=0;i<n;++i)
    cout<<a[i]<<"\n";
}
