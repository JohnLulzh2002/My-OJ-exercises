public class Solution
{
	public int MinDeletionSize(string[] strs)
	{
		int ans = 0;
		for (int i = 0; i < strs[0].Length; i++)
		{
			for (int j = 1; j < strs.Length; j++)
				if (strs[j - 1][i] > strs[j][i])
				{
					ans++;
					break;
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