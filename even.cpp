#include<bits/stdc++.h>
using namespace std;

int p_size,m_size;
double point[100],X[100];
void evenComponent(){
    m_size=0;
    for(int i=p_size-1;i>=0;i--){
        X[m_size++]=point[i];
    }
    for(int i=1;i<p_size;i++){
        X[m_size++]=point[i];
    }
    for(int i=0;i<m_size;i++){
        X[i]=(X[i]/2);
    }
    for(int i=0;i<m_size;i++){
        cout<<X[i]<<" ";
    }
    printf("\n");
}
int main()
{

    cout<<"Enter a number(sapmle point)";
    cin>>p_size;
    for(int i=0;i<p_size;i++){
        cin>>point[i];
    }
    evenComponent();
    
    return 0;
}
/// I64d push_back() top() pop() insert() upper_bound() lower_bound() memset() max() min() 
