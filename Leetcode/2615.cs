public class Solution
{
	public long[] Distance(int[] nums)
	{
		long[] ans = new long[nums.Length], rev = new long[nums.Length];
		Dictionary<int, (int i, int count)> prev = [];
		for (int j = 0; j < nums.Length; j++)
		{
			if (prev.TryGetValue(nums[j], out var v))
			{
				ans[j] = ans[v.i] + (j - v.i) * v.count;
				prev[nums[j]] = (j, v.count + 1);
			}
			else
				prev[nums[j]] = (j, 1);
		}
		prev = [];
		for (int j = nums.Length - 1; j >= 0; j--)
		{
			if (prev.TryGetValue(nums[j], out var v))
			{
				rev[j] = rev[v.i] + (v.i - j) * v.count;
				prev[nums[j]] = (j, v.count + 1);
			}
			else
				prev[nums[j]] = (j, 1);
		}
		for (int i = 0; i < nums.Length; i++)
			ans[i]+=rev[i];
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		// Console.WriteLine(s.f());
		Console.WriteLine(string.Join(' ', s.Distance([1, 3, 1, 1, 2])));
	}
}