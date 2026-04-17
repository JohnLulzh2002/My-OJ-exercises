public class Solution
{
	static int Reverse(int n)
	{
		int ans = 0;
		while (n > 0)
		{
			ans = ans * 10 + n % 10;
			n /= 10;
		}
		return ans;
	}
	public int MinMirrorPairDistance(int[] nums)
	{
		int ans = int.MaxValue;
		Dictionary<int, int> d = [];
		for (int i = 0; i < nums.Length; i++)
		{
			if (d.TryGetValue(nums[i], out int j))
				ans = Math.Min(ans, i - j);
			d[Reverse(nums[i])] = i;
		}
		if (ans == int.MaxValue)
			return -1;
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinMirrorPairDistance([12, 21, 45, 33, 54]));
		// Console.WriteLine(string.Join(' ', s.MinMirrorPairDistance([12, 21, 45, 33, 54])));
	}
}