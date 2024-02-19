/*int upperBound(vector<int> &a, int x, int n){
	// Write your code here.	
	int low=0,high=n-1;
	
	int ans=n;
	while(low<=high)
	{
		int mid=low+(high-low)/2;
		if(a[mid]>x)
		{
        ans=mid;
		high=mid-1;
		}
		else{
			low=mid+1;
		}
	}
	return ans;
}*/
void ub(vector<int> &a, int x, int low,int high ,int &ans)
{
 if(low>high)
 return;
 int mid=low+(high-low)/2;
 if(a[mid]>x){
	 ans=mid;
	 high=mid-1;
     return ub(a, x, low,high,ans);
 }
 else
 {
	 low=mid+1;
	 return ub(a, x, low,high,ans);
 }
}
int upperBound(vector<int> &a, int x, int n) {
 int low = 0, high = n - 1, ans = n;
 ub(a, x, low, high, ans);
}
