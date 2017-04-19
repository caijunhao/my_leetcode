#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 31-03-2017
"""
class Solution(object):
    def length_of_longest_substring(self, s):
        max_len = 0
        start = 0
        dict = {}
        for i in range(len(s)):
            if s[i] in dict and dict[s[i]]>=start:
                start = dict[s[i]] + 1 
            max_len = max(max_len, i-start+1)
            dict[s[i]] = i
        return max_len
