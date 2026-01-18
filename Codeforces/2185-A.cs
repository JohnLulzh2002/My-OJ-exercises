int t = int.Parse(System.Console.ReadLine());
for (int i = 0; i < t; i++)
{
	int n = int.Parse(System.Console.ReadLine());
	for (int j = 0; j < n; j++)
		Console.Write($"{j+1} ");
	Console.WriteLine();
}