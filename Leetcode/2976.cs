public class Solution
{
	public long MinimumCost(string source, string target, char[] original, char[] changed, int[] cost)
	{
		int[,] s = new int[26, 26];
		long ans = 0;
		for (int i = 0; i < 26; i++) for (int j = 0; j < 26; j++)
			if (i == j)
				s[i, j] = 0;
			else
				s[i, j] = int.MaxValue;
		foreach ((int u, int v, int w) in
			Enumerable.Range(0, original.Length)
			.Select(x => (original[x] - 'a', changed[x] - 'a', cost[x])))
			s[u, v] = Math.Min(s[u, v], w);
		for (int k = 0; k < 26; k++) for (int i = 0; i < 26; i++) for (int j = 0; j < 26; j++)
			if (s[i, k] < int.MaxValue && s[k, j] < int.MaxValue)
				s[i, j] = Math.Min(s[i, j], s[i, k] + s[k, j]);
		for (int i = 0; i < source.Length; i++)
		{
			int w = s[source[i] - 'a', target[i] - 'a'];
			if (w < int.MaxValue)
				ans += w;
			else
				return -1;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumCost("abcd", "acbe", ['a', 'b', 'c', 'c', 'e', 'd'], ['b', 'c', 'b', 'e', 'b', 'e'], [2, 5, 5, 1, 2, 20]));
	}
}