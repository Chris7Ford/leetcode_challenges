/*
Determine whether an integer is a palindrome. An integer is a palindrome when it reads the same backward as forward.

Runtime: 44 ms, faster than 82.47% of C online submissions for Palindrome Number.
Memory Usage: 6.9 MB, less than 100.00% of C online submissions for Palindrome Number.
*/

int get_size(int num)
{
    int     size;
    size = 1;
    while (num > 9)
    {
        num /= 10;
        size *= 10;
    }
    return (size);
}

bool isPalindrome(int x) {
    int     sizel;
    int     sizer;
    int     r;
    
    if (x < 0)
        return (false);
    sizel = get_size(x);
    sizer = 1;
    while (sizel >= sizer)
    {
        if (x / sizel % 10 != x / sizer % 10)
            return (false);
        sizel /= 10;
        sizer *= 10;
    }
    return (true);
}
