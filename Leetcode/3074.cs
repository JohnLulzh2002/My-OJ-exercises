public class Solution
{
	public int MinimumBoxes(int[] apple, int[] capacity)
	{
		int ans = 0, s = 0;
		foreach (int i in apple)
			s += i;
		Array.Sort(capacity);
		foreach (int i in capacity.Reverse())
		{
			if (s > 0)
			{
				ans++; s -= i;
			}
			else
				break;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumBoxes([1, 3, 2], [4, 3, 1, 5, 2]));
	}
}