#include<stdio.h>

    int sort(int,int);
    int merge(int,int,int);
    int a[]={80,60,30,70,10,50};
    int b[6];

    void main()
    {
        int i;
        
        printf("Sorting Started: \n");
        sort(0,5);
        for(i=0;i<6;i++)
        {
            printf("%d\n",a[i]);
        }
    }

    int sort(int l,int h)
    {
        int m;
        if(l<h)
        {
            m=(l+h)/2;
            sort(l,m);
            sort(m+1,h);
            
            printf("Merging Started: \n");
            merge(l,m,h);
        }
        return 0;
    }

    int merge(int low,int mid, int high)
    {
        int l1,l2;
        int i;
        l1=low;
        l2=(mid+1);

        for(i =low;l1<=mid && l2<=high;i++)
        {
            if(a[l1]<a[l2])
            {
                b[i]=a[l1];
                l1++;
            }
            else
            {
                b[i]=a[l2];
                l2++;
            }
        }
        
        while(l1<=mid)
        {
            b[i]=a[l1];
            l1++;
            i++;
        }
        while(l2<=high)
        {
            b[i]=a[l2];
            l2++;
            i++;
        }
        for(i=low;i<=high;i++)
        {
            a[i]=b[i];
        }
        return 0;
    }