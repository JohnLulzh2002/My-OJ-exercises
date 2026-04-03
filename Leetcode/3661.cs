public class Solution
{
	static int LowerBound(int[] arr, int v)
	{
		int l = 0, r = arr.Length, m = 0;
		while (l < r)
		{
			m = (l + r) / 2;
			if (arr[m] < v)
				l = m + 1;
			else
				r = m;
		}
		return l;
	}
	public int MaxWalls(int[] robots, int[] distance, int[] walls)
	{
		var rs = robots.Zip(distance).OrderBy(x => x.First).ToArray();
		walls.Sort();
		int[,] dp = new int[2, 2];
		for (int i = 0; i < rs.Length; i++)
		{
			int l = rs[i].First - rs[i].Second,
				r = rs[i].First + 1;
			if (i > 0)
				l = Math.Max(l, rs[i - 1].First + 1);
			int li = LowerBound(walls, l), ri = LowerBound(walls, r);
			dp[i % 2, 0] = ri - li + (i > 0 ? dp[(i - 1) % 2, 0] : 0);

			if (i > 0)
			{
				l = Math.Max(rs[i].First - rs[i].Second, rs[i - 1].First + rs[i - 1].Second + 1);
				li = LowerBound(walls, l);
				dp[i % 2, 0] = Math.Max(dp[i % 2, 0], ri - li + dp[(i - 1) % 2, 1]);
			}

			l = rs[i].First;
			r = rs[i].First + rs[i].Second + 1;
			if (i < robots.Length - 1)
				r = Math.Min(r, rs[i + 1].First);
			li = LowerBound(walls, l);
			ri = LowerBound(walls, r);
			dp[i % 2, 1] = ri - li;
			if (i > 0) dp[i % 2, 1] += Math.Max(dp[(i - 1) % 2, 0], dp[(i - 1) % 2, 1]);
		}
		return Math.Max(dp[(robots.Length - 1)%2, 0], dp[(robots.Length - 1)%2, 1]);
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxWalls([10, 2], [5, 1], [5, 2, 7]));
	}
}