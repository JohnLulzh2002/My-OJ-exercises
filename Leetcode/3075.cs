public class Solution
{
	public long MaximumHappinessSum(int[] happiness, int k)
	{
		long ans = 0;
		Array.Sort(happiness,(x,y)=>y.CompareTo(x));
		for (int i = 0; i < k; i++)
		{
			ans += Math.Max(happiness[i] - i, 0);
		}
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaximumHappinessSum([1, 2, 3], 2));
	}
}