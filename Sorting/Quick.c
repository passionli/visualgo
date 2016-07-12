#define LENGTH 10

void Quick(int src[], int start, int end)
{
	int i, j, iTemp;

	if (start >= LENGTH || start >= end)
	{
		return;
	}

	iTemp = src[start];
	i = start;
	j = end;
	while(i < j)
	{
		while (i < j && src[j] >= iTemp)
		{
			j--;
		}
		src[i] = src[j];
		while(i < j && src[i] <= iTemp)
		{
			i++;
		}
		src[j] = src[i];
	}
	src[i] = iTemp;
	Quick(src, start, i-1);
	Quick(src, i+1, end);
}

void QuickSort()
{
	int src[LENGTH] = {10, 1, 9, 2, 3, 8, 4, 7, 5, 6};		

	Quick(src, 0, 9);
}