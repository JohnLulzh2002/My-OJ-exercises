public class Solution
{
	public IList<IList<int>> MinimumAbsDifference(int[] arr)
	{
		List<IList<int>> ans = [];
		int minD = int.MaxValue;
		Array.Sort(arr);
		for (int i = 0; i < arr.Length - 1; i++)
		{
			int d = arr[i + 1] - arr[i];
			if (d < minD)
				minD = d;
		}
		for (int i = 0; i < arr.Length - 1; i++)
			if (arr[i + 1] - arr[i] == minD)
			{
				ans.Add([arr[i ] , arr[i+ 1]]);
			}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(string.Join (' ',s.MinimumAbsDifference([4, 2, 1, 3]).Select(x=>string.Join(',',x))));
	}
}