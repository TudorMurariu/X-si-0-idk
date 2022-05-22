#pragma once
#include <string>
using namespace std;

class Repo {
	char grid[3][3];
	bool este_randul_lui_X;

public:

	Repo()
	{
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				grid[i][j] = ' ';
		este_randul_lui_X = true;
	}

	string pressed(int i, int j)
	{
		if (este_randul_lui_X)
		{
			grid[i][j] = 'X';
			este_randul_lui_X = false;

			bool X_WON = true;
			for (int k = 0; k < 3; k++)
				if (grid[k][j] != 'X')
				{
					X_WON = false;
					break;
				}

			if (X_WON)
				return "X a castigat";

			X_WON = true;
			for (int k = 0; k < 3; k++)
				if (grid[i][k] != 'X')
				{
					X_WON = false;
					break;
				}

			if (X_WON)
				return "X a castigat";

			if (i == j)
			{
				X_WON = true;
				for (int k = 0; k < 3; k++)
					if (grid[k][k] != 'X')
					{
						X_WON = false;
						break;
					}

				if (X_WON)
					return "X a castigat";
			}

			if (i + j == 2)
			{
				X_WON = true;
				for (int k = 0; k < 3; k++)
					if (grid[k][2-k] != 'X')
					{
						X_WON = false;
						break;
					}

				if (X_WON)
					return "X a castigat";
			}

			bool game_ended = true;
			for (int i = 0; i < 3; i++)
				for (int j = 0; j < 3; j++)
					if (grid[i][j] == ' ')
					{
						game_ended = false;
						break;
					}

			if (game_ended)
				return "remiza";

			return "X";
		}
		
		/// PENTRU 0

		grid[i][j] = '0';
		este_randul_lui_X = true;

		bool O_WON = true;
		for (int k = 0; k < 3; k++)
			if (grid[k][j] != '0')
			{
				O_WON = false;
				break;
			}

		if (O_WON)
			return "O a castigat";

		O_WON = true;
		for (int k = 0; k < 3; k++)
			if (grid[i][k] != '0')
			{
				O_WON = false;
				break;
			}

		if (O_WON)
			return "O a castigat";

		if (i == j)
		{
			O_WON = true;
			for (int k = 0; k < 3; k++)
				if (grid[k][k] != '0')
				{
					O_WON = false;
					break;
				}

			if (O_WON)
				return "O a castigat";
		}

		if (i + j == 2)
		{
			O_WON = true;
			for (int k = 0; k < 3; k++)
				if (grid[k][2 - k] != '0')
				{
					O_WON = false;
					break;
				}

			if (O_WON)
				return "O a castigat";
		}

		bool game_ended = true;
		for (int i = 0; i < 3; i++)
			for (int j = 0; j < 3; j++)
				if (grid[i][j] == ' ')
				{
					game_ended = false;
					break;
				}

		if (game_ended)
			return "remiza";

		return "0";
	}
};