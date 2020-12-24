#
# 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
# 计算两个数之和
# @param s string字符串 表示第一个整数
# @param t string字符串 表示第二个整数
# @return string字符串
#
class Solution:
    def solve(self , s , t):
        # write code here
        if len(s) > len(t):
            s, t = t, s

        ans = ""

        n1, n2 = len(s), len(t)
        s, t = s[::-1], t[::-1]

        carry = 0
        for i in range(n1):
            sum = int(s[i]) + int(t[i]) + carry
            ans += str(sum%10)
            carry = sum//10
        for i in range(n1, n2):
            sum = int(t[i]) + carry
            ans += str(sum%10)
            carry = sum//10
        if carry:
            ans += str(carry)

        ans = ans[::-1]
        return ans

