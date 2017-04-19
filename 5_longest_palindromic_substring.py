#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 01-04-2017
"""
class Solution(object):
    def longest_palindrome(self, s):
        '''
        :type s: str
        :rtype: str
        ''' 
        if s == '' or len(s)==1:
            return s
        start = 0
        max_len = 0
        j = k = i = 0
        for _ in len(s):
            j = k = i
            if(len(s)-i<max_len/2):
                break
            while(k<len(s)-1 and s[k]==s[k+1]):
                k += 1
            i = k + 1
            while(k<len(s)-1 and j>0 and s[k+1]==s[j-1]):
                k += 1
                j -= 1
            if(k-j+1>max_len):
                max_len = k - j + 1
                start = j
        return s[start:start+max_len]
