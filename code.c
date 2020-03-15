#include <stdio.h>

int funcAnag(char str1[10000], char str2[10000])
{
    int i, j, count;
    char newMat[100];
    ///int c[2][100];
    newMat[0]=str1[0];
    int k=1;
    ///For reading the string 1 and getting distinct characters
    for (i=1; str1[i]!='\0'; i++)
    {
        count=0;
        for(j=0; j<k; j++)
        {
            if(str1[i]==newMat[j])
                count++;
        }
        if (count==0)
        {
            newMat[k]=str1[i];
            k++;
        }
    }
    ///For reading the distinct characters from string 2
    for (i=0; str2[i]!='\0'; i++)
    {
        count=0;
        for(j=0; j<k; j++)
        {
            if(str2[i]==newMat[j])
                count++;
        }
        if (count==0)
        {
            newMat[k]=str2[i];
            k++;
        }
    }
    /*for(j=0;j<k; j++ )
    {
         printf("%c", newMat[j]);
    }
    printf("\n%d\n", k);*/

    ///to count the number of times ac character appears in string#1
    int array1[50];
    for (i=0; i<k; i++)
    {
        count=0;
        for (j=0; str1[j]!='\0'; j++)
        {
            if (str1[j]==newMat[i])
            {
                count++;
            }
        }
        array1[i]=count;
    }
    /*printf("\n");
    for (i=0; i<k; i++)
    {
        printf("%d\t", array1[i]);
    }*/
    ///to count the number of times a character has appeared in string #2
    int array2[50];
    for (i=0; i<k; i++)
    {
        count=0;
        for (j=0; str2[j]!='\0'; j++)
        {
            if (str2[j]==newMat[i])
            {
                count++;
            }
        }
        array2[i]=count;
    }
    /*printf("\n");
    for (i=0; i<k; i++)
    {
        printf("%d\t", array2[i]);
    }*/
    ///to find the difference between various character appearance in the strings
    int result[50];
    for (i=0; i<k; i++)
    {
        if(array1[i]>=array2[i])
        {
            result[i]=array1[i]-array2[i];
        }
        else
        {
            result[i]=array2[i]-array1[i];
        }
    }

    ///the sum of differences of every character appearance gives the net number of extra characters. thus, these characters need to be deleted in order to get the anagrams.
    int sum=0;
    for (i=0; i<k; i++)
    {
        sum=sum+result[i];
    }

    return sum;

    /*for (i=0; i<k; i++)
    {
        count=0;
        for (j=0; str2[j]!='\0'; j++)
        {
            if (str2[j]==newMat[i])
            {
                count++;
            }
        }
        array[1][i]==count;
    }

    for(i = 0; i < 2; i++){
      for(j = 0; j < k; j++)
           printf("%d\t", array[i][j]);
  }*/
}

int main()
{
    long int num, a[100];
    int i;
    scanf("%d", &num);
    if (num==1)
    {
        char arr[2][10000];
        ///since successive test cases are to be chosen as strings for comparison
    for (i=0; i<2*num; i++)
    {
        scanf("%s", arr[i]);
    }
    ///result has to be obtained in the same order
    for (i=0; i<2*num; i=i+2)
    {
        a[i]=funcAnag(arr[i], arr[i+1]);
    }
    ///printing the result in the same order
    for (i=0; i<2*num; i=i+2)
    {
        printf("%d\n", a[i]);
    }
    }
    else
    {
        char arr[10][500];
        ///since successive test cases are to be chosen as strings for comparison
    for (i=0; i<2*num; i++)
    {
        scanf("%s", arr[i]);
    }
    ///result has to be obtained in the same order
    for (i=0; i<2*num; i=i+2)
    {
        a[i]=funcAnag(arr[i], arr[i+1]);
    }
    ///printing the result in the same order
    for (i=0; i<2*num; i=i+2)
    {
        printf("%d\n", a[i]);
    }
    }
    return 0;
}
