public class Solution
{
	public int NumMagicSquaresInside(int[][] grid)
	{
		int ans = 0;
		IEnumerable<int> r3 = Enumerable.Range(0, 3);
		for (int i = 0; i < grid.Length - 2; i++)
			for (int j = 0; j < grid[0].Length - 2; j++)
			{
				var elms =
					from x in r3
					from y in r3
					select grid[i + x][j + y];
				if (elms.Distinct().Count() != 9 || elms.Max() > 9 || elms.Min() < 1)
					continue;
				if (r3.Sum(x => grid[i + 2 - x][j + x]) != 15 ||
					r3.Sum(x => grid[i + x][j + x]) != 15)
					continue;
				int c = 0;
				for (int k = 0; k < 3; k++)
				{
					if (r3.Sum(x => grid[i + x][j + k]) == 15 &&
						r3.Sum(x => grid[i + k][j + x]) == 15)
						c++;
					else
						break;
				}
				if (c == 3)
				{
					ans++;
				}
			}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.NumMagicSquaresInside([[4, 3, 8, 4], [9, 5, 1, 9], [2, 7, 6, 2]]));
		Console.WriteLine(s.NumMagicSquaresInside([[5, 5, 5], [5, 5, 5], [5, 5, 5]]));
	}
}