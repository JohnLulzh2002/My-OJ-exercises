public class Solution
{
	int[,]? s;
	public int MaximalRectangle(char[][] matrix)
	{
		int r = matrix.Length, c = matrix[0].Length, ans = 0;
		s = new int[r, c];

		for (int i = 0; i < r; i++)
		{
			int a = 0;
			for (int j = 0; j < c; j++)
			{
				if (matrix[i][j] == '1')
					a++;
				else
					a = 0;
				s[i, j] = a;
			}
		}

		for (int x = 0; x < r; x++)
		{
			for (int y = 0; y < c; y++)
			{
				int width = int.MaxValue;
				for (int i = 0; i <= x; i++)
				{
					width = Math.Min(width, s[x - i, y]);
					ans = Math.Max(ans, (i + 1) * width);
				}
			}
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaximalRectangle([['1', '0', '1', '0', '0'], ['1', '0', '1', '1', '1'], ['1', '1', '1', '1', '1'], ['1', '0', '0', '1', '0']]));
	}
}