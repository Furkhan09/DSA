int searchRoot(int num) {
	 int s = 0;
	int e = num;
	long long int mid = s + (e-s)/2;
	long long int ans = -1;
	if(num == 0 || num == 1)
	{
		return num;
	}
	while (s <= e)
	{
		long long int sqr = mid * mid;
		
		if(sqr == num)
		{
			return mid;
		}
		if(sqr >= num)
		{
			e = mid - 1;
		}
		else
		{
			ans = mid;
			s = mid + 1;
		}
		mid = s + (e-s)/2;
	}
	return ans;

   }
