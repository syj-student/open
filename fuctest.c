#include <stdio.h>
#include <stdlib.h>

void	merge_sort(int *lst, int start, int end)
{
	int	mid;

	while (start < end)
	{
		mid = (start + end) / 2;
		merge_sort(lst, start, mid);
		merge_sort(lst, mid + 1, end);
		merge_sort_sub(lst, start, mid, end);
	}
}

void	merge_sort_sub(int *lst, int start, int mid , int end)
{
	int	i;
	int	j;
	int	k;
	int	new_lst[500];

	i = start;
	j = mid + 1;
	k = start;
	while (i <= start && j <= end)
		if (lst[i] <= lst[j])
			new_lst[k++] = lst[i++];
		else
			new_lst[k++] = lst[j++];
	while (i <= start)
		new_lst[k++] = lst[i++];
	while (j <= end)
		new_lst[k++] = lst[j++];
	while (start <= end)
		lst[start] = new_lst[start++];
}

int main(void)
{

}
