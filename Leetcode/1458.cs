public class Solution
{
	public int MaxDotProduct(int[] nums1, int[] nums2)
	{
		int[,] dp = new int[nums1.Length, nums2.Length];
		for (int i = 0; i < nums1.Length; i++) for (int j = 0; j < nums2.Length; j++)
		{
			dp[i, j] = nums1[i] * nums2[j];
			if (i > 0)
				dp[i, j] = Math.Max(dp[i, j], dp[i - 1, j]);
			if (j > 0)
				dp[i, j] = Math.Max(dp[i, j], dp[i, j - 1]);
			if (i > 0 && j > 0)
				dp[i, j] = Math.Max(dp[i, j], dp[i - 1, j - 1] + nums1[i] * nums2[j]);
		}
		return dp[nums1.Length - 1, nums2.Length - 1];
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxDotProduct([2, 1, -2, 5], [3, 0, -6]));
	}
}