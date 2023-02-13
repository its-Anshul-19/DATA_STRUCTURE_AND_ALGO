#include <iostream>
using namespace std;
int *multiply(int A[], int B[], int m, int n)
{   int *prod = new int[m+n];
    for (int i = 0; i<m+n; i++)
     prod[i] = 0;
    for (int i=0; i<m; i++)
    {    for (int j=0; j<n; j++)
          prod[i+j] += A[i]*B[j];
    }
    return prod;
}
void printPoly(int poly[], int n)
{
    for (int i=0; i<n; i++)
    {  cout << poly[i]<<" ";

    }
} 
int main()
{   int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        int A[n], B[m];
        for(int i =0;i<n;++i){
            cin>>A[i];
        }
        for(int i =0;i<m;++i){
            cin>>B[i];
        }
        int *prod = multiply(A, B, n, m);
        printPoly(prod, m+n);
        cout<<endl;
    }
    return 0;
}
