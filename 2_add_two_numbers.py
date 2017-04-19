#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 31-03-2017
"""
class ListNode(object):
    def __init__(self, x):
        self.val = x
        self.next = None

class Solution(object):
    def add_two_numbers(self, l1, l2):
        '''
        :type l1: ListNode
        :type l2: ListNode
        :rtype: ListNode
        '''
        carry = 0
        res = cur = ListNode(0)
        while(l1 or l2 or extra):
            if l1:
                carry += l1.val
                l1 = l1.next
            if l2:
                carry += l2.val
                l2 = l2.next
            cur.next = ListNode(carry%10)
            carry //= 10
        return res.next

