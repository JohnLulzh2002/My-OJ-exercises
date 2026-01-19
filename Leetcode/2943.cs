public class Solution
{
	public int MaximizeSquareHoleArea(int n, int m, int[] hBars, int[] vBars)
	{
		Array.Sort(hBars);
		Array.Sort(vBars);
		int lastH = hBars.First(), lastV = vBars.First(), lenH = 1, lenV = 1, maxH = 1, maxV = 1;
		foreach (int h in hBars.Skip(1))
		{
			if (lastH + 1 == h)
			{
				lenH++;
				maxH = Math.Max(maxH, lenH);
			}else
			{
				lenH=1;
			}
			lastH=h;
		}
		foreach (int v in vBars.Skip(1))
		{
			if (lastV + 1 == v)
			{
				lenV++;
				maxV = Math.Max(maxV, lenV);
			}
			else
			{
				lenV = 1;
			}
			lastV=v;
		}
		return (int)Math.Pow(Math.Min(maxH,maxV)+1,2);
	}
	static void Main()
	{
		Solution s = new();
		Console.WriteLine(s.MaximizeSquareHoleArea(1, 1, [2], [2]));
		Console.WriteLine(s.MaximizeSquareHoleArea(4,4, [2,3,4,5], [2,3,4,5]));
	}
}