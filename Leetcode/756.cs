public class Solution
{
	private readonly HashSet<int>[,] a = new HashSet<int>[6, 6];
	private bool Dfs(List<int> up, List<int> down, int pos)
	{
		// Print('#' + string.Join(", ", up));
		// Print(' ' + string.Join(", ", down));
		// Print($" {pos}");
		if (down.Count == 1)
			return true;
		if (pos >= down.Count - 1)
			return Dfs([], up, 0);
		foreach (int u in a[down[pos], down[pos + 1]] ?? Enumerable.Empty<int>())
		{
			up.Add(u);
			if (Dfs(up, down, pos + 1))
				return true;
			up.RemoveAt(up.Count - 1);
		}
		return false;
	}
	public bool PyramidTransition(string bottom, IList<string> allowed)
	{
		foreach (string s in allowed)
		{
			int l = s[0] - 'A', r = s[1] - 'A', p = s[2] - 'A';
			if (a[l, r] == null)
				a[l, r] = [p];
			else
				a[l, r].Add(p);
		}
		return Dfs([], [.. bottom.Select(x => x - 'A')], 0);
	}
	static void Main()
	{
		Solution s = new();
		// Console.WriteLine(s.PyramidTransition("BCD", ["BCC", "CDE", "CEA", "FFF"]));
		Console.WriteLine(s.PyramidTransition("AAAA", ["AAB", "AAC", "BCD", "BBE", "DEF"]));
	}
}