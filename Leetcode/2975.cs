public class Solution
{
	public int MaximizeSquareArea(int m, int n, int[] hFences, int[] vFences)
	{
		int l = 1;
		long ans = -1;
		Array.Sort(hFences);
		Array.Sort(vFences);
		List<int> hSegments = [], vSegments = [];
		foreach (int h in hFences)
		{
			hSegments.Add(h - l);
			l = h;
		}
		hSegments.Add(m - l);
		l = 1;
		foreach (int v in vFences)
		{
			vSegments.Add(v - l);
			l = v;
		}
		vSegments.Add(n - l);
		HashSet<int> hSet = [], vSet = [], adj = [];
		foreach (int h in hSegments)
		{
			hSet.Add(h);
			HashSet<int> newAdj = [h];
			foreach (int a in adj)
			{
				int s = a + h;
				hSet.Add(s);
				newAdj.Add(s);
			}
			adj = newAdj;
		}
		adj = [];
		foreach (int v in vSegments)
		{
			vSet.Add(v);
			HashSet<int> newAdj = [v];
			foreach (int a in adj)
			{
				int s = a + v;
				vSet.Add(s);
				newAdj.Add(s);
			}
			adj = newAdj;
		}
		IOrderedEnumerable<int> hSorted = hSet.Order(), vSorted = vSet.Order();
		IEnumerator<int> hEnum = hSorted.GetEnumerator(), vEnum = vSorted.GetEnumerator();
		vEnum.MoveNext();
		while (hEnum.MoveNext())
		{
			while (hEnum.Current > vEnum.Current)
				if (!vEnum.MoveNext())
					break;
			if (hEnum.Current == vEnum.Current)
				ans = Math.Max(ans, (long)hEnum.Current * vEnum.Current);
		}
		return (int)(ans % 1000000007);
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaximizeSquareArea(4, 3, [2, 3], [2]));
	}
}