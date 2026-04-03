public class Solution
{
	public int MaximumAmount(int[][] coins)
	{
		int[,] dp = new int[coins[0].Length, 3];
		for (int i = 0; i < coins.Length; i++)
		{
			for (int j = 0; j < coins[i].Length; j++)
			{
				for (int k = 2; k >= 0; k--)
				{
					int dijk = int.MinValue;
					if (i == 0 && j == 0) dijk = 0;
					if (i > 0) dijk = Math.Max(dijk, dp[j, k]);
					if (j > 0) dijk = Math.Max(dijk, dp[j - 1, k]);
					dijk += coins[i][j];
					if (coins[i][j] < 0 && k > 0)
					{
						if (i == 0 && j == 0) dijk = 0;
						if (i > 0) dijk = Math.Max(dijk, dp[j, k - 1]);
						if (j > 0) dijk = Math.Max(dijk, dp[j - 1, k - 1]);
					}
					dp[j, k] = dijk;
				}
			}
		}
		return dp[coins[0].Length - 1, 2];
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaximumAmount([[0, 1, -1], [1, -2, 3], [2, -3, 4]]));
		Console.WriteLine(s.MaximumAmount([[-7, 12, 12, 13], [-6, 19, 19, -6], [9, -2, -10, 16], [-4, 14, -10, -9]]));
	}
}