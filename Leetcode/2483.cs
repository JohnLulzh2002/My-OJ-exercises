public class Solution
{
	public int BestClosingTime(string customers)
	{
		int ans, minCost, s = 0, length = customers.Length;
		int[] cost = new int[length];
		for (int i = 0; i < length; i++)
		{
			if (customers[i] == 'N')
				s++;
			if (i < length - 1)
				cost[i + 1] = s;
		}
		ans = length;
		minCost = s;
		s = 0;
		for (int i = length - 1; i >= 0; i--)
		{
			if (customers[i] == 'Y')
				s++;
			cost[i] += s;
			if (cost[i] <= minCost)
			{
				minCost = cost[i];
				ans = i;
			}
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.BestClosingTime("YYYY"));
	}
}