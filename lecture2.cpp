//TRIPLET SUM IN ARRAY

class Solution{
    public:
    //Function to find if there exists a triplet in the 
    //array A[] which sums up to X.
    bool find3Numbers(int A[], int n, int X)
    {     
        sort(A,A+n);
        for(int i=0;i<n;i++){
            int f=X-A[i];
            int left=i+1;
            int right=n-1;
            
            while(left<right){
            if(A[left]+ A[right]==f){
                return 1;
            }else if(A[left]+A[right] >f){
                right--;
            }else if(A[left] + A[right] <f){
                left++;
            }
        }
        }
        return 0;
        
        
        
    }

};
