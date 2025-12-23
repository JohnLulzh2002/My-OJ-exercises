public class Solution
{
	public long MaxProfit(int[] prices, int[] strategy, int k)
	{
		long[] prefix = new long[prices.Length], suffix = new long[prices.Length];
		long s = 0, ans = 0, sum;
		for (int i = 0; i < prices.Length; i++)
		{
			prefix[i] = s += prices[i] * strategy[i];
		}
		s = 0;
		for (int i = prices.Length - 1; i >= 0; i--)
		{
			suffix[i] = s += prices[i] * strategy[i];
		}
		ans = s;
		s = 0;
		for (int i = k / 2; i < k; i++)
		{
			s += prices[i];
		}
		sum = s + (k < prices.Length ? suffix[k] : 0) ;
		if (sum > ans)
			ans = sum;
		for (int i = k; i < prices.Length; i++)
		{
			s += prices[i] - prices[i - k / 2];
			sum = s + prefix[i - k] + (i<prices.Length-1? suffix[i+1]:0);
			if (sum > ans)
				ans = sum;
		}
		return ans;
	}
	static public void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxProfit([4, 2, 8], [-1, 0, 1], 2));
	}
}