char* longestCommonPrefix(char** strs, int strsSize)
{
    int lcp = 0;
    int i = 0;
    int j = 0;

    while (i < strsSize - 2)
    {
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
        char *ret = malloc(sizeof(char) * (lcp + 1));
        while (i < lcp)
        {
            ret[i] = strs[0][i];
            i++;
        }
        ret[i] = '\0';
        return (ret);
    }
    else 
        return (NULL);

}