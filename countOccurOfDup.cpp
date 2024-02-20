int fo(vector<int>& a, int n, int k)
{
    int low=0,high=n-1,f=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            f=mid;
            high=mid-1;
        }
         else if(a[mid]<k)
        {
          
		  low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return f;
}

int lo(vector<int>& a, int n, int k)
{
    int low=0,high=n-1,l=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            l=mid;
            low=mid+1;
        }
        else if(a[mid]<k)
        {
          
		  low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return l;
}
pair<int, int> firstAndLastPosition(vector<int>& a, int n, int k)
{
    int f=fo(a,n,k);
    if(f==-1) return {-1,-1};
    int l=lo(a,n,k);
    return {f, l};
}
int count(vector<int>& arr, int n, int x) {
    pair<int, int> ans = firstAndLastPosition(arr, n, x);
    if (ans.first == -1) return 0;
    return (ans.second - ans.first + 1);
}
