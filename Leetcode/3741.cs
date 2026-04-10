public class Solution
{
	public int MinimumDistance(int[] nums)
	{
		int ans = int.MaxValue;
		Dictionary<int, List<int>> d = [];
		for (int i = 0; i < nums.Length; i++)
		{
			if (d.TryGetValue(nums[i], out List<int>? value))
				value.Add(i);
			else
				d[nums[i]] = [i];
		}
		foreach (List<int> idx in d.Values)
		{
			// Console.WriteLine($"{string.Join(',', idx)}");
			for (int i = 0; i < idx.Count - 2; i++)
			{
				ans = Math.Min(ans, (idx[i+2] - idx[i]) * 2);
			}

		}
		if (ans == int.MaxValue)
			return -1;
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumDistance([1, 2, 1, 1, 3]));
	}
}