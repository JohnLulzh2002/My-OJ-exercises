class UnionFind(int n)
{
	readonly int[] ancestor = [.. Enumerable.Range(0, n)];
	public int FindAncestor(int n)
	{
		if (n != ancestor[n])
			ancestor[n] = FindAncestor(ancestor[n]);
		return ancestor[n];
	}
	public void Merge(int x, int y) =>
		ancestor[FindAncestor(x)] = FindAncestor(y);
}
public class Solution
{
	public int MinimumHammingDistance(int[] source, int[] target, int[][] allowedSwaps)
	{
		int ans = 0, n = source.Length;
		UnionFind uf = new(n);
		foreach (int[] s in allowedSwaps)
			uf.Merge(s[0], s[1]);
		Dictionary<int, List<int>> unionSet = [];
		for (int i = 0; i < n; i++)
		{
			int anc = uf.FindAncestor(i);
			if (unionSet.TryGetValue(anc, out var v))
				v.Add(i);
			else
				unionSet[anc] = [i];
		}
		foreach (List<int> set in unionSet.Values)
		{
			Dictionary<int, int> count = [];
			foreach (int i in set)
			{
				count[target[i]] = count.GetValueOrDefault(target[i], 0) + 1;
				count[source[i]] = count.GetValueOrDefault(source[i], 0) - 1;
			}
			ans += count.Values.Where(x => x > 0).Sum();
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumHammingDistance([1, 2, 3, 4], [2, 1, 4, 5], [[0, 1], [2, 3]]));
		// Console.WriteLine(string.Join(' ', s.MinimumHammingDistance([1, 2, 3, 4], [2, 1, 4, 5], [[0, 1], [2, 3]])));
	}
}