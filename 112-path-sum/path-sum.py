# Definition for a binary tree node.
# class TreeNode(object):
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
"""
:type root: Optional[TreeNode]
:type targetSum: int
:rtype: bool
""" 
class Solution(object):
    def inorder(self,root,targetSum,sm):
        if(root is None):
            return False
        if(root.left is None and root.right is None):
            if(sm+root.val==targetSum):
                return True
            return False
        left = self.inorder(root.left, targetSum, sm+root.val)
        right = self.inorder(root.right, targetSum, sm+root.val)
        return left or right

        # sm+=root.val
        # return self.inorder(root.left,targetSum,sm) or self.inorder(root.right,targetSum,sm)

    def hasPathSum(self, root, targetSum):
        if root is None:
            return False
        # if root.left is None:
        #     return self.inorder(root.right,targetSum,root.val)
        # if root.right is None:
        #     return self.inorder(root.left,targetSum,root.val)
        # if((root.left is None) or (root.right is None)):
        #     if(root.val==targetSum) return False
        return self.inorder(root,targetSum,0)
        