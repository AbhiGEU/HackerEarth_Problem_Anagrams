#include <stdio.h>
#include <string.h>
int main()
{
    int t,p;
    scanf("%d",&t);
  for(p=0;p<t;p++)
  {
    char a[10000],b[10000];
    int i=0,l=0,k=0,j=0,s=0,c=0;
    scanf("%s",&a);
    scanf("%s",&b);
    l=strlen(a);
    k=strlen(b);
    for(i=0;i<l;i++)
    {
        for(j=0;j<k;j++)
        {
            if(a[i]==b[j])
            {
                c++;
                b[j]='.';
                break;
            }
        }
    }
    s=(l-c)+(k-c);
    printf("%d\n",s);
  }
    return 0;
}
