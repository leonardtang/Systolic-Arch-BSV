int multiply(int x, int y)
{
    int ret = 0;
    for (int i = 0; i < 32; i++)
    {
        if (((y >> i) & 1) == 1)
        {
            ret += (x << i);
        }
    }
    return ret;
}

int arrEquals(int a[16][16], int b[16][16])
{
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            if (a[i][j] != b[i][j])
            {
                return 0;
            }
        }
    }
    return 1;
}
int exit(int c);
int a[16][16];
int b[16][16];
int c[16][16];
int expected[16][16];
int main()
{

    // int expected[16][16] = {
    //     {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
    //     {120, 136, 152, 168, 184, 200, 216, 232, 248, 264, 280, 296, 312, 328, 344, 360},
    //     {240, 272, 304, 336, 368, 400, 432, 464, 496, 528, 560, 592, 624, 656, 688, 720},
    //     {360, 408, 456, 504, 552, 600, 648, 696, 744, 792, 840, 888, 936, 984, 1032, 1080},
    //     {480, 544, 608, 672, 736, 800, 864, 928, 992, 1056, 1120, 1184, 1248, 1312, 1376, 1440},
    //     {600, 680, 760, 840, 920, 1000, 1080, 1160, 1240, 1320, 1400, 1480, 1560, 1640, 1720, 1800},
    //     {720, 816, 912, 1008, 1104, 1200, 1296, 1392, 1488, 1584, 1680, 1776, 1872, 1968, 2064, 2160},
    //     {840, 952, 1064, 1176, 1288, 1400, 1512, 1624, 1736, 1848, 1960, 2072, 2184, 2296, 2408, 2520},
    //     {960, 1088, 1216, 1344, 1472, 1600, 1728, 1856, 1984, 2112, 2240, 2368, 2496, 2624, 2752, 2880},
    //     {1080, 1224, 1368, 1512, 1656, 1800, 1944, 2088, 2232, 2376, 2520, 2664, 2808, 2952, 3096, 3240},
    //     {1200, 1360, 1520, 1680, 1840, 2000, 2160, 2320, 2480, 2640, 2800, 2960, 3120, 3280, 3440, 3600},
    //     {1320, 1496, 1672, 1848, 2024, 2200, 2376, 2552, 2728, 2904, 3080, 3256, 3432, 3608, 3784, 3960},
    //     {1440, 1632, 1824, 2016, 2208, 2400, 2592, 2784, 2976, 3168, 3360, 3552, 3744, 3936, 4128, 4320},
    //     {1560, 1768, 1976, 2184, 2392, 2600, 2808, 3016, 3224, 3432, 3640, 3848, 4056, 4264, 4472, 4680},
    //     {1680, 1904, 2128, 2352, 2576, 2800, 3024, 3248, 3472, 3696, 3920, 4144, 4368, 4592, 4816, 5040},
    //     {1800, 2040, 2280, 2520, 2760, 3000, 3240, 3480, 3720, 3960, 4200, 4440, 4680, 4920, 5160, 5400},
    // };

    expected[0][0] = 0;
    expected[0][1] = 0;
    expected[0][2] = 0;
    expected[0][3] = 0;
    expected[0][4] = 0;
    expected[0][5] = 0;
    expected[0][6] = 0;
    expected[0][7] = 0;
    expected[0][8] = 0;
    expected[0][9] = 0;
    expected[0][10] = 0;
    expected[0][11] = 0;
    expected[0][12] = 0;
    expected[0][13] = 0;
    expected[0][14] = 0;
    expected[0][15] = 0;
    expected[1][0] = 120;
    expected[1][1] = 136;
    expected[1][2] = 152;
    expected[1][3] = 168;
    expected[1][4] = 184;
    expected[1][5] = 200;
    expected[1][6] = 216;
    expected[1][7] = 232;
    expected[1][8] = 248;
    expected[1][9] = 264;
    expected[1][10] = 280;
    expected[1][11] = 296;
    expected[1][12] = 312;
    expected[1][13] = 328;
    expected[1][14] = 344;
    expected[1][15] = 360;
    expected[2][0] = 240;
    expected[2][1] = 272;
    expected[2][2] = 304;
    expected[2][3] = 336;
    expected[2][4] = 368;
    expected[2][5] = 400;
    expected[2][6] = 432;
    expected[2][7] = 464;
    expected[2][8] = 496;
    expected[2][9] = 528;
    expected[2][10] = 560;
    expected[2][11] = 592;
    expected[2][12] = 624;
    expected[2][13] = 656;
    expected[2][14] = 688;
    expected[2][15] = 720;
    expected[3][0] = 360;
    expected[3][1] = 408;
    expected[3][2] = 456;
    expected[3][3] = 504;
    expected[3][4] = 552;
    expected[3][5] = 600;
    expected[3][6] = 648;
    expected[3][7] = 696;
    expected[3][8] = 744;
    expected[3][9] = 792;
    expected[3][10] = 840;
    expected[3][11] = 888;
    expected[3][12] = 936;
    expected[3][13] = 984;
    expected[3][14] = 1032;
    expected[3][15] = 1080;
    expected[4][0] = 480;
    expected[4][1] = 544;
    expected[4][2] = 608;
    expected[4][3] = 672;
    expected[4][4] = 736;
    expected[4][5] = 800;
    expected[4][6] = 864;
    expected[4][7] = 928;
    expected[4][8] = 992;
    expected[4][9] = 1056;
    expected[4][10] = 1120;
    expected[4][11] = 1184;
    expected[4][12] = 1248;
    expected[4][13] = 1312;
    expected[4][14] = 1376;
    expected[4][15] = 1440;
    expected[5][0] = 600;
    expected[5][1] = 680;
    expected[5][2] = 760;
    expected[5][3] = 840;
    expected[5][4] = 920;
    expected[5][5] = 1000;
    expected[5][6] = 1080;
    expected[5][7] = 1160;
    expected[5][8] = 1240;
    expected[5][9] = 1320;
    expected[5][10] = 1400;
    expected[5][11] = 1480;
    expected[5][12] = 1560;
    expected[5][13] = 1640;
    expected[5][14] = 1720;
    expected[5][15] = 1800;
    expected[6][0] = 720;
    expected[6][1] = 816;
    expected[6][2] = 912;
    expected[6][3] = 1008;
    expected[6][4] = 1104;
    expected[6][5] = 1200;
    expected[6][6] = 1296;
    expected[6][7] = 1392;
    expected[6][8] = 1488;
    expected[6][9] = 1584;
    expected[6][10] = 1680;
    expected[6][11] = 1776;
    expected[6][12] = 1872;
    expected[6][13] = 1968;
    expected[6][14] = 2064;
    expected[6][15] = 2160;
    expected[7][0] = 840;
    expected[7][1] = 952;
    expected[7][2] = 1064;
    expected[7][3] = 1176;
    expected[7][4] = 1288;
    expected[7][5] = 1400;
    expected[7][6] = 1512;
    expected[7][7] = 1624;
    expected[7][8] = 1736;
    expected[7][9] = 1848;
    expected[7][10] = 1960;
    expected[7][11] = 2072;
    expected[7][12] = 2184;
    expected[7][13] = 2296;
    expected[7][14] = 2408;
    expected[7][15] = 2520;
    expected[8][0] = 960;
    expected[8][1] = 1088;
    expected[8][2] = 1216;
    expected[8][3] = 1344;
    expected[8][4] = 1472;
    expected[8][5] = 1600;
    expected[8][6] = 1728;
    expected[8][7] = 1856;
    expected[8][8] = 1984;
    expected[8][9] = 2112;
    expected[8][10] = 2240;
    expected[8][11] = 2368;
    expected[8][12] = 2496;
    expected[8][13] = 2624;
    expected[8][14] = 2752;
    expected[8][15] = 2880;
    expected[9][0] = 1080;
    expected[9][1] = 1224;
    expected[9][2] = 1368;
    expected[9][3] = 1512;
    expected[9][4] = 1656;
    expected[9][5] = 1800;
    expected[9][6] = 1944;
    expected[9][7] = 2088;
    expected[9][8] = 2232;
    expected[9][9] = 2376;
    expected[9][10] = 2520;
    expected[9][11] = 2664;
    expected[9][12] = 2808;
    expected[9][13] = 2952;
    expected[9][14] = 3096;
    expected[9][15] = 3240;
    expected[10][0] = 1200;
    expected[10][1] = 1360;
    expected[10][2] = 1520;
    expected[10][3] = 1680;
    expected[10][4] = 1840;
    expected[10][5] = 2000;
    expected[10][6] = 2160;
    expected[10][7] = 2320;
    expected[10][8] = 2480;
    expected[10][9] = 2640;
    expected[10][10] = 2800;
    expected[10][11] = 2960;
    expected[10][12] = 3120;
    expected[10][13] = 3280;
    expected[10][14] = 3440;
    expected[10][15] = 3600;
    expected[11][0] = 1320;
    expected[11][1] = 1496;
    expected[11][2] = 1672;
    expected[11][3] = 1848;
    expected[11][4] = 2024;
    expected[11][5] = 2200;
    expected[11][6] = 2376;
    expected[11][7] = 2552;
    expected[11][8] = 2728;
    expected[11][9] = 2904;
    expected[11][10] = 3080;
    expected[11][11] = 3256;
    expected[11][12] = 3432;
    expected[11][13] = 3608;
    expected[11][14] = 3784;
    expected[11][15] = 3960;
    expected[12][0] = 1440;
    expected[12][1] = 1632;
    expected[12][2] = 1824;
    expected[12][3] = 2016;
    expected[12][4] = 2208;
    expected[12][5] = 2400;
    expected[12][6] = 2592;
    expected[12][7] = 2784;
    expected[12][8] = 2976;
    expected[12][9] = 3168;
    expected[12][10] = 3360;
    expected[12][11] = 3552;
    expected[12][12] = 3744;
    expected[12][13] = 3936;
    expected[12][14] = 4128;
    expected[12][15] = 4320;
    expected[13][0] = 1560;
    expected[13][1] = 1768;
    expected[13][2] = 1976;
    expected[13][3] = 2184;
    expected[13][4] = 2392;
    expected[13][5] = 2600;
    expected[13][6] = 2808;
    expected[13][7] = 3016;
    expected[13][8] = 3224;
    expected[13][9] = 3432;
    expected[13][10] = 3640;
    expected[13][11] = 3848;
    expected[13][12] = 4056;
    expected[13][13] = 4264;
    expected[13][14] = 4472;
    expected[13][15] = 4680;
    expected[14][0] = 1680;
    expected[14][1] = 1904;
    expected[14][2] = 2128;
    expected[14][3] = 2352;
    expected[14][4] = 2576;
    expected[14][5] = 2800;
    expected[14][6] = 3024;
    expected[14][7] = 3248;
    expected[14][8] = 3472;
    expected[14][9] = 3696;
    expected[14][10] = 3920;
    expected[14][11] = 4144;
    expected[14][12] = 4368;
    expected[14][13] = 4592;
    expected[14][14] = 4816;
    expected[14][15] = 5040;
    expected[15][0] = 1800;
    expected[15][1] = 2040;
    expected[15][2] = 2280;
    expected[15][3] = 2520;
    expected[15][4] = 2760;
    expected[15][5] = 3000;
    expected[15][6] = 3240;
    expected[15][7] = 3480;
    expected[15][8] = 3720;
    expected[15][9] = 3960;
    expected[15][10] = 4200;
    expected[15][11] = 4440;
    expected[15][12] = 4680;
    expected[15][13] = 4920;
    expected[15][14] = 5160;
    expected[15][15] = 5400;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            a[i][j] = i;
            b[i][j] = i + j;
        }
    }

    int sum;
    for (int i = 0; i < 16; i++)
    {
        for (int j = 0; j < 16; j++)
        {
            sum = 0;
            for (int k = 0; k < 16; k++)
            {
                sum += multiply(a[i][k], b[k][j]);
            }
            c[i][j] = sum;
        }
    }

    if (arrEquals(expected, c))
    {
        exit(0);
    }
    else
    {
        exit(1);
    }
    return 0;
}
