#QUESTION 1

#include<iostream>
using namespace std;

int main(){
    
    cout << "Hello, World!" <<endl;
    
    return 0;

    
}

------------------------------------------------------------------------------------------------------
#QUESTION 2

#include<iostream>
using namespace std;


int main() {
    int a,b,c;
    cin >> a >> b >> c ;
    
    int sum = a+ b+ c ;
    
    cout <<sum << endl;  
    return 0;
}

-------------------------------------------------------------------------------------------------------
#QUESTION 3

#include <iostream>
#include <cstdio>
using namespace std;

int main() {
    // Complete the code.
    int x;
    long y;
    char z;
    float w;
    double t;
    
    scanf("%d %ld %c %f %lf", &x , &y , &z , &w , &t);
    printf("%d\n%ld\n%c\n%f\n%lf", x , y , z , w , t);
    
    
    
    return 0;
}

-------------------------------------------------------------------------------------------------------
#QUESTION 4

#include <iostream>
using namespace std;
int main(){
    
    string arr[9]={"one","two","three","four","five","six","seven","eight","nine"};
    
    int x,y;
    cin >> x >> y;
    
    for(int i=x;i<=y;i++){
        if(i>=1 && i<=9){
            cout <<arr[i-1]<<endl;
        } else{
            
            
            if(i%2==0){
                cout<<"even"<<endl;
            }else{
                cout<<"odd"<<endl;
            }
        }
        
        
        
    }
    return 0;
    
}

------------------------------------------------------------------------------------------------------------

#QUESTION 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int array[n];

    for(int i = 0; i < n; i++)
   {
        cin >> array[i];
    }

    for(int i = n - 1; i >= 0; i--)
   {
        cin >> array[i];
        cout << array[i] << " ";
    }
    return 0;
}

---------------------------------------------------------------------------------------------------------------

#QUESTION 6

#include <iostream>
#include <cstdio>
using namespace std;

int max_of_four(int a, int b, int c, int d)
{

 if(a>b&&a>c&&a>d)
{
        cout<<a;       
}
else if(b>a&&b>c&&b>d)
{
        cout<<b;
}
else if(c>b&&c>a&&c>d)
{
        cout<<c;
}
else
{
        cout<<d;
}
return 0;
}

int main()
{
    int a, b, c, d,max;
    cin>>a>>b>>c>>d;
    max=max_of_four(a,b,c,d);
}

--------------------------------------------------------------------------------------------------------------
#QUESTION 7

#include <iostream>
#include <string>
using namespace std;
int main()
{

  string a,b;

    cin>>a;
    cin>>b;

    int len1 = a.size();
    int len2 = b.size();

    cout<<len1<<" "<<len2<<endl;

    cout<<a<<b<<endl;

    char c;
    c=a[0];
    a[0]=b[0];
    b[0]=c;

    cout<<a<<" "<<b;

    return 0;
}

--------------------------------------------------------------------------------------------------------------

#QUESTION 8

#include <iostream>
using namespace std;

void update(int *a,int *b)
{
    int temp = *a;
    *a = *a + *b;
    *b = temp - *b;

    if(*b < 0)
 {
        *b = -(*b);
    }
}

int main() 
{
    int a, b;
    int *pa = &a, *pb = &b;

    cin>>a>>b;
    update(pa, pb);
    cout<<a<<"\n"<<b;

    return 0;
}
