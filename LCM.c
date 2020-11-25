#include<stdio.h>
int GCD(int x,int y);
int main()
{ 
    int i,n,temp,temp2;
    
    scanf("%d",&n);
    int arr[n];
    for(i=0; i<n; i++)
     {
       scanf("%d",& arr[i]);
       
       
     }
       temp = GCD(arr[0], arr[1]);
         temp2=arr[0]*arr[1]/temp;
         
    for(i=2; i<n; i++)
      {
            temp=GCD(temp2, arr[i]);
            
            temp2=temp2*arr[i]/temp;
      }
      
     printf("%d\n",temp2);
     
     return 0;
}

int GCD(int x,int y)
{
       int r,a,b;
       a=x;
       b=y;
       if(x<0)
       x=-x;
       if(y<0)
       y=-y;
       
        {
            while(y!=0)
            { r=x%y;
            x=y;
            y=r;
            }
            
        }  
        
        return x;
}
