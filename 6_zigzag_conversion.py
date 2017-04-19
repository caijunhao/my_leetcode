#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 2017-04-03 17:05:37
"""
#!/usr/bin/env python2.7
#-*- coding=utf-8 -*-
"""
> Author: caijunhao

> Created Time: 2017-04-03 17:05:37
"""
class Solution(object):
    def convert(self, s, numRows):
        '''
        :type s: str
        :type numRows: int
        :rtype: str
        '''
        if numRows == 1:
            return s
        res = ''
        str_len = len(s)
        for i in range(numRows):
            step1 = (numRows - i - 1) * 2
            step2 = i * 2
            pos = i
            if pos < str_len:
                res += s[pos]
            while(1):
                pos += step1
                if pos > str_len:
                    break
                res += s[pos]
                pos += step2
                if pos > str_len:
                    break
                res += s[pos]
        return res

