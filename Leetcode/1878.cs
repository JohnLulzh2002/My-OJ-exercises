public class Solution
{
	public int[] GetBiggestThree(int[][] grid)
	{
		int m = grid.Length, n = grid[0].Length;
		List<int> sums = [.. grid.SelectMany(x => x)];
		for (int l = 1; l * 2 < Math.Min(m, n); l++)
			for (int i = 0; i + 2 * l < m; i++) for (int j = l; j + l < n; j++)
			{
				int s = 0, x = i, y = j;
				foreach ((int dx, int dy) in new[] { (1, -1), (1, 1), (-1, 1), (-1, -1) })
					for (int k = 0; k < l; k++)
					{
						s += grid[x][y];
						x+=dx; y+=dy;
					}
				sums.Add(s);
			}
		return [.. sums.Distinct().OrderDescending().Take(3)];
	}
	static void Main()
	{
		Solution s = new();
		var ans= s.GetBiggestThree([[3, 4, 5, 1, 3], [3, 3, 4, 2, 3], [20, 30, 200, 40, 10], [1, 5, 5, 4, 1], [4, 3, 2, 2, 5]]);
		Console.WriteLine($"[{string.Join(", ", ans)}]");
		// Console.WriteLine(s.GetBiggestThree([[3, 4, 5, 1, 3], [3, 3, 4, 2, 3], [20, 30, 200, 40, 10], [1, 5, 5, 4, 1], [4, 3, 2, 2, 5]]));
	}
}