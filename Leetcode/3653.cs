public class Solution
{
	public int XorAfterQueries(int[] nums, int[][] queries)
	{
		foreach (int[] q in queries)
		{
			int l = q[0], r = q[1], k = q[2];
			long v = q[3];
			for (int i = l; i <= r; i += k)
			{
				nums[i] = (int)(nums[i] * v % 1000000007);
			}
		}
		int ans = 0;
		foreach (int n in nums)
		{
			ans ^= n;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.XorAfterQueries([1, 1, 1], [[0, 2, 1, 4]]));
		Console.WriteLine(s.XorAfterQueries([780], [[0, 0, 1, 13], [0, 0, 1, 17], [0, 0, 1, 9], [0, 0, 1, 18], [0, 0, 1, 16], [0, 0, 1, 6], [0, 0, 1, 4], [0, 0, 1, 11], [0, 0, 1, 7], [0, 0, 1, 18], [0, 0, 1, 8], [0, 0, 1, 15], [0, 0, 1, 12]]));
	}
}