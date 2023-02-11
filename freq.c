//WAP in C to count the freqency of all the elements(only positive numbers) in an array.
#include<stdio.h>
int main()
{
    int n,c;
    printf("Enter the no. of elements of an array=");
    scanf("%d",&n);
    int a[n],b[n],d[n],i,j;
    for(i=0;i<n;i++)
    {
        printf("Enter the element =");
        scanf("%d",&a[i]);
        d[i]=a[i];
    }
    for(j=0;j<n;j++)
    {
        c=d[j];
        int count=0;
        for(i=0;i<n;i++)
        {
        if(d[i]!=-1)
        if(c==d[i])
        {
            count++;
            b[j]=count;
            d[i]=-1;     /* agr hm c ki jgah a[j] krenge toh es condition se a[j] me bhi 0 a jayega isliye 
                            c variable ko use kiya hai a[j] ke bdle .*/
        }
        }
        if(c!=-1)
        printf("Freqency of %d = %d\n",c,b[j]);

    }
    return 0;
}