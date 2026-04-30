public class Solution
{
	public int MaxPathScore(int[][] grid, int k)
	{
		int m = grid.Length, n = grid[0].Length;
		int[,] dp = new int[n, k + 1];
		for (int i = 0; i < m; i++) for (int j = 0; j < n; j++) for (int c = k; c >= 0; c--)
		{
			if (grid[i][j] == 0)
			{
				if (i == 0 && j != 0)
					dp[j, c] = int.MinValue;
				if (j > 0)
					dp[j, c] = Math.Max(dp[j, c], dp[j - 1, c]);
			}
			else if (c > 0)
			{
				if (i > 0)
					dp[j, c] = dp[j, c - 1] + grid[i][j];
				else
					dp[j, c]=int.MinValue;
				if (j > 0)
					dp[j, c] = Math.Max(dp[j, c], dp[j - 1, c - 1] + grid[i][j]);
				if (i == 0 && j == 0)
					dp[j, c] = grid[i][j];
			}
			else
				dp[j, c] = int.MinValue;
			// Console.WriteLine($"({i}, {j}, {c})	{dp[j, c]}");
		}
		int ans = int.MinValue;
		for (int i = 0; i <= k; i++)
			ans = Math.Max(ans, dp[n - 1, i]);
		return ans < 0 ? -1 : ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxPathScore([[0, 1], [2, 0]], 1));
		Console.WriteLine(s.MaxPathScore([[0, 1, 0, 1, 2], [1, 0, 2, 1, 0], [2, 1, 0, 1, 1]], 3));
		// Console.WriteLine(string.Join(' ', s.f()));
	}
}