class Solution{
 public:
    
    void swap(int &x ,int&y){
        int temp=x;
        x=y;
        y=temp;
    }
    void sort012(int a[], int n)
    {
        int l=0;
        int m=0;
        int h=n-1;
        while(m<=h){
        if(a[m]==0){
            swap(a[m],a[l]);
            m++;
            l++;
        }else if(a[m]==1){
            m++;
        }else{
            swap(a[m],a[h]);
            h--;
        }
    }
    }
    };
