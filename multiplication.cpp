#include<bits/stdc++.h>
using namespace std;

int a_size,b_size,m_size;
double a_point[100],b_point[100],X[100];


void init(){
    for(int i=0;i<100;i++){
        X[i]=a_point[i]=b_point[i]=0;
    }
}

void multiplication(){
    m_size=min(a_size,b_size);
    for(int i=0;i<m_size;i++){
        X[i]=(a_point[i]*b_point[i]);
    }

    for(int i=0;i<m_size;i++){
        cout<<X[i]<<" ";
    }
    printf("\n");
}
int main()
{
    init();
    cout<<"Enter a number(sapmle point) For First Signal : ";
    cin>>a_size;
    cout<<"Enter all points : ";
    for(int i=0;i<a_size;i++){
        cin>>a_point[i];
    }
    cout<<"Enter a number(sapmle point) For Second Signal : ";
    cin>>b_size;
    cout<<"Enter all points : ";
    for(int i=0;i<b_size;i++){
        cin>>b_point[i];
    }
    multiplication();
    
    return 0;
}
/// I64d push_back() top() pop() insert() upper_bound() lower_bound() memset() max() min() 
