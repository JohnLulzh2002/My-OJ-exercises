public class Solution
{
	private Dictionary<int, int>[] edge = null!;
	private void AddEdge(int u, int v, int w)
	{
		int q = int.MaxValue;
		if (edge[u].TryGetValue(v, out int value))
			q = value;
		edge[u][v] = Math.Min(q, w);
	}
	public int MinCost(int n, int[][] edges)
	{
		edge = new Dictionary<int, int>[n];
		for (int i = 0; i < n; i++)
		{
			edge[i] = [];
		}
		foreach (int[] e in edges)
		{
			int u = e[0], v = e[1], w = e[2];
			AddEdge(u, v, w);
			AddEdge(v, u, 2 * w);
		}
		HashSet<int> todo = [0];
		int[] dis = new int[n];
		Array.Fill(dis, int.MaxValue);
		dis[0] = 0;
		while (todo.Count > 0)
		{
			HashSet<int> newTodo = [];
			foreach (int u in todo)
			{
				foreach ((int v, int w) in edge[u])
				{
					int d = dis[u] + w;
					if (d < dis[v])
					{
						dis[v] = d;
						newTodo.Add(v);
					}
				}
			}
			todo = newTodo;
		}
		if (dis[n - 1] == int.MaxValue)
			return -1;
		return dis[n - 1];
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinCost(4, [[0, 1, 3], [3, 1, 1], [2, 3, 4], [0, 2, 2]]));
	}
}