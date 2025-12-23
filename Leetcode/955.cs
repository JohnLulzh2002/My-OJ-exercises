public class Solution
{
	public int MinDeletionSize(string[] strs)
	{
		int ans = 0;
		bool[] sorted = new bool[strs.Length];
		for (int i = 0; i < strs[0].Length; i++)
		{
			bool deleted = true;
			for (int j = 1; j < strs.Length; j++)
				if (!sorted[j] && strs[j - 1][i] > strs[j][i])
				{
					ans++;
					deleted = false;
					break;
				}
			if (deleted)
				for (int j = 1; j < strs.Length; j++)
					if (strs[j - 1][i] < strs[j][i])
					{
						sorted[j] = true;
					}
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinDeletionSize(["cba", "daf", "ghi"]));
	}
}