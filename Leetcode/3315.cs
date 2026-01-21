public class Solution
{
	public int[] MinBitwiseArray(IList<int> nums)
	{
		int[] ans = new int[nums.Count];
		for (int i = 0; i < nums.Count; i++)
		{
			if (nums[i] == 2)
			{
				ans[i] = -1;
				continue;
			}
			List<int> bin = [];
			while (nums[i] > 0)
			{
				bin.Add(nums[i] % 2);
				nums[i] /= 2;
			}
			bin.Add(0);
			for (int j = 1; j < bin.Count; j++)
				if (bin[j] == 0)
				{
					bin[j - 1] = 0;
					break;
				}
			int a = 0, p = 1;
			foreach (int b in bin)
			{
				a+=b*p;
				p*=2;
			}
			ans[i] = a;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(string.Join(' ', s.MinBitwiseArray([2, 3, 5, 7])));
	}
}