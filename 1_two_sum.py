#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 31-03-2017
"""
class Solution(object):
    def twoSum(self, nums, target):
        '''
        :type nums: List[int]
        :type target: int
        :return type: List[int]
        '''
        if len(nums) <= 1:
            return False
        buff_dict = {}
        for i in range(len(nums)):
            if target-nums[i] in buff_dict:
                return [buff_dict[nums[i]], i]
            else:
                buff_dict[nums[i]] = i

def main():
    ll = [1,2,3,4,5,6,7]
    s = Solution()
    print s.twoSum(ll, 7)

