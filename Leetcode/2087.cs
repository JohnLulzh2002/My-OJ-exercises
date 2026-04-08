public class Solution
{
	public int MinCost(int[] startPos, int[] homePos, int[] rowCosts, int[] colCosts)
	{

		int ans = 0, l = startPos[0], r = homePos[0], d = (r - l) > 0 ? 1 : -1;
		for (int i = l; i != r; i += d){
			ans += rowCosts[i + d];}
		l = startPos[1]; r = homePos[1]; d = (r - l) > 0 ? 1 : -1;
		for (int i = l; i != r; i += d)
			ans += colCosts[i + d];
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinCost([1, 0], [2, 3], [5, 4, 3], [8, 2, 6, 7]));
	}
}