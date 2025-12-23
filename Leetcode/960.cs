public class Solution
{
	public int MinDeletionSize(string[] strs)
	{
		int ans = strs[0].Length;
		int[] len = new int[strs[0].Length];
		Array.Fill(len,1);
		for (int i = 0; i < strs[0].Length; i++)
		{
			for (int j = 0; j < i; j++)
			{
				bool sorted = true;
				for (int k = 0; k < strs.Length; k++)
					if (strs[k][j] > strs[k][i])
					{
						sorted = false;
						break;
					}
				if (sorted && len[j] + 1 > len[i])
					len[i] = len[j] + 1;
			}
		}
		foreach (int i in len)
		{
			int a = strs[0].Length - i;
			if (a<ans)	ans=a;
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinDeletionSize(["babca", "bbazb"]));
	}
}