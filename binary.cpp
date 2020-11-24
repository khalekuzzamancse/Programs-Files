#include<iostream>
using namespace std;
int main()
{
    int i,left=0,right=9,middle=0,array_size,j=1,element=2,position=-1;
    
   /* cout<<"Enter array size:";

    cin>>array_size;
    cout<<"Enter array elements,one by one:"<<endl;
    */
  int arr[10]={10,9,8,7,6,5,4,3,2,1};
  /* for(i=0;i<10;i++)
      {
          arr[i]=j;
          j++;
      }

*/
while(left<=right)
    {
        if(arr[left]==element)
          {
              position=left;
             cout<<"Element is found in position:"<<position<<endl;
             break;
          }
       else if(arr[right]==element)
          {
              position=right;
             cout<<"Element is found in position:"<<position<<endl;
             break;
          }

        left=left+1;
        right=right-1;
        middle=(left+right)/2;

       if(arr[middle]==element)
          {
              position=middle;
             cout<<"Element is found in position:"<<position<<endl;
             break;
          }
        else if(element>arr[middle])
        {
            left=middle;

        }
    else if(element<arr[middle])
        {
            right=right;
        }
    }

if(position=-1)
  {
      cout<<"Element is not in the list"<<endl;
  }


    return 0;
}