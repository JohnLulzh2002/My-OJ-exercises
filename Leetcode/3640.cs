public class Solution
{
	public long MaxSumTrionic(int[] nums)
	{
		long ans = long.MinValue, s = nums[0], fallbackS = nums[0];
		int phase = 0;
		for (int i = 1; i < nums.Length; i++)
		{
			int comp = nums[i].CompareTo(nums[i - 1]);
			switch (comp, phase)
			{
				case (1, 0):
				case (-1, 1):
					s += nums[i];
					phase++;
					break;
				case (1, 1):
					s = Math.Max(s, nums[i - 1]);
					s += nums[i];
					break;
				case (1, 2):
				case (1, 3):
					s += nums[i];
					phase = 3;
					ans = Math.Max(ans, s);
					break;
				case (0, _):
				case (-1, 0):
					s = nums[i];
					phase = 0;
					break;
				case (-1, 2):
					s += nums[i];
					break;
				case (-1, 3):
					s = fallbackS + nums[i];
					phase = 2;
					break;
			}
			if (comp == 1)
			{
				fallbackS = Math.Max(fallbackS, nums[i - 1]);
				fallbackS += nums[i];
			}
			else
				fallbackS = long.MinValue;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxSumTrionic([1, 3, 5, 4, 2, 6]));
		Console.WriteLine(s.MaxSumTrionic([0, -2, -1, -3, 0, 2, -1]));
		Console.WriteLine(s.MaxSumTrionic([671, 856, -33, 575, -173]));
		Console.WriteLine(s.MaxSumTrionic([-533, 224, -324, 251, 231, 479]));
	}
}