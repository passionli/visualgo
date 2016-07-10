#define LENGTH 10

void InsertSort()
{
	int iUnsortedArray[LENGTH] = {3, 1, 10, 29, 133, 8, 26, 10, 200, 33};	
	int i, j, iTemp;

	for (i = 1; i < LENGTH; ++i)
	{
		iTemp = iUnsortedArray[i];
		for (j = i; j > 0; --j)
		{			
			if (iUnsortedArray[j-1] > iTemp)
			{
				iUnsortedArray[j] = iUnsortedArray[j-1];
			}
			else
			{							
				break;
			}
		}
		iUnsortedArray[j] = iTemp;	
	}
}