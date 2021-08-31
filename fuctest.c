#include <stdio.h>
#include <stdlib.h>
void	merge_sort_sub(int *lst, int start, int mid , int end);
void	merge_sort(int *lst, int start, int end)
{
	int	mid;
	int	*ret;
	if (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(lst, start, mid);
		merge_sort(lst, mid + 1, end);
		merge_sort_sub(lst, start, mid, end);
	}
	ret = (int *)malloc(sizeof(int) * 2);
	ret[0] = 10;
	ret[1] = 20;
	return ret;
}

void	merge_sort_sub(int *lst, int start, int mid , int end)
{
	int	i;
	int	j;
	int	k;
	int	tmp;
	int	new_lst[500];

	i = start;
	j = mid + 1;
	k = start;
	while (i <= mid && j <= end)
	{
		if (lst[i] <= lst[j])
			new_lst[k++] = lst[i++];
		else
			new_lst[k++] = lst[j++];
	}
	while (i <= mid)
		new_lst[k++] = lst[i++];
	while (j <= end)
		new_lst[k++] = lst[j++];
	tmp = start;
	while (tmp <= end)
	{
		lst[tmp] = new_lst[tmp];
		tmp++;
	}
}

int main(void)
{
	//int	*tmp;
	int data[10] = {5, 2, 1, 3, 6, 9, 8, 7, 10, 4};
	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");
	merge_sort(data, 0, 9);
	for (int i = 0; i < 10; i++)
		printf("%d ", data[i]);
	printf("\n");
}
