#define LENGTH 10

void BubbleSort()
{
	int iUnsortedArray[LENGTH] = {3,10,29,133,8,26,10,200,1,33};
	int bSwapped;
	int i, iIndexOfLastUnsortedElement;
	int iTemp;

	iIndexOfLastUnsortedElement = LENGTH-1;
	do
	{
		bSwapped = 0;
		for (int i = 0; i < iIndexOfLastUnsortedElement; i++)
		{
			if (iUnsortedArray[i] > iUnsortedArray[i+1])
			{
				bSwapped = 1;
				iTemp = iUnsortedArray[i+1];
				iUnsortedArray[i+1] = iUnsortedArray[i];
				iUnsortedArray[i] = iTemp;
			}
		}
		iIndexOfLastUnsortedElement--;
	}while (bSwapped);
}