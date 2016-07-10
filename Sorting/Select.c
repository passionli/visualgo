#define LENGTH 10

void SelectSort()
{
	int iUnsortedArray[LENGTH] = {3, 10, 29, 133, 8, 26, 10, 200, 1, 33};	
	int i, j, iMinElementIndex, iTemp;

	for (int i = 0; i < LENGTH-1; ++i)
	{
		iMinElementIndex = i;
		for (int j = i; j < LENGTH-1; ++j)
		{
			if (iUnsortedArray[j+1] < iUnsortedArray[iMinElementIndex])
			{
				iMinElementIndex = j+1;
			}
		}
		iTemp = iUnsortedArray[i];
		iUnsortedArray[i] = iUnsortedArray[iMinElementIndex];
		iUnsortedArray[iMinElementIndex] = iTemp;
	}
}