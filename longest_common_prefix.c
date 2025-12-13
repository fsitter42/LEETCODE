#include <stdio.h>
#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize)
{
    int lcp = 0;
    int i = 0;
    int j = 0;
    char *ret;

    while (strsSize > 1 && i < strsSize - 1)
    {
        j = 0;
        while (strs[i][j] && strs[i+1][j] && strs[i][j] == strs[i+1][j])
            j++;
        if (i == 0)
            lcp = j;
        else if (i != 0 && j < lcp)
            lcp = j;
        i++;
    }
    if (lcp > 0)
    {
        i = 0;
        ret = malloc(sizeof(char) * (lcp + 1));
        while (i < lcp)
        {
            ret[i] = strs[0][i];
            i++;
        }
        ret[i] = '\0';
    }
    else if (strsSize == 1)
        return (strs[0]);
    else 
    {
        ret = malloc(1);
        ret[0] = '\0';
    }
    return (ret);
}

int main()
{
    char *stringis[] = {"a"};
    char *s = longestCommonPrefix(stringis, 1);
    printf("x%sx\n", s);
}
