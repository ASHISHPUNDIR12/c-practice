// count non repeating element
#include <stdio.h>

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 5, 6, 6};

    int count = 0;
    for (int i = 0; i < 8; i++)
    {
        int isrepeating = 0;
        for (int j = 0; j < 8; j++)
        {
            if (i != j && arr[i] == arr[j])
            {
                isrepeating = 1;
                break;
            }
        }
        if (!isrepeating)
        {

            count++;
        }
    }
    printf("%d", count);

    return 0;
}