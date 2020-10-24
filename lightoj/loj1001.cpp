#include<bits/stdc++.h>
#include<cmath>
using namespace std;

int main(){
char str1[100],str2[100];
//cin>>str1>>str2;
cin>>str1;
char *ptr1,*ptr2;
ptr1=str1;
ptr2=str2;
int arr[1000]={0},arr2[1000]={0};
char ch;

    int j=0;

    while(*ptr1!='\0')
    {
        ch=*ptr1;
        arr[j]=ch-'0';
        //cout<<arr[j];
        j++;
        ptr1++;
    }
    //cout<<endl;
int arr3[100]={0},k=0;
//for(int i=j-1;i>=0;i--)
//{
//    arr3[j]=arr[k];
//    k++;
//}
int s;
int arr4[100]={0},n=0,i;
for(i=0;;i++)
{
    cin>>str1;
    ptr1=str1;
    ch=*ptr1;
    s=ch-'0';
    if(s==0) break;

    while(*ptr1!='\0')
    {
        ch=*ptr1;
        arr2[k]=ch-'0';
        //cout<<arr[k];
        k++;
        ptr1++;
    }
      //cout<<endl;

      if(j>=k){
            k=k-1;
      for(int l=j-1;l>=0;l--,k--)
      {
             if(k<0) {
                    k=0,arr2[k]=0;
             }
              arr[n]=arr[l]+arr2[k];
              if(arr[n]>9) {
                int r=arr[n]%10;
                arr[n]=r;
                arr[l-1]+=1;
              }
              cout<<arr[l]<<ends<<arr2[k]<<ends<<arr[n]<<endl;
              n++;

      }
      }
      else{
            j=j-1;
        for(int l=k-1;l>=0;l--,j--)
      {
              if(j<0){
                j=0;arr[j]=0;
              }
              arr[n]=arr2[l]+arr[j];
              n++;

      }
      }
      j=n-1;
      n=0;

}
cout<<endl;
for(int k=0;k<j;k++) cout<<arr[k];

}


