public class Solution
{
	public int MaxTwoEvents(int[][] events)
	{
		int ans = 0;
		var starts = events.Select(x => (start: (double)x[0], value: x[2]))
				.OrderBy(x => x.start).ToArray();
		var comparer = Comparer<(double start, int value)>.Create((x, y) =>
			x.start.CompareTo(y.start));
		int[] maxes = new int[starts.Length];
		for (int i = starts.Length - 1; i >= 0; i--)
		{
			if (starts[i].value > ans)
				ans = starts[i].value;
			maxes[i] = ans;
		}
		foreach (var i in events)
		{
			int end = i[1], value = i[2],
				index = Array.BinarySearch(starts, (start: end + 0.5, value: 0), comparer);
			if (index < 0) index = ~index;
			if(index < starts.Length)
			if (index < starts.Length && value + maxes[index] > ans)
				ans = value + maxes[index];
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxTwoEvents([[1, 1, 5], [3, 4, 1], [2, 4, 5], [2, 5, 3], [2, 3, 4]]));
	}
}