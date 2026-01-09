public class Solution
{
	public TreeNode SubtreeWithAllDeepest(TreeNode root)
	{
		HashSet<TreeNode> todo = [root], oldTodo=[];
		Dictionary<TreeNode, TreeNode> parent = [];
		while (todo.Count > 0)
		{
			oldTodo = todo;
			todo = [];
			foreach (TreeNode t in oldTodo)
			{
				if (t.left is not null)
				{
					todo.Add(t.left);
					parent[t.left] = t;
				}
				if (t.right is not null)
				{
					todo.Add(t.right);
					parent[t.right] = t;
				}
			}
		}
		while (oldTodo.Count>1)
		{
			foreach (TreeNode t in oldTodo)
				todo.Add(parent[t]);
			oldTodo=todo;
			todo=[];
		}
		return oldTodo.Single();
	}
	public class TreeNode
	{
		public int val;
		public TreeNode? left;
		public TreeNode? right;
		public TreeNode(int val = 0, TreeNode? left = null, TreeNode? right = null)
		{
			this.val = val;
			this.left = left;
			this.right = right;
		}
	}
	static void Main()
	{
		Solution s = new();
		TreeNode a = new()
		{
			val = 3,
			left = new TreeNode
			{
				val = 5,
				left = new TreeNode
				{
					val = 6
				},
				right = new TreeNode
				{
					val = 2,
					left = new TreeNode
					{
						val = 7
					},
					right = new TreeNode
					{
						val = 4
					}
				}
			},
			right = new TreeNode
			{
				val = 1,
				left = new TreeNode
				{
					val = 0
				},
				right = new TreeNode
				{
					val = 8
				}
			}
		};
		Console.WriteLine(s.SubtreeWithAllDeepest(a).val);
	}
}