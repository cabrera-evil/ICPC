/*You are given two integers, a and b. You want to transform a into b by performing a sequence of operations.
You can only perform the following operations:
• Divide a by two (but only if a is even)
• Add one to a
What is the minimum number of operations you need to transform a into b?
Input
The single line of input contains two space-separated integers a and b (1 ≤ a, b ≤ 109
)
Output
Output a single integer, which is the minimum number of the given operations needed to transform a into
b.*/


#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 0, counter = 0;

    cin >> a;
    cin >> b;
    if(a != b){
        for(;;){
            if(a%2 == 0 && a > b)
                a /= 2;
            else
                a++;   
            counter++;
            if(a == b) 
                break;
        }
    }
    cout << counter << endl;
    return 0;
}