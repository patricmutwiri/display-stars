#include <iostream>

using namespace std;

int main()
{
    // show stars like ..
    //×××××
    // ××××
    //   ××
    //    ×

    int i=10; int k;

    while(i<=10 && i>=0){
        for(k=0; k<=i; k++) {
            cout<<"*";
            if(k==i){
                cout<<"\n";
            }
        }
        i--;
    }

    return 0;
}
