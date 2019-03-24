/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   two_sum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 18:14:26 by chford            #+#    #+#             */
/*   Updated: 2019/03/23 18:58:13 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
	Note: The returned array must be malloced, assume caller calls free().
	Given an array of integers, return indices of the two numbers such that they add up to a specific target.
	You may assume that each input would have exactly one solution, and you may not use the same element twice.

	Example:

	Given nums = [2, 7, 11, 15], target = 9,

	Because nums[0] + nums[1] = 2 + 7 = 9,
	return [0, 1].
*/
/**
 * Note: The returned array must be malloced, assume caller calls free().
 */

int* twoSum(int* nums, int numsSize, int target) {
    int     *complement;
    int     *answer;
    int     i;
    int     j;
    
    answer = (int *)malloc(sizeof(int) * 2);
    complement = (int *)malloc(sizeof(int) * numsSize);
    i = 1;
    j = 0;
    complement[0] = target - nums[0];
    while (i < numsSize)
    {
        while (j < i)
        {
            if (complement[j] == nums[i])
            {
                answer[0] = j;
                answer[1] = i;
                return (answer);
            }
            j++;
        }
        complement[j] = target - nums[i];
        j = 0;
        i++;
    }
    return (0);
}

/*Runtime: 52 ms, faster than 84.46% of C online submissions for Two Sum.
**Memory Usage: 7.7 MB, less than 44.44% of C online submissions for Two Sum.
*/
