public class Solution
{
	public int MinimumDistance(int[] nums)
	{
		int ans = int.MaxValue;
		for (int i = 0; i < nums.Length - 2; i++) for (int j = i + 1; j < nums.Length - 1; j++) for (int k = j + 1; k < nums.Length; k++)
		{
			if (nums[i] == nums[j] && nums[j] == nums[k])
				ans = Math.Min(ans, (k - i) * 2);
		}
		if(ans==int.MaxValue)
			return -1;
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumDistance([1, 2, 1, 1, 3]));
	}
}