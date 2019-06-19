/*
** Write a function to find the longest common prefix string amongst an array of strings.
** If there is no common prefix, return an empty string "".
**
** Runtime: 12 ms, faster than 25.05% of C online submissions for Longest Common Prefix.
** Memory Usage: 7.1 MB, less than 100.00% of C online submissions for Longest Common Prefix.
*/

int     check_string(char **strs, int *count, int *index, int strsSize)
{
    int     i;
    char    c;
    
    i = 1;
    if (strsSize == 0 || strs[0][*index] == '\0')
        return (0);
    c = strs[0][*index];
    while (i < strsSize)
    {
        if (strs[i][*index] != c)
            return (0);
        i++;
    }
    *count += 1;
    *index += 1;
    check_string(strs, count, index, strsSize);
    return (*count);
    
}

char* longestCommonPrefix(char** strs, int strsSize) {
    char    *new;
    int     count;
    int     index;
    
    count = 0;
    index = 0;
    count = check_string(strs, &count, &index, strsSize);
    new = (char *)malloc(sizeof(char) * (count + 1));
    index = 0;
    while (index < count)
    {
        new[index] = strs[0][index];
        index++;
    }
    new[index] = '\0';
    return (new);
}
