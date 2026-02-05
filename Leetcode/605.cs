public class Solution
{
	public bool CanPlaceFlowers(int[] flowerbed, int n)
	{
		int s = 0, c = 1;
		foreach (int i in flowerbed)
		{
			if (i == 0)
			{
				c++;
			}
			else
			{
				s += (c - 1) / 2;
				c = 0;
			}
		}
		s += c / 2;
		return n <= s;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.CanPlaceFlowers([1, 0, 0, 0, 1], 1));
	}
}