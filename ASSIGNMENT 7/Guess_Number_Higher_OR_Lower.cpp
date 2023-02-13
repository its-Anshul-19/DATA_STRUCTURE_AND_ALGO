class Solution {
public:

    int guessNumber(int n) {
    
   int s  = 0; 
    int e = n ;
    int mid = s+(e-s)/2;

while(s <= e)
{


    if(guess(mid) == 0 )
    {
    return mid;
    }

     else if(guess(mid) == 1)
    {
        s = mid + 1;
    }
    else 
    {
        e = mid -1;
    }
    mid= s + ( e- s)/2;
}

return mid;


    
 }
};
Footer
