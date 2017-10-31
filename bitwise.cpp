#include <iostream>

using namespace std;

int reverse_bit(int &x){
    int a = (x & 0x0F)<<4 | (x & 0xF0)>>4;
    int b = (x & 0x0F00)<<4 | (x & 0xF000)>>4;
    return a+b;
}

void any(){
int n;
    cout <<"Enter the number :"<< endl;
    cin>>n;
    //int p = reverse_bit(n);
    //cout<<p;
    cout<<(n<<3)<<endl; // multiply each shift with 2
     cout<<(n>>1)<<endl;//divide each shift with 2

}


int main()
{
    if(cout<<"Hello World"){}
    return 0;
}
