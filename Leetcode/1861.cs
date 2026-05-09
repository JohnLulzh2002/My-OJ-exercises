public class Solution
{
	public char[][] RotateTheBox(char[][] boxGrid)
	{
		foreach (char[] row in boxGrid)
		{
			int count = 0;
			for (int i = 0; i <= row.Length; i++)
			{
				if (i == row.Length || row[i] == '*')
				{
					for (int j = 1; j <= count; j++)
						row[i - j] = '#';
					count = 0;
				}
				else if (row[i] == '#')
				{
					row[i] = '.';
					count++;
				}
			}
		}
		int r = boxGrid[0].Length, c = boxGrid.Length;
		char[][] result = new char[r][];
		for (int i = 0; i < r; i++)
		{
			result[i] = new char[c];
			for (int j = 0; j < c; j++)
				result[i][j] = boxGrid[c - 1 - j][i];
		}
		return result;
	}
	static void Main()
	{
		Solution s = new();
		var ans = s.RotateTheBox([['#', '.', '*', '.'], ['#', '#', '*', '.']]);
		// Console.WriteLine(ans);
		// Console.WriteLine(string.Join(' ', ans));
		Console.WriteLine(string.Join("\n", ans.Select(row => new string(row))));
	}
}