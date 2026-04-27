#include <iostream>
#include <vector>
using namespace std;

bool isSafe(vector<vector<int>> &maze, int n, int x, int y, vector<vector<int>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && visited[x][y] == 0 && maze[x][y] == 1)
    {
        return true;
    }
    return false;
}

void solve(vector<vector<int>> &maze, int n, int x, int y, vector<vector<int>> &visited, vector<string> &ans, string path)
{
    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // Entered
    visited[x][y] = 1;

    // 4 Choices

    // Down
    int newX = x + 1;
    int newY = y;

    if (isSafe(maze, n, newX, newY, visited))
    {
        path.push_back('D');
        solve(maze, n, newX, newY, visited, ans, path);
        path.pop_back();
    }

    // Up
    newX = x - 1;
    newY = y;

    if (isSafe(maze, n, newX, newY, visited))
    {
        path.push_back('U');
        solve(maze, n, newX, newY, visited, ans, path);
        path.pop_back();
    }

    // Right
    newX = x;
    newY = y + 1;

    if (isSafe(maze, n, newX, newY, visited))
    {
        path.push_back('R');
        solve(maze, n, newX, newY, visited, ans, path);
        path.pop_back();
    }

    // Left
    newX = x;
    newY = y - 1;

    if (isSafe(maze, n, newX, newY, visited))
    {
        path.push_back('L');
        solve(maze, n, newX, newY, visited, ans, path);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> findPath(vector<vector<int>> &maze)
{
    vector<string> ans;

    if (maze[0][0] == 0)
        return ans;

    int n = maze.size();

    vector<vector<int>> visited = maze;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            visited[i][j] = 0;
        }
    }
    string path;

    solve(maze, n, 0, 0, visited, ans, path);
    return ans;
}

int main()
{
    vector<vector<int>> maze = {
        {1, 0, 0, 0}, {1, 1, 0, 1}, {1, 1, 0, 0}, {0, 1, 1, 1}};

    vector<string> res = findPath(maze);

    for (int i = 0; i < res.size(); i++)
    {
        cout << res[i] << " ";
    }
}