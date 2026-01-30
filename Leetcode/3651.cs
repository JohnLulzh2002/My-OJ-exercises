public class Solution
{
	public int MinCost(int[][] grid, int k)
	{
		int m = grid.Length, n = grid[0].Length;
		List<(int x, int y)> points = new(m * n);
		for (int i = 0; i < m; i++) for (int j = 0; j < n; j++)
			points.Add((i, j));
		points.Sort((b, a) => grid[a.x][a.y].CompareTo(grid[b.x][b.y]));
		int[,] dp = new int[m, n];
		for (int step = 0; step <= k; step++)
		{
			if (step > 0)
			{
				Dictionary<int, int> minPreCost = [];
				int minPreCostNow = int.MaxValue;
				for (int i = 0; i < m * n; i++)
				{
					(int x, int y) = points[i];
					int gxy = grid[x][y];
					minPreCostNow = Math.Min(minPreCostNow, dp[x, y]);
					if (minPreCost.TryGetValue(gxy, out int o))
						minPreCost[gxy] = Math.Min(minPreCostNow, o);
					else
						minPreCost[gxy] = minPreCostNow;
				}
				for (int i = 0; i < m * n; i++)
				{
					(int x, int y) = points[i];
					dp[x, y] = minPreCost[grid[x][y]];
				}
			}
			for (int i = 0; i < m; i++) for (int j = 0; j < n; j++)
			{
				if (i == 0 && j == 0)
				{
					dp[0, 0] = 0;
					continue;
				}
				if (step == 0)
					dp[i, j] = int.MaxValue;
				if (i > 0)
					dp[i, j] = Math.Min(dp[i, j], dp[i - 1, j] + grid[i][j]);
				if (j > 0)
					dp[i, j] = Math.Min(dp[i, j], dp[i, j - 1] + grid[i][j]);
			}
		}

		return dp[m - 1, n - 1];
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinCost([[1, 3, 3], [2, 5, 4], [4, 3, 5]], 2));
		Console.WriteLine(s.MinCost([[3, 5], [5, 7]], 0));
	}
}