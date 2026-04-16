public class Solution
{
	public IList<int> SolveQueries(int[] nums, int[] queries)
	{
		Dictionary<int, List<int>> index = [];
		for (int i = 0; i < nums.Length; i++)
		{
			if (index.TryGetValue(nums[i], out List<int>? value))
				value.Add(i);
			else
				index[nums[i]] = [i];
		}
		foreach (ref int q in queries.AsSpan())
		{
			List<int> a = index[nums[q]];
			if (a.Count == 1)
			{
				q = -1;
				continue;
			}
			int i = a.BinarySearch(q), ans = int.MaxValue;
			if (i - 1 < 0)
				ans = Math.Min(ans, q + nums.Length - a.Last());
			else
				ans = Math.Min(ans, q - a[i - 1]); ;
			if (i + 1 == a.Count)
				ans = Math.Min(ans, nums.Length + a[0] - q);
			else
				ans = Math.Min(ans, a[i + 1] - q);
			q = ans;
		}
		return queries;
	}
	static void Main()
	{
		Solution s = new();
		// Console.WriteLine(s.SolveQueries([1, 3, 1, 4, 1, 3, 2], [0, 3, 5]));
		Console.WriteLine(string.Join(' ', s.SolveQueries([1, 3, 1, 4, 1, 3, 2], [0, 3, 5])));
	}
}