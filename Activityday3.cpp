#include <iostream>
using namespace std;

int main()
{
    int n,number;
    cout<<"up to what number you want to see"<<endl;
    cin>>number;
    for(int n=0;n<=number;n++)
    {
        //change ==0 to ==1 if you want odd results
        if(n % 2==0)
            cout<<n<<endl;
    }
    return 0;
}
