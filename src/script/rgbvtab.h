int irand[1024] = {
	41,35,190,900,737,364,214,686,
	338,912,585,497,753,443,745,491,
	947,678,731,316,647,268,830,153,
	292,94,13,284,262,439,327,222,
	435,274,845,456,67,699,651,678,
	31,259,602,637,265,568,805,543,
	605,724,971,1020,918,1013,581,571,
	531,525,905,778,28,987,686,818,
	288,410,848,750,832,120,822,253,
	530,585,818,1014,670,381,841,476,
	173,335,532,498,324,576,870,208,
	619,708,560,695,50,59,417,34,
	758,34,401,157,737,395,543,986,
	176,714,665,258,953,882,925,73,
	300,640,126,709,153,213,1001,128,
	434,1002,969,204,851,191,103,214,
	959,788,726,126,557,220,654,358,
	387,495,599,73,97,1023,105,143,
	609,717,465,542,669,156,278,370,
	882,742,29,496,900,847,330,631,
	2,215,1000,57,44,339,971,969,
	530,798,51,116,158,780,500,469,
	724,671,212,932,89,638,53,975,
	818,290,756,716,719,467,656,557,
	72,979,399,373,998,473,285,298,
	997,448,503,43,120,129,135,836,
	270,607,80,768,724,865,653,958,
	123,5,21,7,827,563,642,287,
	280,624,146,474,100,340,462,945,
	133,318,361,533,1016,70,106,4,
	918,627,782,985,790,47,359,360,
	724,247,842,586,720,599,872,118,
	762,790,443,785,173,686,292,392,
	377,254,82,219,805,579,485,828,
	244,837,979,472,552,462,523,245,
	453,352,89,573,919,39,906,345,
	630,45,464,706,969,205,616,212,
	73,106,121,805,520,609,320,20,
	945,315,362,165,273,296,449,652,
	214,681,779,135,919,396,303,241,
	21,29,410,661,193,667,225,960,
	638,745,936,922,167,134,706,437,
	596,191,666,999,217,803,465,597,
	912,568,808,465,217,108,673,102,
	94,334,481,48,668,766,985,113,
	415,994,933,226,780,155,692,839,
	869,568,554,838,649,169,898,121,
	378,374,120,706,355,689,550,223,
	986,553,877,318,98,224,662,274,
	820,703,569,422,319,649,350,1009,
	365,526,739,620,808,673,30,288,
	541,459,706,3,831,577,519,900,
	783,276,773,869,283,808,97,969,
	197,743,300,142,838,566,776,732,
	755,168,909,254,958,498,235,113,
	255,160,464,571,117,262,140,382,
	647,120,371,77,976,190,130,702,
	987,962,582,65,299,908,1018,816,
	639,624,752,679,340,902,818,661,
	426,859,360,531,779,230,1020,1013,
	714,702,893,415,905,138,577,27,
	509,184,847,872,758,626,123,20,
	665,973,979,781,240,68,58,948,
	934,870,339,51,267,971,673,16,
	94,588,492,259,844,371,230,517,
	180,305,526,170,173,719,213,176,
	458,295,255,472,925,276,333,1012,
	633,551,345,322,124,924,705,760,
	973,396,391,32,547,612,952,678,
	391,149,76,688,602,141,334,45,
	665,743,317,689,608,734,945,896,
	429,264,321,489,871,577,677,469,
	415,740,792,159,789,578,512,38,
	510,588,977,33,4,915,559,435,
	911,371,851,320,579,650,175,638,
	202,367,213,719,979,417,149,462,
	602,190,869,39,298,1014,775,173,
	929,446,613,934,436,969,960,105,
	818,308,521,300,77,257,399,279,
	854,198,987,157,968,934,728,11,
	648,385,824,97,875,616,530,610,
	1017,596,464,999,881,279,584,888,
	13,658,41,541,390,809,921,882,
	219,116,540,1018,335,567,952,437,
	688,917,855,757,223,128,620,877,
	141,884,985,907,323,869,529,520,
	165,502,121,957,759,491,21,440,
	224,481,864,399,622,828,379,1012,
	859,354,138,394,143,295,860,503,
	741,135,586,315,818,667,865,832,
	900,966,451,433,423,560,74,16,
	750,629,879,515,303,158,618,1007,
	272,336,923,456,385,835,41,40,
	138,246,745,926,327,673,641,584,
	817,108,717,932,670,222,385,675,
	652,920,528,511,922,67,205,719,
	87,455,336,345,703,445,28,39,
	771,40,895,349,905,863,953,585,
	564,78,608,316,741,734,258,408,
	834,690,781,555,950,20,748,443,
	440,303,627,482,849,894,637,29,
	984,388,467,287,513,190,848,619,
	790,982,835,545,899,281,21,280,
	152,299,556,814,907,505,782,476,
	444,496,970,270,573,877,660,561,
	146,116,943,397,181,676,400,469,
	94,874,64,508,384,118,2,331,
	535,107,822,433,289,987,893,90,
	234,626,542,130,653,113,936,140,
	696,94,729,334,943,250,703,944,
	148,884,29,117,485,476,528,600,
	838,474,498,603,641,928,639,604,
	971,285,566,489,841,372,258,341,
	978,172,282,779,759,937,806,803,
	576,91,419,307,441,565,904,104,
	941,737,554,469,434,818,605,266,
	741,90,220,745,887,349,491,693,
	361,197,58,364,659,664,781,855,
	1003,647,922,991,516,616,434,930,
	725,230,932,198,188,119,351,397,
	707,655,726,298,545,788,425,724,
	260,17,513,792,653,430,699,883,
	28,608,202,32,975,861,470,47,
	69,339,553,983,424,345,460,269,
	1002,550,237,597,590,384,900,985,
	43,504,55,696,749,213,634,672,
	348,78,1018,415,33,508,316,566,
	901,398,385,944,637,959,494,177,
};
int uranx[1024] = {
	6,3,8,0,6,7,6,8,
	0,4,1,6,8,8,5,0,
	4,1,8,0,0,7,2,4,
	0,6,3,2,2,3,0,3,
	0,6,1,0,7,0,6,2,
	7,7,2,5,2,6,7,6,
	2,0,7,6,1,8,6,7,
	3,6,4,0,0,1,5,2,
	0,2,8,8,5,4,5,4,
	5,3,7,8,6,3,2,4,
	1,5,3,4,5,2,8,6,
	7,7,5,5,1,6,7,0,
	0,5,4,2,6,0,3,0,
	6,8,2,4,2,0,8,2,
	7,2,0,2,7,7,2,0,
	2,1,6,8,3,5,2,8,
	8,2,0,4,8,4,7,4,
	6,4,0,6,8,5,8,6,
	0,7,7,8,8,8,8,0,
	5,2,6,3,0,2,4,3,
	8,7,8,7,1,3,6,3,
	7,6,5,4,7,8,4,6,
	1,5,2,3,2,7,3,4,
	6,3,5,8,7,1,0,5,
	1,0,0,7,1,5,7,2,
	4,5,3,4,7,1,4,8,
	0,5,0,4,8,6,8,6,
	3,8,3,8,1,6,4,7,
	7,2,7,7,4,7,0,7,
	1,8,7,1,8,2,0,2,
	2,7,7,2,3,8,7,5,
	5,2,8,2,3,5,4,3,
	0,3,3,2,0,6,2,3,
	1,5,3,3,2,1,3,4,
	3,5,3,4,6,4,4,1,
	2,6,1,3,2,0,4,6,
	7,7,8,5,4,0,0,4,
	8,3,4,5,7,7,2,2,
	1,7,4,2,2,6,0,4,
	1,6,0,3,1,5,1,7,
	3,1,6,2,6,5,4,7,
	6,2,5,6,4,1,0,5,
	1,7,6,3,3,8,0,6,
	2,3,4,2,6,7,0,1,
	8,1,7,5,4,8,2,7,
	0,8,1,2,3,3,5,1,
	0,3,6,7,1,2,5,6,
	3,2,5,3,2,1,5,0,
	4,2,4,0,3,0,2,0,
	1,3,6,0,4,1,1,6,
	3,8,2,3,8,8,1,5,
	3,6,0,7,3,0,5,7,
	2,1,7,8,2,3,2,0,
	5,3,4,4,7,6,6,0,
	7,3,1,0,8,2,0,3,
	2,0,0,6,5,8,4,4,
	2,3,2,8,8,7,1,3,
	5,7,1,3,2,8,2,0,
	0,7,7,7,3,2,5,0,
	7,5,3,2,3,4,7,6,
	7,5,7,1,0,1,5,4,
	5,5,8,3,0,7,0,3,
	5,4,2,3,5,3,0,7,
	8,6,1,6,2,8,2,4,
	8,4,6,1,4,8,5,0,
	0,3,4,1,0,2,0,8,
	2,3,8,8,8,7,6,5,
	4,6,0,0,7,8,2,1,
	6,3,0,3,8,8,7,5,
	2,2,1,3,2,3,2,4,
	4,5,5,1,4,6,8,3,
	4,0,2,5,4,7,4,1,
	3,1,2,1,1,0,2,4,
	6,7,3,7,6,8,7,6,
	0,2,0,1,4,2,1,3,
	5,8,5,3,6,1,4,6,
	0,2,3,8,8,6,5,4,
	5,1,5,8,3,1,7,5,
	4,4,8,5,3,7,5,4,
	7,8,0,6,1,3,7,0,
	6,3,5,1,8,8,5,0,
	4,0,2,4,3,7,3,6,
	5,2,7,6,2,5,4,7,
	1,1,5,6,1,0,0,4,
	6,0,1,2,0,2,2,5,
	5,2,8,0,5,0,3,0,
	7,8,4,1,4,6,2,2,
	2,1,1,3,3,5,6,2,
	0,8,2,5,8,4,2,7,
	4,7,7,4,1,6,1,2,
	7,3,6,8,2,4,2,0,
	1,1,5,1,2,3,3,7,
	8,5,0,5,3,2,5,1,
	3,3,5,3,8,7,4,1,
	3,7,1,8,8,0,7,1,
	6,4,0,0,2,0,6,2,
	4,5,6,5,1,4,7,2,
	6,8,5,2,0,4,6,4,
	8,3,4,1,5,7,0,5,
	7,5,1,1,8,0,2,0,
	7,5,4,1,0,6,0,5,
	8,2,2,8,4,3,6,1,
	1,0,3,4,5,7,4,4,
	2,7,1,7,7,6,5,3,
	8,1,5,6,7,7,7,6,
	3,1,0,0,1,6,5,8,
	7,8,4,6,1,2,4,6,
	0,4,8,0,3,6,1,4,
	2,8,2,4,0,3,1,0,
	4,5,3,1,2,4,5,4,
	4,2,5,7,5,5,1,3,
	8,8,3,0,1,3,5,6,
	5,4,5,8,6,1,7,3,
	4,3,7,1,5,4,4,7,
	6,0,3,7,1,7,8,5,
	8,5,3,0,5,2,5,3,
	3,4,6,5,4,8,5,0,
	8,3,6,4,2,7,5,4,
	1,3,4,5,1,3,1,3,
	7,5,8,1,2,7,5,7,
	4,4,0,8,1,4,3,6,
	0,4,4,7,2,4,8,3,
	5,3,6,8,6,2,1,6,
	5,5,0,4,6,5,1,2,
	2,0,5,1,4,3,7,6,
	3,3,5,0,6,4,4,3,
	4,1,6,7,0,8,1,6,
	0,6,5,3,2,8,8,8,
};
int urany[1024] = {
	8,8,0,8,-16,0,16,8,
	-8,-16,0,0,0,0,-8,-16,
	0,8,-16,-8,8,0,0,-8,
	-16,0,0,8,8,0,0,-8,
	16,-8,-8,-8,16,0,0,0,
	16,0,8,-8,0,16,8,0,
	-8,-8,0,-16,8,16,8,8,
	0,-16,8,16,-8,0,-8,-8,
	-8,-8,8,8,0,16,-8,-8,
	16,-8,8,0,-16,0,0,-8,
	0,-16,16,-8,-8,16,8,8,
	0,16,0,-16,8,0,-16,0,
	0,-8,0,-16,16,16,-8,8,
	0,-8,8,-8,16,-8,8,-16,
	8,16,16,0,8,0,-8,0,
	0,0,-8,-8,-8,-8,-8,-8,
	-8,8,-8,-8,8,8,8,-8,
	-8,0,-8,-16,-8,-8,8,16,
	8,-16,-16,8,0,8,0,-8,
	8,8,-8,8,8,8,0,8,
	-8,0,8,-8,8,0,-8,0,
	0,8,16,0,8,-8,-8,0,
	16,0,-16,-8,8,-8,8,8,
	16,0,0,8,-8,16,-8,-8,
	0,-16,0,8,0,8,-8,16,
	0,8,-16,0,8,-8,8,8,
	-8,0,8,8,0,8,-16,-16,
	-16,-16,0,-8,8,-16,-8,16,
	8,-16,0,8,-8,-8,0,-8,
	0,0,-16,0,-8,0,16,-16,
	16,-8,8,-16,-8,8,-8,0,
	16,0,8,0,0,0,16,-8,
	0,-16,-8,0,-8,8,16,8,
	0,-16,0,-16,-8,8,-16,8,
	16,0,8,-8,-8,0,-8,8,
	0,-8,-16,8,16,-16,16,0,
	-8,8,-8,-8,0,16,0,-8,
	-16,8,8,-16,0,-16,-16,-8,
	8,0,0,16,8,-8,0,-16,
	0,8,-16,-8,8,16,16,16,
	-8,0,8,0,8,0,8,-8,
	-8,8,-8,-8,-8,-8,-8,0,
	-16,0,0,0,8,-8,-8,0,
	16,-8,-16,8,0,8,-8,16,
	-16,-16,16,8,0,-8,0,-16,
	16,-16,-8,16,-8,0,0,-16,
	0,0,8,-8,16,0,-8,8,
	8,-8,8,8,0,8,0,0,
	-8,-16,8,-8,16,16,8,-8,
	16,-8,8,-8,16,8,8,-16,
	8,0,8,8,-8,-8,-8,0,
	0,-8,-8,-8,-8,0,0,-8,
	-16,-8,8,8,0,-16,-8,8,
	-8,-8,0,-8,-16,-16,0,-16,
	-8,8,-8,0,-8,-16,8,-8,
	0,-16,0,0,-8,8,8,-8,
	-8,8,16,-8,-8,0,16,0,
	0,8,0,-8,8,-16,0,16,
	8,-8,8,0,8,8,-8,-16,
	0,0,-8,8,-8,8,0,16,
	-8,8,0,0,0,-8,0,0,
	-8,-16,16,0,8,-16,8,0,
	16,-16,-8,8,0,16,8,-8,
	-8,0,8,16,8,16,8,0,
	-16,0,8,8,0,0,8,-8,
	-8,0,-8,8,-8,16,8,-8,
	-8,0,0,16,-8,0,16,8,
	8,16,8,-8,8,16,8,-8,
	8,0,8,-8,8,0,8,-16,
	0,-8,-16,8,-8,8,-16,0,
	8,0,8,-8,8,8,16,0,
	8,16,-16,-8,0,-16,-8,0,
	8,8,0,8,16,0,8,0,
	-8,-8,0,-16,8,-8,16,8,
	0,-8,-16,0,8,-16,16,8,
	-8,8,16,8,8,16,8,0,
	8,0,8,0,8,0,-8,0,
	8,-16,0,0,8,0,0,8,
	0,8,-16,0,-16,0,0,-8,
	-8,8,-16,16,8,16,8,0,
	-8,0,-8,16,0,-8,0,16,
	-8,8,16,0,-8,0,16,-8,
	0,-16,0,0,0,0,16,-8,
	0,-8,0,16,0,0,16,-16,
	-8,-8,-8,0,-8,0,8,16,
	0,8,8,16,-8,-8,-8,-16,
	8,0,8,16,8,-16,0,8,
	8,8,-8,-16,0,0,8,-8,
	8,0,-8,-8,-16,8,0,8,
	0,0,16,-8,8,16,-8,-8,
	-16,-16,16,-16,0,0,-8,8,
	16,8,-8,0,0,8,-16,-8,
	-16,8,16,-8,8,16,16,16,
	16,0,-8,-8,16,-8,-8,-8,
	-8,8,0,0,0,-16,-16,-8,
	-8,-8,-8,-16,16,-8,-8,0,
	-8,8,16,0,-16,8,0,-16,
	-16,8,-16,8,0,-16,-8,-16,
	0,8,-8,0,8,16,8,0,
	-16,8,0,0,-8,-16,8,-8,
	0,16,-8,0,8,8,-8,8,
	-8,-8,8,-8,8,8,0,-8,
	16,-8,8,16,0,-8,16,-8,
	8,0,8,-8,-16,-16,-8,8,
	8,16,-8,8,-8,8,8,0,
	-16,-8,16,-8,0,16,8,16,
	16,-8,8,0,-8,0,8,8,
	8,16,16,-8,8,0,-8,0,
	0,0,8,-8,8,8,-8,8,
	0,-8,16,8,8,8,-8,8,
	-16,8,-16,-8,-16,8,0,8,
	0,0,16,-16,-16,16,0,0,
	8,16,-8,-16,-16,-16,-8,-16,
	-8,8,-8,-16,8,-8,-16,0,
	-8,-16,-8,16,-8,-8,8,8,
	-8,0,16,-8,-8,16,0,-8,
	-8,-16,-16,-8,0,8,0,-16,
	8,8,-8,-8,-8,-8,-8,8,
	8,-8,16,8,-16,-8,8,0,
	-8,-8,8,8,8,8,8,8,
	8,0,-8,-16,-8,-8,-16,-8,
	-8,16,-8,0,-8,8,16,0,
	0,-8,-16,0,8,8,8,-16,
	0,16,-8,8,-8,16,8,8,
	16,0,8,-8,8,0,8,-16,
	-16,0,16,16,16,8,-8,0,
	16,-8,-8,16,0,-8,8,0,
	0,-8,0,-8,-8,-16,-8,-8,
};