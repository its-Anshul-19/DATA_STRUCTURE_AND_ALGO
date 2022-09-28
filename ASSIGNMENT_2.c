#QUESTION 1

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
	
    char s[100];
    scanf("%[^\n]%*c", &s);
  	
    printf("Hello, World!\n%s",s); 
    return 0;
}

-----------------------------------------------------------------------------------------------------------
#QUESTION 2
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    char ch;
    char s[24];
    char sen[100];
    scanf("%c\n%s\n%[^\n]s",&ch,s,sen);
    printf("%c\n%s\n%s",ch,s,sen);
    return 0;
}

-----------------------------------------------------------------------------------------------------------
  
#QUESTION 3

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int a,b;
    float c,d;
    scanf("%d %d %f %f",&a,&b,&c,&d);
    int sum = a+b;
    int diff = a-b;
    float fsum = c+d;
    float fdiff = c-d;
    printf("%d %d\n%0.1f %0.1f",sum,diff,fsum,fdiff);

    return 0;
}

-----------------------------------------------------------------------------------------------------------
  
#QUESTION 4
  
#include <stdio.h>
#include <math.h>
#include <limits.h>


int max_of_four(int a, int b, int c, int d)
{
    /*int e = max(a,b);
    int f = max(c ,d);
    int g = max(e,f);
    return g ;*/

     if(a>b && a>c && a>d) 
     {
         return a;
     }
    else if(b>c && b>d)
    {
         return b;
    }
    else if(c>d) 
    {
        return c;
    }
    else 
    {
        return d;
        }

}



int main() {
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    int ans = max_of_four(a, b, c, d);
    printf("%d", ans);

    return 0;
}

-----------------------------------------------------------------------------------------------------------
  
#QUESTION 5
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int a, b;
    scanf("%d\n%d", &a, &b);
      // Complete the code.
      char num_name[11][6]={"one","two","three","four","five","six","seven","eight","nine","even","odd"};
    for(int i=a; i<=b ;i++)
    {
        int num_i = i<=9 ? i-1 : 9 + i % 2;
        printf("%s \n",num_name[num_i]);
    }

    return 0;
}

-----------------------------------------------------------------------------------------------------------
  
#QUESTION 6
  
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();



int main()
{
    char* n_endptr;
    char* n_str = readline();
    int n = strtol(n_str, &n_endptr, 10);

    if (n_endptr == n_str || *n_endptr != '\0') { exit(EXIT_FAILURE); }



    if(n>=1 && n<=9)
    {   if(n==1)
        printf("one");
        if(n==2)
        printf("two");
        if(n==3)
        printf("three");
        if(n==4)
        printf("four");
        if(n==5)
        printf("five");
        if(n==6)
        printf("six");
        if(n==7)
        printf("seven");
        if(n==8)
        printf("eight");
        if(n==9)
        printf("nine");
    }
    else
        printf("Greater than 9");

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}

-----------------------------------------------------------------------------------------------------------------
  
#QUESTION 7
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int n;
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    int sum = 0 ;
    int a ; 
   while(n>0)
    {
     a = n%10;
     sum = sum+a;
     n = n/10;
    }

    printf("%d" , sum );
    return 0;
}

----------------------------------------------------------------------------------------------------------------
#QUESTION 8

#include <stdio.h>

void update(int *a,int *b) {
    // Complete this function    

    int sum  = *a + *b ;
    int diff ;
    if(*b > *a )
    {
        diff = *b - *a ;
    }
    else {
    diff = *a - *b ;
    }

    *a =sum ;
    *b = diff;

}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;

    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}

----------------------------------------------------------------------------------------------------------
#QUESTION 9
  
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

      int n,sum=0;
    scanf("%d",&n);
    int ar[n];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d",&ar[i]);
        sum = sum+ar[i];
    }  
    printf("%d",sum);
    return 0;

}

---------------------------------------DONE----------------------------------------------------------
  

