//iterative
/*int search(vector<int> &a, int target) {
    // Write your code here.
    int n=a.size();
    int low=0,high=n-1;
    while(low<=high)
    {
        int mid=low+(high-low)/2;
        if(target==a[mid])
        return mid;
        else if(target>a[mid])
        low=mid+1;
        else
        high=mid-1;
    }
    return -1;
}*/
//recursive
int bs(vector<int> &a,int low,int high,int target)
{
    if(low>high)
    return -1;
    int mid=low+(high-low)/2;
    if(a[mid]==target)
    return mid;
    else if(target>a[mid])
    return bs(a,mid+1,high,target);
    return bs(a,low,mid-1,target);
}
int search(vector<int> &a, int target)
 {   int low=0;
     int high=a.size()-1;
     bs(a, low, high, target); }
