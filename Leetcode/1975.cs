public class Solution
{
	public long MaxMatrixSum(int[][] matrix)
	{
		long ans = 0;
		bool odd = false;
		int minAbs = int.MaxValue;
		foreach (int[] i in matrix)
			foreach (int j in i)
			{
				int a = Math.Abs(j);
				if (j < 0)
					odd = !odd;
				if (a < minAbs)
					minAbs = a;
				ans += a;
			}
		if (odd)
			ans-=2*minAbs;
		return ans;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaxMatrixSum([[1, 2, 3], [-1, -2, -3], [1, 2, 3]]));
	}
}