#include <iostream>
using namespace std;
#include <cmath>
int main() {
    
    
    long long n;
     cin>>n;
    long long f = n / pow(10, floor(log10(n)));
     if(f%2==0)
     cout<<"EVEN";
     else cout<<"ODD";
    return 0;
}
