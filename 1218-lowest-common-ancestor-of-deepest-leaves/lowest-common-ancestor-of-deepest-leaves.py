# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
"""
:type root: Optional[TreeNode]
:rtype: Optional[TreeNode]
"""

class Info:
    def __init__(self,h,node):
        self.node=node
        self.h=h

class Solution(object):
    def LCA(self,root):
        if(root is None):
            return Info(0,None)
        left=self.LCA(root.left)
        right=self.LCA(root.right)
        if(left.h<right.h):
            return Info(right.h+1,right.node)
        elif(left.h>right.h):
            return Info(left.h+1,left.node)
        else:
            return Info(left.h+1,root)

    def lcaDeepestLeaves(self, root):
        sol = self.LCA(root)
        return sol.node
        