///God is Almighty
#include<bits/stdc++.h>
using namespace std;
int main()
{
   /* Given two strings str1 and str2 and below operations that can performed on str1. Find minimum number of edits (operations) required to convert ‘str1’ into ‘str2’.
    */
    string s1,s2;
    int l1,l2,i,j;
    //cin>>s1>>s2;
    cout<<endl;
    cout<<"ENTER s1 STRING: ";
    cin>>s1;
    cout<<"ENTER s2 STRING: ";
    cin>>s2;
    l1=s1.size();
    l2=s2.size();
    int EditDis[l2+1][l1+1];
    for(i=1; i<=l2; i++) EditDis[i][0]=i;
    for(i=0; i<=l1; i++) EditDis[0][i]=i;

    for(i=1; i<=l2; i++)
    {
        for(j=1; j<=l1; j++)
        {
            if(s2[i-1]==s1[j-1]) EditDis[i][j] =EditDis[i-1][j-1];

            else
                EditDis[i][j]=min(EditDis[i-1][j-1],min(EditDis[i-1][j],EditDis[i][j-1]))+1;
        }
    }
    cout<<endl<<"EditDistance: "<<EditDis[l2][l1]<<endl;
    return 0;
}
