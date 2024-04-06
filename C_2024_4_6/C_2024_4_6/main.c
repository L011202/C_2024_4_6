#define _CRT_SECURE_NO_DEPRECATE  
/*
	多个字符从两端移动,向中间靠拢
	time:2024年4月6日 18点22分
*/
#include <stdio.h>
int main()
{
	char arr[] = "************";
	char arr1[] = "study to top";
	int left = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int right = sz - 1;
	while (left <= right)
	{
		arr[left] = arr1[left];
		arr[right] = arr1[right];
		left++;						//前面的元素换下一个的时候要进行++
		right--;					//后面的元素换下一个元素的时候要进行--
		printf("%s\n", arr);
	}
	return 0;
}