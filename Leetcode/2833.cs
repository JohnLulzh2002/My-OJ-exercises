public class Solution
{
	public int FurthestDistanceFromOrigin(string moves)
	{
		int pos = 0, r = 0;
		foreach (char m in moves)
		{
			if (m == 'R')
				pos++;
			else if (m == 'L')
				pos--;
			else
				r++;
		}
		return Math.Abs(pos) + r;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.FurthestDistanceFromOrigin("L_RL__R"));
		// Console.WriteLine(string.Join(' ', s.f()));
	}
}