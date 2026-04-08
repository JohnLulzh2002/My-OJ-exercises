public class Solution
{
	public int RobotSim(int[] commands, int[][] obstacles)
	{
		int x = 0, y = 0, dir = 0,ans=0;
		int[] dx = [0, 1, 0, -1], dy = [1, 0, -1, 0];
		HashSet<(int, int)> os = [.. obstacles.Select(o => (o[0], o[1]))];
		foreach (int c in commands)
		{
			if (c == -2)
				dir = (dir + 3) % 4;
			else if (c == -1)
				dir = (dir + 1) % 4;
			else
			{
				for (int i = 0; i < c; i++)
				{
					x += dx[dir];
					y += dy[dir];
					if (os.Contains((x, y)))
					{
						x -= dx[dir];
						y -= dy[dir];
						break;
					}
					ans=Math.Max(ans,x*x+y*y);
				}
			}
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.RobotSim([4, -1, 3], []));
	}
}