#define LENGTH 10

void Merge(int src[], int start1, int start2, int step)
{
	int i, j, k = 0;
	int buffer[LENGTH] = {0};

	for (i = 0, j = 0; i < step && j<step;)
	{
		if (start2 + j >= LENGTH)
		{
			break;
		}
		if (src[start1 + i] < src[start2 + j])
		{
			buffer[k++] = src[start1 + i++];
		}
		else
		{
			buffer[k++] = src[start2 + j++];
		}
	}

	if (i == step)
	{
		for (;j < step; ++j)
		{
			buffer[k++] = src[start2 + j];
		}
	}
	else
	{
		for (;i < step; ++i)
		{
			buffer[k++] = src[start1 + i];
		}
	}

	for (i = 0; i < 2 * step; ++i)
	{
		if (start1+i >= LENGTH)
		{
			break;
		}
		src[start1+i] = buffer[i];
	}
}

void MergeSort()
{
	int src[LENGTH] = {10, 1, 9, 2, 3, 8, 4, 7, 5, 6};
	int i, j;

	for(i = 1; i < LENGTH; i *= 2)
	{
		for (j = 0; j < LENGTH; )
		{
			Merge(src, j, j + i, i);
			j = 2 * i + j;
		}
	}
}