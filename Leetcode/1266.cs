public class Solution
{
	public int MinTimeToVisitAllPoints(int[][] points)
	{
		int s=0,l0=points[0][0],l1=points[0][1];
		foreach (int[] p in points.Skip(1))
		{
			s+=Math.Max(Math.Abs(p[0]-l0), Math.Abs(p[1] - l1));
			(l0,l1)=(p[0],p[1]);
		}
		return s;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinTimeToVisitAllPoints([[1, 1], [3, 4], [-1, 0]]));
	}
}