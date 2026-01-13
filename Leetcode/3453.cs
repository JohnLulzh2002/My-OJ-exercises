public class Solution
{
	public double SeparateSquares(int[][] squares)
	{
		double right = int.MinValue, left = int.MaxValue;
		const double delta = 1e-6;
		foreach (int[] s in squares)
		{
			int y = s[1], l = s[2];
			right = Math.Max(right, y + l);
			left = Math.Min(left, y);
		}
		double mid = (left + right) / 2;
		do
		{
			double suml = 0, sumr = 0;
			foreach (int[] s in squares)
			{
				double y = s[1], l = s[2];
				if (mid >= y + l)
					suml += l * l;
				else if (mid <= y)
					sumr += l * l;
				else
				{
					suml += l * (mid - y);
					sumr += l * (y + l - mid);
				}
			}
			if (suml < sumr)
			{
				left = mid;
				mid = (left + right) / 2;
			}
			else
			{
				right = mid;
				mid = (left + right) / 2;
			}
		} while (left + delta < right);
		return mid;
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.SeparateSquares([[0, 0, 1], [2, 2, 1]]));
		Console.WriteLine(s.SeparateSquares([[522261215, 954313664, 225462], [628661372, 718610752, 10667], [619734768, 941310679, 44788], [352367502, 656774918, 289036], [860247066, 905800565, 100123], [817623994, 962847576, 71460], [691552058, 782740602, 36271], [911356, 152015365, 513881], [462847044, 859151855, 233567], [672324240, 954509294, 685569]]));
	}
}