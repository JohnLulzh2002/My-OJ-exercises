public class Solution
{
	public int MinOperations(int[][] grid, int x)
	{
		int[] arr = [.. grid.SelectMany(x => x).Order()];
		int m = arr[0];
		for (int i = 0; i < arr.Length; i++)
		{
			arr[i] -= m;
			if (arr[i] % x > 0)
				return -1;
			arr[i] /= x;
		}
		int mid = arr.Length / 2;
		return arr.Select(x => Math.Abs(arr[mid] - x)).Sum();
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MinOperations([[2, 4], [6, 8]], 2));
		// Console.WriteLine(string.Join(' ', s.f()));
	}
}