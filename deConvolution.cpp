#include<bits/stdc++.h>
using namespace std;

double x[100],h[100],y[100];
int o_size,p_size,i_size;

void deConvolution()
{
    i_size = (o_size - p_size +1);
    for(int i=0; i<i_size; i++)
    {
        x[i]=y[i];
        for(int j=0; j<i; j++)
        {
            x[i]=(x[i] - (x[j]*h[i-j]));
        }
        x[i]=(x[i]/h[0]);
    }

    for(int i=0; i<i_size; i++)cout<<x[i]<<" ";
    printf("\n");
}
int main()
{

    printf("Enter Value for y : ");
    cin>>o_size;
    printf("Enter Values for y(n): ");
    for(int i=0; i<o_size; i++)cin>>y[i];

    printf("Enter Value for n : ");
    cin>>p_size;
    printf("Enter Values for h(n): ");
    for(int i=0; i<p_size; i++)cin>>h[i];

    deConvolution();
    return 0;
}
/// I64d push_back() top() pop() insert() upper_bound() lower_bound() memset() max() min()
