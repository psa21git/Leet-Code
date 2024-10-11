// Find the Key

#include <iostream>
using namespace std;

// mera logic
int generateKey(int num1, int num2, int num3) {
     int r1,r2,r3;
     int arr[4];
     int ans=0;
     int mini;
     for(int i=0;i<4;i++){
        r1=num1%10;
        num1=num1/10;
        r2=num2%10;
        num2=num2/10;
        r3=num3%10;
        num3=num3/10;
        mini = min(r1,min(r2,r3));
        // cout<<mini<<endl;
        arr[i] = mini;
     }
     for(int i=0;i<4;i++){
        if(i==0) ans += arr[i]*1;
        if(i==1) ans += arr[i]*10;
        if(i==2) ans += arr[i]*100;
        if(i==3) ans += arr[i]*1000;
     }
     return ans;
}

int main(){
    cout << generateKey(879,987,789);
    return 0;
}
