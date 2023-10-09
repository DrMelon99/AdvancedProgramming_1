﻿#include <stdio.h>
#include <stdlib.h>
#include <Windows.h>

#include "media.h"

void introsong(void)
{
	int sound = 0;

	while (sound < 26)
	{
		if (sound == 0 || sound == 1 || sound == 2 || sound == 3 ||
			sound == 4 || sound == 5 || sound == 7 || sound == 8 ||
			sound == 12 || sound == 13 || sound == 14 || sound == 15 ||
			sound == 16 || sound == 17 || sound == 18 || sound == 19)
		{
			Beep(SOUND_C / 2, 250);
		}
		else if (sound == 6)
		{
			Beep(SOUND_E / 2, 250);
		}
		else if (sound == 9 || sound == 11 || sound == 20 || sound == 22)
		{
			Beep(SOUND_Asharp / 4, 250);
		}
		else if (sound == 10 || sound == 21 || sound == 23)
		{
			Beep(SOUND_Gsharp / 4, 250);
		}
		else // SOUND_F
		{
			Beep(SOUND_F / 4, 250);
		}

		if (sound == 2 || sound == 5 || sound == 12 || sound == 15 || sound == 18 || sound == 25)
		{
			Sleep(250);
		}
		else
		{
			Sleep(20);
		}

		introtitle(sound++);
	}
}

void introtitle(int n)
{

	switch (n)
	{
		case 0:
			printf("                                                                                                                                            \n");
			printf("         ....   ..--.             ....    ....                    ..+-..                                  .-+-...                    .++-.. \n");
			printf("     .-+++###-+######.        ...-+##+-.-+####-.                   .-###-.                            .---..+###-.                    .+###.\n");
			printf("      ---##+...-+#+.          .-###++##+###-+##-                     -##+.                            .-###-.+##+.        ..-+++-..    .###.\n");
			printf("       .+###-..-###++-             .-##+  ..+#+.     ......---+#+-.  -##+.                   .-++++-..  .##+.-##+.       .+##+++##+..   ###.\n");
			break;
		case 1:
			printf("   ...++-..+#+##+..+##.           ..##-.  .+#+.      .-###++######-  -##+.                   .-######.. .##+.-##+.       -#+.   .+#-.   ###.\n");
			printf("         .--+--                   .+#-   .-#-.---..    .+##.  .+#+.  -##+.                         .++...##+.-##+.       -##-...-##-.   +##.\n");
			printf("          ....----++##+-. .-+++++++##++++#########-    .-#+.  .+#-   -##+.                        .-#######+.-##-.        .+######-.    -#-.\n");
			printf(".+##########++###+++++#+. ..-+####++--...+##.......     -##+-++##-   -##+.                      .-###+-..+#+.-##-.          .......     -+..\n");
			printf("  .-++-...   ..###            ...       .-##-           .+#-++++-.   .##+.                  ..--++-..    +#+.-##-.            ....  ..--+-..\n");
			break;
		case 2:
			printf("             ..##+                      .-##-            ..          .+#+.                  .....        -#-.-##-.            .###++##++###.\n");
			printf("              .##+                      ..##.                        .+#-.                               --. -##-.             .+##... .##-.\n");
			printf("              .+#-                       .#+.                        .+#-                                ..  .##.               -##....-##..\n");
			printf("              .++.                       .--                         .--.                                    -+-.               .+#######+..\n");
			printf("              .-.                        ..                          ...                                     ...                 .-..       \n");
			break;
		case 3:
			printf("############################################################################################################################################\n");
			printf("############################################################################################################################################\n");
			printf("###################################################################################++++++###################################################\n");
			break;
		case 4:
			printf("####################################################################################+++#++##################################################\n");
			printf("#################################################+#####################################++++#################################################\n");
			printf("#######################################################################+####+#++###########+################################################\n");
			printf("##################################################################+++++++++++###############################################################\n");
			printf("###############################################+###########+++++++--------------++++#######++###############################################\n");
			printf("###############################################+#######++++++------------------------++####++###############################################\n");
			printf("###############################################+#####+++++++----------------------------+##++###############################################\n");
			break;
		case 5:
			printf("###############################################+####+++++++------------------------------+##+###############################################\n");
			printf("###############################################+###++++++++++++-+-------------------------+#+###############################################\n");
			printf("##################################################+++++++++---++++------------------------+#+###############################################\n");
			printf("###############################################+##+++++++++-----++++----------------------+++-+#############################################\n");
			printf("##############################################+++#+++++##++####+-+++--------++#+#+-+++-----+---#############################################\n");
			printf("##############################################++++++++++---####++++++------+-+###+.------------#############################################\n");
			printf("##############################################+++++++++++--+++-----++---------++--------------+#############################################\n");
			break;
		case 6:
			printf("###############################################+++++++++------------+-------------------------##############################################\n");
			printf("###############################################++++++++-------------+------------------------+##############################################\n");
			printf("################################################++++++++-----------+-----------------------++###############################################\n");
			printf("##################################################++++++---------+++++---------------------+################################################\n");
			printf("##################################################+++++++---------++++--------------------+#################################################\n");
			printf("##################################################+++++++++-------------------------------++++##############################################\n");
			printf("###################################################++++++++------+++++++++----------------+++###############################################\n");
			break;
		case 7:
			printf("####################################################+++++++++----+++++++++---------------+##################################################\n");
			printf("#####################################################+++++++++-----+++++---------------++#########+#########################################\n");
			printf("#######################################################+++++++++++-----++------------++############+########################################\n");
			printf("#########################################################++++++++++-------------++++########################################################\n");
			printf("#############################################################+++++++----------++##############+#############################################\n");
			printf("###############################################################++++++++----+++############+####+############################################\n");
			printf("###############################################################+++++++++++++--############++###+############################################\n");
			break;
		case 8:
			printf("###############################################################++++++++++-----##############################################################\n");
			printf("############################################################++++++++++----------++##########################################################\n");
			printf("######################################################++++++++++++-------------------+++####################################################\n");
			printf("################################################+++++++++++++++------------------------++++++###############################################\n");
			printf("########################################++++++++++++++++++++---------------------++++++++++++------++#######################################\n");
			printf("######################################+-------++++++++++++++++++++++++++++++++--------------++--------+#####################################\n");
			printf("####################################++--------+++++++++++++++++++++--+++++++----------------------------+###################################\n");
			break;
		case 9:
			printf("##################################++++--------++++++++++++++++++++----++++++-----------------+------------##################################\n");
			printf("#################################++++---------++++++++++++++++++++---++++++++------------------------------#################################\n");
			printf("################################+++++--------+++++++++++++++++++++----++++++++------------------------------+###############################\n");
			printf("###############################++++++--------+++++++++++++++++++++---+++++++++-------------------------------+##############################\n");
			printf("##############################++++++--------+++++++++++++++++++++++--++++++++++-------------------------------##############################\n");
			printf("##############################++++++--------+++++++++++++++++++++++--+++++++++++---------------+++------------+#############################\n");
			printf("#############################+++++++-------+++++++++++++++++++++++++++++++++++++++-------------++--------------+############################\n");
			break;
		case 10:
			printf("#############################+++++++-------++++++++++++++++++++++++++++++++++++++++-----------+++--------------+############################\n");
			printf("############################++++++++-------+++++++++++++++++++++++++++++++++++++++++--------+++++---------------############################\n");
			printf("############################+++++---------++++++++++++++++++++++++++++++++++++++++++++-++++++++++++-------------+###########################\n");
			printf("###########################++++++---------+++++++++++++++++++++++++++++++++++++++++++++++++++++++++--------------###########################\n");
			printf("##########################++++++----------++++++++++++++++++++++++++++++++++++++++++++++++++++++++++--------------##########################\n");
			printf("#########################++++++-----------++++++++++++++++++++++++++++++++++++++++++++++++++++++++++---------------#########################\n");
			printf("#########################++++-------------++++++++++++++++++++++++++++++++++++++++++++++++++++++++++---------------+########################\n");
			break;
		case 11:
			printf("##########################++++-------------+++++++++++++++++++++++++++++++++++++++++++++++++++++++++-------------++#########################\n");
			printf("############################+++++----------+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++----------+###########################\n");
			printf("###########################+++++++++++++++###++++++++++++++++++++++++++++++++++++++++++++++++++###++++++++-------###########################\n");
			printf("###########################+++----------+#####+++++++++++++++++++++++++++++++++++++++++++++++++####++++----------+##########################\n");
			printf("##########################+++-----------+#####++++++++++++++++++++++++++++++++++++++++++++++++#####++++-----------##########################\n");
			printf("##########################++-------------######+++++++++++++++++++++++++++++++++++++++++++++++#####++++------------#########################\n");
			printf("#########################++--------------######++++++++++++++++++++++++++++++++++++++++++++++######++++------------+########################\n");
			break;
		case 12:
			printf("#########################++-------------+######++++++++++++++++++++++++++++++++++++++++++++++#######+++------------+########################\n");
			printf("##########################++++++--------+#####+++++++++++++++++++++++++++++++++++++----+++++++######++++----------+#########################\n");
			printf("##########################+++---------+#######+++++++++++++++++++++--++---+++---++------+++++-+#######++++--------+#########################\n");
			printf("##########################+++---------+######+++++++++++++++++++++++-+++---++---++------+++++++#######+++----------#########################\n");
			printf("#########################++++---------+######+++++++++++++++++++++++--++---++-----------++++++++######+++----------#########################\n");
			printf("#########################+++----------######++++++++++++++++++++++++--++----+------------+++++++######+++----------+########################\n");
			printf("########################++++----------######+++++++++++++++++++++++++--+-----+-----------++++++++#####+++-----------########################\n");
			break;
		case 13:
			printf("########################+++----------+#####++++++++++++++++++++++++++--+-----+-----------+++++++++#####++-----------+#######################\n");
			printf("########################+++----------+####+++++++++++++++++++++++++++--++-----+-----------+++--+++#####+++----------+#######################\n");
			printf("########################+++----------+####++++++++++++++++++++++++++++--++----+-----------+++---+++####+++----------+#######################\n");
			printf("########################+++----------####+++++++++++++++++++++++++++++--++-----+----------+++---++++###+++----------+#######################\n");
			printf("#######################++++---------+####+++++++++++++++++++++++++++++--++-----+----------+++----+++####++-----------#######################\n");
			printf("#######################+++----------+###++++++++++++++++++++++++++++++---++----+-----------++----++++###+++----------#######################\n");
			printf("#######################+++----------####++++++++++++++++++++++++++++++---++-----+----------+++----+++###+++----------#######################\n");
			break;
		case 14:
			printf("#######################+++---------+###++++++++++++++++++++++++++++++++--++-----+-----------++----++++###++----------#######################\n");
			printf("#######################+++---------+###++++++++++++++++++++++++++++++++--++-----------------+++---++++###+++---------+######################\n");
			printf("#######################+++---------###+++++++++++++++++++++++++++++++++--++------+----------+++----+++###+++---------+######################\n");
			printf("#######################++----------###++++++++++++++++++++++++++++++++----++-----+----------+++----++++##+++---------+######################\n");
			printf("#######################++----------###+++++++++++++++++++++++++++++++++---+------+----------++++----+++##+++----------######################\n");
			printf("######################+++----------##++++++++++++++++++++++++++++++++++---++------+---------++++----++++#+++----------######################\n");
			printf("#######################+++++----+++##++++++++++++++++++++++++++++++++++----+------+---------++++----++++##++++-------+######################\n");
			break;
		case 15:
			printf("#####################++---------+####++++++++++++++++++++++++++++++++++----+------+----------++++---++++####++---------#####################\n");
			printf("####################+-----------+###+++++++++++++++++++++++++++++++++++----+------+----------++++----++++###++----------+###################\n");
			printf("##################+------------+####+++++++++++++++++++++++++++++++++++----++-----+----------++++----++++###+++-----------+#################\n");
			printf("################++------------++####+++++++++++++++++++++++++++++++++++---+++------+---------++++----++++####++++-----------+###############\n");
			printf("##############++-----------++++####++++++++++++++++++++++++++++++++++++---+++------+---+------+++----+++++####++++++----------+#############\n");
			printf("###########++++--------++#++++#####++++++++++++++++++++++++++++++++++++---++++-----+----+-----++++---+++++####++++##+++----------###########\n");
			printf("#########++++------+######++++#####+++++++++++++++++++++++++++++++++++++--++++-----+----+-----++++---++++++####++++#####++---------+########\n");
			break;
		case 16:
			printf("######+-+++-----+#########+++#####++++++++++++++++++++++++++++++++++++++-+++++-----++---+------+++----+++++#####+++########++---------######\n");
			printf("####+++-------+###################++++++++++++++++++++++++++++++++++++++-+++++-----++---+------++++---+++++###################+---------+###\n");
			printf("#####+++++-+#####################++++++++++++++++++++++++++++++++++++++++++++++----++---++-----++++---++++-+####################++-----+####\n");
			printf("#################################++++++++++++++++++++++++++++++++++++++++++++++----+++---+-----++++---+++-++#########################++#####\n");
			printf("#################################++++++++++++++++++++++++++++++++++++++++++++++----+++--++------+++---+++++++###############################\n");
			printf("#################################++++++++++++++++++++++++++++++++++++++++++++++----++++--++----+++++--+++++++###############################\n");
			printf("################################+++++++++++++++++++++++++++++++++++++++++++++++---+++++-++++----++++--+++++++###############################\n");
			break;
		case 17:
			printf("################################+++++++++++++++++++++++++++++++++++++++++++++++--+++++++-+++++--++++--+++++++###############################\n");
			printf("#################################+++++++++++++++++++++++++++++++++++++++++++++++-+++++++-++++++-+++++-++++++################################\n");
			printf("###################################++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++-++++++-+++##################################\n");
			printf("##########################################++++++++++++++++++++++++++++++++++++++++++++++-+++++++++##########################################\n");
			printf("##########################################++++++++++++++++++++++#############+++++++++++++++++++++##########################################\n");
			printf("##########################################++++++++++++++++++++++#############++++++++++++++-------##########################################\n");
			printf("##########################################++++++++++++++++++++++#############+++++++++++----------##########################################\n");
			break;
		case 18:
			printf("###########################################+++++++++++++++++++++#############++++++++-------------##########################################\n");
			printf("###########################################+++++++---+++++++++++#############+++++++-------------+##########################################\n");
			printf("###########################################+++++++----------+++##############+++++++-------------+##########################################\n");
			printf("###########################################+++++++-------------+#############++++++++------------+##########################################\n");
			printf("###########################################+++++++-------------+#############+++++++-------------+##########################################\n");
			printf("###########################################+++++++-------------+#############++++++++------------+##########################################\n");
			printf("###########################################++++++++------------+#############++++++++------------+##########################################\n");
			break;
		case 19:
			printf("###########################################+++++++-------------##############++++++++------------+##########################################\n");
			printf("##########################################+++++++++------------+############+++++++++-------------##########################################\n");
			printf("##########################################++++------------------############++++------------------+#########################################\n");
			printf("##########################################++++++----------------############++++++----------------+#########################################\n");
			printf("##########################################++++++---------------+#############+++++----------------##########################################\n");
			printf("###########################################++++++-++-----------+#############++++++++--+---------+##########################################\n");
			printf("###########################################+++++---------------+#############+++++---------------+##########################################\n");
			break;
		case 20:
			printf("###########################################++++----------------+#############++++----------------+##########################################\n");
			printf("##########################################+++++----------------+#############+++++----------------##########################################\n");
			printf("##########################################+++++----------------+############+++++-----------------##########################################\n");
			printf("##########################################+++++----------------+############++++++----------------##########################################\n");
			printf("##########################################++++++---------------+############+++++-----------------##########################################\n");
			printf("##########################################+++++----------------+############++++++----------------##########################################\n");
			printf("##########################################++++++---------------+############++++++----------------##########################################\n");
			break;
		case 21:
			printf("##########################################++++++---------------+############+++++++---------------##########################################\n");
			printf("###########################################+++++---------------+############+++++++--------------+##########################################\n");
			printf("###########################################++++++--------------+#############++++++--------------+##########################################\n");
			printf("###########################################++++++--------------+#############+++++++-------------+##########################################\n");
			printf("###########################################+++++++-------------+#############+++++++-------------###########################################\n");
			printf("###########################################++++++--------------+#############+++++++------------+###########################################\n");
			printf("############################################++++++-------------##############++++++++-----------+###########################################\n");
			break;
		case 22:
			printf("############################################+++++++-----------+##############++++++++-----------+###########################################\n");
			printf("############################################++++++------------+###############+++++++-----------+###########################################\n");
			printf("############################################+++++++-----------+###############+++++++-----------############################################\n");
			printf("############################################+++++++-----------################+++++++----------+############################################\n");
			printf("#############################################++++++----------+################++++++++---------+############################################\n");
			printf("#############################################+++++++---------+#################++++++----------+############################################\n");
			printf("#############################################++++++----------+#################+++++++---------#############################################\n");
			break;
		case 23:
			printf("#############################################+++++++---------##################+++++++---------#############################################\n");
			printf("#############################################++++++----------##################+++++++---------#############################################\n");
			printf("#############################################+++++++---------##################+++++++---------#############################################\n");
			printf("#############################################++++++----------##################+++++++---------#############################################\n");
			printf("#############################################+++++++---------+#################++++++----------+############################################\n");
			printf("#############################################+++++++---------+#################++++++----------+############################################\n");
			printf("############################################++++++++##++++++++#################++++++##++++++--++###########################################\n");
			break;
		case 24:
			printf("#######################################################+++###############################+++################################################\n");
			printf("########################################################++################################+#################################################\n");
			printf("########################################################++################################+#################################################\n");
			printf("############################################################################################################################################\n");
			printf("############################################################################################################################################\n");
			break;
		default:
			break;
	}
}

void enline(int n, int m)
{
	if (n == 1)
	{
		for (int i = 0; i < m; i++);
		{
			printf("\n");
		}
	}
	else if (n == 2)
	{
		for (int i = 0; i < m; i++)
		{
			printf("=");
		}
		printf("\n");
	}
	else if (n == 3)
	{
		printf("\n");
		for (int i = 0; i < m; i++)
		{
			printf("=");
		}
		printf("\n");
	}
}

void SetConsoleFontSize(int size)
{
	CONSOLE_FONT_INFOEX fontInfo;
	fontInfo.cbSize = sizeof(CONSOLE_FONT_INFOEX);
	GetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &fontInfo);
	fontInfo.dwFontSize.X = 0;
	fontInfo.dwFontSize.Y = size;
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &fontInfo);
}