public class Solution
{
	public int MaxLevelSum(TreeNode root)
	{
		int minSum = root.val, x = 1;
		HashSet<TreeNode> todo = [root];
		for (int c = 1; todo.Count > 0; c++)
		{
			HashSet<TreeNode> newTodo = [];
			int s = 0;
			foreach (TreeNode i in todo)
			{
				s += i.val;
				if (i.left is not null)
					newTodo.Add(i.left);
				if (i.right is not null)
					newTodo.Add(i.right);
			}
			// Console.WriteLine($"#{c}: {s}	{x}: {minSum}");
			// Console.WriteLine(string.Join(' ',todo.Select(x=>x.val)));
			if (s > minSum)
			{
				minSum = s;
				x = c;
			}
			todo = newTodo;
		}
		return x;
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
		TreeNode a = new TreeNode
		{
			val = 1,
			left = new TreeNode
			{
				val = 7,
				left = new TreeNode
				{
					val = 7
				},
				right = new TreeNode
				{
					val = -8
				}
			},
			right = new TreeNode
			{
				val = 0
			}
		};
		Console.WriteLine(s.MaxLevelSum(a));
	}
}