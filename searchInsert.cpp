int searchInsert(vector<int>& arr, int m)
{
	// Write your code here.
	int n=arr.size();
	int low=0,high=n-1,ans=n;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(arr[mid]>=m)
		{
			high=mid-1;
			ans=mid;
		}
		else
		{
			low=mid+1;
		}
	}
	return ans;
}
