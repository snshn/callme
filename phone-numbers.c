/* phone-numbers v1.0.3 */

#include <stdio.h>

int area_codes[] = {

    /* ************************ */
    /* United States of America */
    /* ************************ */

    // Alabama (AL)
    205, 251, 256, 334, 659, 938,
    // Alaska (AK)
    907,
    // Arizona (AZ)
    480, 520, 602, 623, 928,
    // Arkansas (AR)
    327, 479, 501, 870,
    // California (CA)
    209, 213, 310, 323, 408, 415, 424, 442, 510, 530, 559, 562, 619, 626, 628,
    650, 657, 661, 669, 707, 714, 747, 760, 805, 818, 831, 858, 909, 916, 925,
    949, 951,
    // Colorado (CO)
    303, 719, 720, 748, 970, 983,
    // Connecticut (CT)
    203, 475, 860, 959,
    // Delaware (DE)
    302,
    // Florida (FL)
    239, 305, 321, 352, 386, 407, 561, 727, 754, 772, 786, 813, 850, 863, 904,
    941, 954,
    // Georgia (GA)
    229, 404, 470, 478, 678, 706, 762, 770, 912, 943,
    // Hawaii (HI)
    808,
    // Idaho (ID)
    208, 986,
    // Indiana (IN)
    219, 260, 317, 463, 574, 765, 812, 930,
    // Illinois (IL)
    217, 224, 309, 312, 331, 447, 464, 618, 630, 708, 730, 773, 779, 815, 847, 861, 872,
    // Iowa (IA)
    319, 515, 563, 641, 712,
    // Kansas (KS)
    316, 620, 785, 913,
    // Kentucky (KY)
    270, 364, 502, 606, 859,
    // Louisiana (LA)
    225, 318, 337, 504, 985,
    // Maine (ME)
    207,
    // Maryland (MD)
    227, 240, 301, 410, 443, 667,
    // Massachusetts (MA)
    339, 351, 413, 508, 617, 774, 781, 857, 978,
    // Michigan (MI)
    231, 248, 269, 313, 517, 586, 616, 734, 810, 906, 947, 989,
    // Minnesota (MN)
    218, 320, 507, 612, 651, 763, 924, 952,
    // Mississippi (MS)
    228, 601, 662, 769,
    // Missouri (MO)
    235, 314, 417, 557, 573, 636, 660, 816, 975,
    // Montana (MO)
    406,
    // Nebraska (NE)
    308, 402, 531,
    // Nevada (NV)
    702, 725, 775,
    // New Hampshire (NH)
    603,
    // New Jersey (NJ)
    201, 551, 609, 640, 732, 848, 856, 862, 908, 973,
    // New Mexico (NM)
    505, 575,
    // New York (NY)
    212, 315, 347, 516, 518, 585, 607, 631, 646, 716, 718, 838, 845, 914, 917, 929,
    // North Carolina (NC)
    252, 336, 472, 704, 743, 828, 910, 919, 980, 984,
    // North Dakota (ND)
    701,
    // Ohio (OH)
    216, 220, 234, 283, 326, 330, 380, 419, 436, 440, 513, 567, 614, 740, 937,
    // Oklahoma (OK)
    405, 539, 572, 580, 918,
    // Oregon (OR)
    458, 503, 541, 971,
    // Pennsylvania (PA)
    215, 267, 272, 412, 484, 570, 610, 717, 724, 814, 878,
    // Rhode Island (RI)
    401,
    // South Carolina (SC)
    803, 821, 839, 843, 854, 864,
    // South Dakota (SD)
    605,
    // Texas (TX)
    210, 214, 254, 281, 325, 346, 361, 409, 430, 432, 469, 512, 682, 713, 726,
    737, 806, 817, 830, 832, 903, 915, 936, 940, 945, 956, 972, 979,
    // Tennessee (TN)
    423, 615, 629, 731, 865, 901, 931,
    // Utah (UT)
    385, 435, 801,
    // Veromont (VT)
    802,
    // Virginia (VA)
    276, 434, 540, 571, 703, 757, 804, 826, 948,
    // Washington (WA)
    202, 206, 253, 360, 425, 509, 564,
    // West Virginia (WV)
    304, 681,
    // Wisconsin (WI)
    262, 274, 353, 414, 534, 608, 715, 920,
    // Wyoming (WY)
    307,

    /* ***** */
    /* Misc. */
    /* ***** */

    // Toll-free
    800, 833, 844, 855, 866, 877, 888,

    /* ****** */
    /* Canada */
    /* ****** */

    // Alberta
    403, 587, 780, 825, 368,
    // British Columbia
    250, 604, 778, 236, 672,
    // Manitoba
    204, 431, 584,
    // New Brunswick
    506, 428,
    // Newfoundland and Labrador
    709, 879,
    // Northwest Territories
    867,
    // Nova Scotia
    902, 782,
    // Nunavut
    867,
    // Ontario
    204, 416, 431, 437, 519, 548, 613, 647, 683, 705, 753, 807, 905, 226, 249,
    289, 343, 365, 437, 368, 343, 382,
    // Prince Edward Island
    902, 782,
    // Quebec
    418, 438, 450, 514, 579, 581, 819, 873, 354, 263, 468,
    // Saskatchewan
    306, 639, 474,
    // Yukon
    867,

};

void
main(int argc, char** argv)
{
    int i = 0, ilen = 0, area_code = 0, number = 0;
    ilen = sizeof(area_codes) / sizeof(typeof(*area_codes));

    for (; i < ilen; i++) {
        area_code = area_codes[i];
        for (number = 2000000; number < 9999999; number++) {
            printf("%d%d\n", area_code, number);
        }
    }
}
