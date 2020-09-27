#include <iostream> 
using namespace std; 
  
int max(int x, int y)  
{  
    if (x > y)  
    return x;  
    else
    return y;  
}  
  
int main() { 
    int a, b;  
    cin>>a>>b;
  
    // Calling above function to find max of 'a' and 'b'  
    int m = max(a, b);  
  
    cout << "m is " << m;  
    return 0;  
} 
