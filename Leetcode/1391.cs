public class Solution
{
	public bool HasValidPath(int[][] grid)
	{
		int[] dx = [0, 1, 0, -1], dy = [1, 0, -1, 0];//RDLU
		int[][] street = [[0, 2], [1, 3], [1, 2], [0, 1], [2, 3], [0, 3]];
		int m = grid.Length, n = grid[0].Length;
		if (m == 1 && n == 1) return true;
		static int RevDir(int n) => (n + 2) % 4;
		bool InGrid(int x, int y) =>
			x >= 0 && x < m && y >= 0 && y < n;
		foreach (int i in street[grid[0][0] - 1])
		{
			int x = dx[i], y = dy[i], dir = i;
			while (InGrid(x, y) && (x != 0 || y != 0))
			{
				int[] newBlock = street[grid[x][y] - 1];
				if (newBlock.Contains(RevDir(dir)))
					dir = newBlock[0] ^ newBlock[1] ^ RevDir(dir);
				else
					break;
				if (x == m - 1 && y == n - 1)
					return true;
				x += dx[dir]; y += dy[dir];
			}
		}
		return false;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.HasValidPath([[2, 4, 3], [6, 5, 2]]));
		// Console.WriteLine(string.Join(' ', s.f()));
	}
}