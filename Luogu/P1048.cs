using System;
public class Solution
{
	public static void Main()
	{
		string[] inp = Console.ReadLine().Split(' ');
		int t = int.Parse(inp[0]), m = int.Parse(inp[1]),ans=0;
		int[] dp = new int[t + 1];
		for (int i = 0; i < m; i++)
		{
			inp = Console.ReadLine().Split(' ');
			int a = int.Parse(inp[0]), b = int.Parse(inp[1]);
			for (int j = t - a; j >= 0; j--)
			{
				int c = dp[j] + b;
				if (c>dp[j+a])dp[j+a]=c;
			}
		}
		for (int i = 0; i <= t; i++)
			if(ans<dp[t])
				ans=dp[t];
		Console.WriteLine(ans);
	}
}