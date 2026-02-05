public class Solution
{
	public int MinimumCost(int[] nums) =>
		nums.First() + nums.Skip(1).Order().Take(2).Sum();
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinimumCost([1, 2, 3, 12]));
	}
}