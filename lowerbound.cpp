/*int lowerBound(vector<int> a, int n, int x) {
	// Write your code here
	int low=0,high=n-1,ans=n;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]>=x)
		{
         ans=mid;
		 high=mid-1;
		}
		else
		low=mid+1;
	}
	return ans;
}*/

void lowerBoundRecursive(vector<int>& v, int number, int low, int high, int &lb)
{
    if (low > high) {
        return;
    }

    int mid = low + (high - low)/2;

    if (v[mid] >= number) {
        high = mid - 1;
        lb = mid;
        return lowerBoundRecursive(v, number, low, high, lb);
    } else {
        low = mid + 1;
        return lowerBoundRecursive(v, number, low, high, lb);
    }
}
int lowerBound(vector<int> a, int n, int x) 
{
	int low=0,high=n-1,lb=n-1;
	lowerBoundRecursive(a, x,low,high,lb);
}

