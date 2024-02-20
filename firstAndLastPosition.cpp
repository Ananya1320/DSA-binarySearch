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
        else if(a[mid]>k)
        {
          high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return f;
}

int lo(vector<int>& a, int n, int k)
{
    int low=0,high=n-1,f=-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(a[mid]==k)
        {
            f=mid;
            low=mid+1;
        }
        else if(a[mid]>k)
        {
          high=mid-1;
        }
        else{
            low=mid+1;
        }
    }
    return f;
}
pair<int, int> firstAndLastPosition(vector<int>& a, int n, int k)
{
    int f=fo(a,n,k);
    if(f==-1) return {-1,-1};
    int l=lo(a,n,k);
    return {f, l};
}
/*int lb(vector<int>& a, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (a[mid] >= k) {
          high = mid - 1;
          ans = mid;
        } else
          low = mid + 1;
    }
    return ans;
}
int ub(vector<int>& a, int n, int k)
{
    int low=0,high=n-1;
    int ans=n;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if (a[mid] > k) {
          high = mid - 1;
          ans = mid;
        } else
          low = mid + 1;
    }
    return ans;
}
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    int a=lb(arr,n,k);
    if(a==n||arr[a]!=k)
    
    return {-1,-1};
    int u=ub(arr,n,k);
    return {a, u - 1};
}
*/
/*
pair<int, int> firstAndLastPosition(vector<int>& arr, int n, int k)
{
    // Write your code here
    int f=-1,l=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
        {
            if(f==-1)
            f=i;
            l=i;
        }
    }
    return {f,l};
}
*/
