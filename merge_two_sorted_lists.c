/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_two_sorted_lists.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chford <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/23 18:09:27 by chford            #+#    #+#             */
/*   Updated: 2019/03/23 18:10:12 by chford           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* l1, struct ListNode* l2) {
    struct ListNode *start;
    struct ListNode *second;
    struct ListNode *answer;
    struct ListNode *hold;
    struct ListNode *hold2;
    
    if (!l1 || !l2)
    {
        if (l1)
            return (l1);
        if (l2)
            return (l2);
        return (0);
    }
    
    if (l1->val > l2->val)
    {
        start = l2;
        second = l1;
    }
    else
    {
        start = l1;
        second = l2;
    }
    answer = start;
    while (start)
    {
        while (second && start->next && second->val >= start->next->val)
            start = start->next;   
        if (!(second->next))
        {
            hold = start->next;
            start->next = second;
            second->next = hold;
            break ;   
        }
        hold = start->next;
        hold2 = second->next;
        start->next = second;
        second->next = hold;
        second = hold2;
    }
    return (answer);
}

/*Runtime: 8 ms, faster than 75.12% of C online submissions for Merge Two Sorted Lists.
**Memory Usage: 8.3 MB, less than 94.17% of C online submissions for Merge Two Sorted Lists.
*/
