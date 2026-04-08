public class Robot(int width, int height)
{
	int w = width - 1, h = height - 1, l = 0;
	bool moved = false;
	public void Step(int num)
	{
		l = (l + num) % (2 * w + 2 * h);
		moved = true;
	}
	public int[] GetPos()
	{
		if (l < w)
			return [l, 0];
		else if (l < w + h)
			return [w, l - w];
		else if (l < 2 * w + h)
			return [2 * w + h - l, h];
		else
			return [0, 2 * w + 2 * h - l];
	}
	public string GetDir()
	{
		if (moved && l == 0)
			return "South";
		if (l <= w)
			return "East";
		else if (l <= w + h)
			return "North";
		else if (l <= 2 * w + h)
			return "West";
		else
			return "South";
	}
}