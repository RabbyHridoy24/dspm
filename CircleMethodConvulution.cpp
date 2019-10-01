#include<bits\stdc++.h>
using namespace std;
int main(){
int x1_size,x2_size,y_size;
    cout<<"Enter the size of first sample  : ";
    cin>>x1_size;
    cout<<"\nEnter the size of second sample  : ";
    cin>>x2_size;

    if(x1_size>x2_size) y_size = x1_size;
    else y_size = x2_size;

    double x1[y_size],x2[y_size],y[y_size];

    for(int i = 0; i<y_size; i++){/// 0 assigning
        x1[i] = 0;
        x2[i] = 0;
    }

    cout<<"Enter the first sample  : "<<endl;
    for(int i = 0; i<x1_size; i++){
        cin>>x1[i];
    }
    cout<<"Enter the second sample  : "<<endl;
    for(int i = 0; i<x2_size; i++){
        cin>>x2[i];
    }
    for(int i = 0; i<y_size; i++){
        int temp = i,sum = 0;

        for(int j = 0; j<y_size; j++){
            sum += (x1[j]*x2[temp]);
            temp --;
            if(temp<0){
                temp = y_size - 1;
            }
        }
        y[i] = sum ;
    }
    int sum2 = 0;
    for(int i = 0; i<y_size; i++){
            cout<<y[i]<<" ";
       sum2+= y[i];
    }
    cout<<"\n"<<sum2<<endl;
return 0;
}
