public class Solution
{
	public int MaxSideLength(int[][] mat, int threshold)
	{
		int m = mat.Length, n = mat[0].Length;
		int[,] pre = new int[m, n];
		for (int i = 0; i < m; i++)
		{
			int s=0;
			for (int j = 0; j < n; j++)
			{
				s+=mat[i][j];
				pre[i,j]=s;
			}
		}
		for (int l = Math.Min(m, n); l > 0; l--)
		{
			for (int x = 0; x <= m - l; x++)
			{
				int s = 0;
				for (int i = 0; i < l; i++)
					s += pre[x + i,l-1];
				if (s <= threshold)
					return l;
				for (int y = 0; y < n - l; y++)
				{
					for (int i = 0; i < l; i++)
					{
						s -= mat[x + i][y];
						s += mat[x + i][y + l];
					}
					if (s <= threshold)
						return l;
				}
			}
		}
		return 0;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxSideLength([[1, 1, 3, 2, 4, 3, 2], [1, 1, 3, 2, 4, 3, 2], [1, 1, 3, 2, 4, 3, 2]], 4));
		Console.WriteLine(s.MaxSideLength([[2, 2, 2, 2, 2], [2, 2, 2, 2, 2], [2, 2, 2, 2, 2], [2, 2, 2, 2, 2], [2, 2, 2, 2, 2]], 1));
		Console.WriteLine(s.MaxSideLength([[0]], 0));
	}
}