public class Solution
{
	public int[] MaxValue(int[] nums)
	{
		int n = nums.Length;
		int[] lMax = new int[n], rMin = new int[n];
		lMax[0] = nums[0];
		rMin[n - 1] = nums[n - 1];
		for (int i = 1; i < n; i++)
		{
			lMax[i] = Math.Max(lMax[i - 1], nums[i]);
			rMin[n - i - 1] = Math.Min(rMin[n - i], nums[n - i - 1]);
		}
		for (int i = n - 2; i >= 0; i--)
			if (lMax[i] > rMin[i + 1])
				lMax[i] = lMax[i + 1];
		return lMax;
	}
	static void Main()
	{
		Solution s = new();
		var ans = s.MaxValue([2, 1, 3]);
		// Console.WriteLine(ans);
		Console.WriteLine(string.Join(' ', ans));
		// Console.WriteLine(string.Join("\n", ans.Select(row => new string(row))));
	}
}