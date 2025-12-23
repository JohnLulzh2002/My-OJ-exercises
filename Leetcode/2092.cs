using System.Collections.Immutable;

public class Solution
{
	private class UnionFind
	{
		public int[] ancestor;
		private int FindAncestor(int x)
		{
			if (ancestor[x] == x)
				return x;
			else
				return ancestor[x] = FindAncestor(ancestor[x]);
		}
		public UnionFind(int n)
		{
			ancestor = new int[n];
			for (int i = 0; i < n; i++)
			{
				ancestor[i] = i;
			}
		}
		public void Connect(int x, int y)
		{
			if (FindAncestor(x) != FindAncestor(y))
				ancestor[FindAncestor(x)] = FindAncestor(y);
		}
		public bool IsConnected(int x, int y)
		{
			return FindAncestor(x) == FindAncestor(y);
		}
	}
	public IList<int> FindAllPeople(int n, int[][] meetings, int firstPerson)
	{
		var ms= meetings.GroupBy(x=>x[2]).ToImmutableSortedDictionary(
			x=>x.Key,
			x=>x.Select(y=>(y[0],y[1])).ToList()
			);
		UnionFind unionFind = new(n);
		unionFind.Connect(firstPerson,0);
		foreach (var m in ms)
		{
			List<int> changed = [];
			foreach ((int x, int y) in m.Value)
			{
				unionFind.Connect(x, y);
				changed.Add(x);
				changed.Add(y);
			}
			foreach (int i in changed)
			if (!unionFind.IsConnected(i,0))
			{
				unionFind.ancestor[i]=i;
			}
		}
		return Enumerable.Range(0,n).Where(x=> unionFind.IsConnected(x, 0)).ToList();
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(string.Join(' ', s.FindAllPeople(6, [[1, 2, 5], [2, 3, 8], [1, 5, 10]], 1)));
	}
}