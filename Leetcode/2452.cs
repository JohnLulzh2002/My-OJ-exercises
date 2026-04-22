public class Solution
{
	public IList<string> TwoEditWords(string[] queries, string[] dictionary)
	{
		List<string> ans = [];
		int n = queries[0].Length;
		foreach (string q in queries) foreach (string d in dictionary)
		{
			int diff = 0;
			for (int i = 0; i < n; i++)
				if (q[i] != d[i])
					diff++;
			if (diff < 3)
			{
				ans.Add(q);
				break;
			}
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		// Console.WriteLine(s.MinimumHammingDistance([1, 2, 3, 4], [2, 1, 4, 5], [[0, 1], [2, 3]]));
		Console.WriteLine(string.Join(' ', s.TwoEditWords(["word", "note", "ants", "wood"], ["wood", "joke", "moat"])));
	}
}