public class Solution
{
	readonly Dictionary<TreeNode, int> sum = [];
	int rootSum;
	public int MaxProduct(TreeNode root)
	{
		rootSum = GetSum(root);
		return (int)(GetProduct(root) % 1000000007);
	}
	private int GetSum(TreeNode? node)
	{
		if (node is null)
			return 0;
		int s = node.val;
		s += GetSum(node.left);
		s += GetSum(node.right);
		sum[node] = s;
		return s;
	}
	private long GetProduct(TreeNode? node)
	{
		if (node is null)
			return 0;
		long result = (rootSum - sum[node]) * (long)sum[node];
		long t = GetProduct(node.left);
		if (t > result) result = t;
		t = GetProduct(node.right);
		if (t > result) result = t;
		return result;
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
			val = 1,
			left = new()
			{
				val = 2,
				left = new()
				{
					val = 4
				},
				right = new()
				{
					val = 5
				}
			},
			right = new()
			{
				val = 3,
				left = new()
				{
					val = 6
				}
			}
		};
		Console.WriteLine(s.MaxProduct(a));
	}
}