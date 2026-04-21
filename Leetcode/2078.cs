public class Solution
{
	public int MaxDistance(int[] colors)
	{
		int l = 0, r = colors.Length - 1;
		for (; colors[l] == colors[r]; l++) ;
		int ans = r - l;
		for (l = 0; colors[l] == colors[r]; r--) ;
		ans = Math.Max(ans, r - l);
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		// Console.WriteLine(s.MinMirrorPairDistance([12, 21, 45, 33, 54]));
		Console.WriteLine(string.Join(' ', s.MaxDistance([1, 1, 1, 6, 1, 1, 1])));
	}
}