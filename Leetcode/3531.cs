public class Solution
{
	public int CountCoveredBuildings(int n, int[][] buildings)
	{
		Dictionary<int, (int min, int max)> rows = [], cols = [];
		foreach (var i in buildings)
		{
			int x = i[0], y = i[1];
			if (rows.TryGetValue(x, out var r))
			{
				(int miny, int maxy) = r;
				rows[x] = (Math.Min(miny, y), Math.Max(maxy, y));
			}
			else
			{
				rows[x] = (y, y);
			}
			if (cols.TryGetValue(y, out var c))
			{
				(int minx, int maxx) = c;
				cols[y] = (Math.Min(minx, x), Math.Max(maxx, x));
			}
			else
			{
				cols[y] = (x, x);
			}
		}
		int ans = 0;
		foreach (var i in buildings)
		{
			int x = i[0], y = i[1];
			(int minx, int maxx) = cols[y];
			(int miny, int maxy) = rows[x];
			if (minx < x && x < maxx && miny < y && y < maxy)
				ans++;
		}
		return ans;
	}
	public static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.CountCoveredBuildings(3, [[1, 2], [2, 2], [3, 2], [2, 1], [2, 3]]));
		Console.WriteLine(s.CountCoveredBuildings(3, [[1, 1], [1, 2], [2, 1], [2, 2]]));
		Console.WriteLine(s.CountCoveredBuildings(5, [[1, 3], [3, 2], [3, 3], [3, 5], [5, 3]]));
	}
}