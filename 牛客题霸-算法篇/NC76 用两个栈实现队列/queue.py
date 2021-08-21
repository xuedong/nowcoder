# -*- coding:utf-8 -*-
class Solution:
    def __init__(self):
        self.stack1 = []
        self.stack2 = []

    def push(self, node):
        # write code here
        self.stack1.append(node)

    def pop(self):
        # return xx
        if not(self.stack2):
            while self.stack1:
                peak = self.stack1.pop(0)
                self.stack2.append(peak)
        return self.stack2.pop(0)

