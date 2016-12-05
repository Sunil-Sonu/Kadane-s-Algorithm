#define max(a,b) a>b?a:b


/*
	Uncomment the sections to get the starting and ending 
*/
int kadaneAlgo(int *arr, int n)
{
	int max_ending =0, max_here = 0,k,j=0;
	for (int i = 0; i < n; i++){
		max_ending = max(arr[i], max_ending + arr[i]);
//		if (max_ending == arr[i])
//			k = i;
		max_here = max(max_here, max_ending);
//		if (max_here == max_ending)
//			j = i;
	}
//	printf("%d %d", k, j);
	return max_here;
}
