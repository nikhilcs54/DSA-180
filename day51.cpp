#include <iostream>
#include<algorithm>
#include<vector>
using namespace std;

void TOH(int n,int source,int helper,int destination){
    if (n==1)
    {
        cout<<n<<" moves from "<<source<<" to "<<destination<<endl;
        return;
    }

    TOH(n-1,source,destination,helper);
    cout<<n<<" moves from "<<source<<" to "<<destination<<endl;
    TOH(n-1,helper,source,destination);

    
}
int main(){


TOH(3,3,0,0);
}