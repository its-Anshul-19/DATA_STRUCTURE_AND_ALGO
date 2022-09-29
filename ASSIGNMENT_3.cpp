#QUESTION 1


#include <algorithm>
#include <iostream>
#include <math.h>
#include <vector>

using namespace std;

int main() {
//  freopen("input.txt", "r", stdin);
  int a[3], b[3];
  for (int i = 0; i < 3; ++i) {
    cin >> a[i];
  }
  int c1 = 0, c2 = 0;
  for (int i = 0; i < 3; ++i) {
    cin >> b[i];
    if (a[i] > b[i]) c1++;
    else if (a[i] < b[i]) c2++;
  }
  cout << c1 << ' ' << c2 << endl;
  return 0;
}

---------------------------------------------------------------------------------------------------------------------
  
#QUESTION 2
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
  
using namespace std;


int main() {
    int n;
    cin>>n;
    unsigned long long int sum=0,in;
    for(int i=0;i<n;i++)
    {
        cin>>in;
        sum+=in;
    }
    cout<<sum;
    return 0;
}

-------------------------------------------------------------------------------------------------------------------------
  
#QUESTION 3
  
#include <iostream>
using namespace std;
int main() 
{
  int N, LeftDiagonalSum = 0, RightDiagonal = 0;
  cin >> N;
  int a[N][N];
  for (int i = 0; i < N; i++) 
  {
    for (int j = 0; j < N; j++) 
    {
      cin >> a[i][j];
      if (i == j) 
   {
        LeftDiagonalSum = LeftDiagonalSum + a[i][j];
      }
    }
  }
  
  for (int i = 0; i < N; i++) 
  {
    for (int j = N - 1 - i; j >= 0;) 
    {
      RightDiagonal = RightDiagonal + a[i][j];
      break;
    }
  }
  cout << abs(LeftDiagonalSum - RightDiagonal) << endl;
  return 0;
}

-----------------------------------------------------------------------------------------------------------------------
  
#QUESTION 4 
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
  
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            cout<< " ";
        }
        for (int j = n - i -1; j < n; ++j) {
            cout<< "#";
        }
        cout<<endl;;
    }
    return 0;
}

-----------------------------------------------------------------------------------------------------------------------
  
#QUESTION 5

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;
int main() 
{
    int n,temp=0,count=0,i;
    cin>>n;
    vector<int> array(n);
    for(i=0; i<n;i++)
    {
     cin>>array[i];
}
    sort(array.begin(),array.end());
temp=array[n-1];
/*for(int i=0; i<n;i++)
        cout<<c[i];
*/
    for(i=0; i<n; i++)
{
        if(temp==array[i])
            count++;
    }
cout<<count;
return 0;
}

----------------------------------------------------------------------------------------------------------------------------
  
#QUESTION 6
  
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
  
using namespace std;


int main() {
    int p=0,n=0,z=0,a,i,j;
    cin>>j;
    for(i=0;i<j;i++){
        cin>>a;
        
        if(a>0)
            p++;
        else if(a<0)
            n++;
        else
            z++;
    }
    
    printf("%.3f\n",(float)p/j);
    printf("%.3f\n",(float)n/j);
    printf("%.3f",(float)z/j);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

