#include <stdio.h>
void main()
{
    int tableName = 4;
    int numberOfLines = 3;
    printf("%d Table for %d times: \n", tableName, numberOfLines);
    for (int i = 0; i < numberOfLines; i++)
    {
        printf("%d x %d = %d \n", (i + 1), tableName, (tableName * (i + 1)));
    }
    int numberOfLines1 = 3;
}
