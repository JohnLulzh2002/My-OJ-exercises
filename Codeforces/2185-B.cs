int t = int.Parse(System.Console.ReadLine());
for (; t>0; t--)
{
	int n = int.Parse(System.Console.ReadLine());
	var a = System.Console.ReadLine().Split(' ').Select(int.Parse).ToList();
	for (int i = 0; i < a.Count - 1; i++)
	{
		int maxa = a[i], maxi = -1;
		for (int j = i+1; j < a.Count; j++)
			if (a[j] > maxa)
			{
				maxa = a[j];
				maxi = j;
			}
		if (maxi != -1)
		{
			a[i]+=a[maxi];
			a[maxi]=a[i]- a[maxi];
			a[i] -= a[maxi];
			break;
		}
	}
	int ans=0,maxa2=int.MinValue;
	foreach (int j in a)
	{
		maxa2=Math.Max(maxa2,j);
		ans+=maxa2;
	}
	Console.WriteLine($"{ans}");
}