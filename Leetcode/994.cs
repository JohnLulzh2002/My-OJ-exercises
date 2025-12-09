public class Solution
{
    public int OrangesRotting(int[][] grid)
    {
        var dir = new List<(int x, int y)>{
            (0, -1), (0, 1), (-1, 0), (1, 0)
        };
        int m = grid.Length, n = grid[0].Length;
        Queue<(int x, int y)> todo = new();
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (grid[i][j] == 2)
                    foreach (var (x, y) in dir)
                    {
                        int ip = i + x, jp = j + y;
                        if (ip >= 0 && ip < m && jp >= 0 && jp < n && grid[ip][jp] == 1)
                        {
                            grid[ip][jp] = 0;
                            todo.Enqueue((ip, jp));
                        }
                    }
            }
        }
        int ans = 0;
        while (todo.Count > 0)
        {
            int count = todo.Count;
            ans++;
            for (int k = 0; k < count; k++)
            {
                var (i, j) = todo.Dequeue();
                foreach (var (x, y) in dir)
                {
                    int ip = i + x, jp = j + y;
                    if (ip >= 0 && ip < m && jp >= 0 && jp < n && grid[ip][jp] == 1)
                    {
                        grid[ip][jp] = 0;
                        todo.Enqueue((ip, jp));
                    }
                }
            }
        }
        foreach (var i in grid)
        {
            foreach (var j in i)
            {
                if (j==1)
                {
                    return -1;
                }
            }
        }
        return ans;
    }
    public static void Main()
    {
        Solution s =new();
        int[][] grid = [[2, 1, 1], [1, 1, 0], [0, 1, 1]];
        Console.WriteLine(s.OrangesRotting(grid));
    }
}