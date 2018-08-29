#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
void main(void)
{
int gd=DETECT,gm;
   int poly[10];
   int poly1[10];
   int poly2[10];
   int poly3[10];
   int poly4[10];
   int poly5[10];
   int poly6[10];
   int poly7[10];
   int poly8[28];
   int poly9[28];
   int poly10[28];
   int poly11[28];
   int poly12[28];
   int poly13[28];
   int poly14[28];
   int poly15[28];
   int poly16[40];
   int poly17[81];
   int poly18[40];
   int poly19[81];
   int poly20[10];
   int poly21[10];
   int poly22[10];
   int poly23[10];
   int poly24[10];
   int poly25[22];
   int poly26[10];
   int poly27[10];
   int poly28[8];
   int poly29[14];
   int poly30[10];
   int poly31[10];
   int poly32[10];

initgraph(&gd,&gm,"C:\\TC\\bgi");
setbkcolor(GREEN);


					     //colour of sky
poly20[0]=0;
poly20[1]=300;

poly20[2]=640;
poly20[3]=300;

poly20[4]=640;
poly20[5]=-1;

poly20[6]=-1;
poly20[7]=-1;

poly20[8]=poly20[0];
poly20[9]=poly20[1];

setfillstyle(1,CYAN);
fillpoly(5,poly20);
drawpoly(5,poly20);

					    //colour of ground
  poly21[0]=-1;
  poly21[1]=298;

  poly21[2]=640;
  poly21[3]=298;

  poly21[4]=640;
  poly21[5]=600;

  poly21[6]=-1;
  poly21[7]=600;

  poly21[8]=poly21[0];
  poly21[9]=poly21[1];

  setfillstyle(1,WIDE_DOT_FILL);
  fillpoly(5,poly21);
  drawpoly(5,poly21);


			       // house roof
  poly26[0]=460;
  poly26[1]=330;

  poly26[2]=580;
  poly26[3]=330;

  poly26[4]=610;
  poly26[5]=360;

  poly26[6]=490;
  poly26[7]=360;

  poly26[8]=poly26[0];
  poly26[9]=poly26[1];

   setfillstyle(1,RED);
   fillpoly(5,poly26);
   drawpoly(5,poly26);

						//house rectangle
   poly27[0]=495;
   poly27[1]=360;

   poly27[2]=605;
   poly27[3]=360;

   poly27[4]=605;
   poly27[5]=410;

   poly27[6]=495;
   poly27[7]=410;

   poly27[8]=poly27[0];
   poly27[9]=poly27[1];

   setfillstyle(1,BLUE);
   fillpoly(5,poly27);
   drawpoly(5,poly27);


   poly28[0]=460;
   poly28[1]=330;                          //house triangle

   poly28[2]=440;
   poly28[3]=350;

   poly28[4]=481;
   poly28[5]=350;

   poly28[6]=poly28[0];
   poly28[7]=poly28[1];

   setfillstyle(1,RED);
   fillpoly(4,poly28);
   drawpoly(4,poly28);


   poly29[0]=445;                       //house 2nd rectangle
   poly29[1]=350;

   poly29[2]=445;
   poly29[3]=400;

   poly29[4]=495;
   poly29[5]=410;

   poly29[6]=495;
   poly29[7]=360;

   poly29[8]=490;
   poly29[9]=360;

   poly29[10]=481;
   poly29[11]=350;

   poly29[12]=poly29[0];
   poly29[13]=poly29[1];

   setfillstyle(1,BLUE);
   fillpoly(7,poly29);
   drawpoly(7,poly29);


   poly30[0]=550;                   //house 1st door rectangle
   poly30[1]=410;

   poly30[2]=550;
   poly30[3]=370;

   poly30[4]=570;
   poly30[5]=370;

   poly30[6]=570;
   poly30[7]=410;

   poly30[8]=poly30[0];
   poly30[9]=poly30[1];

   setfillstyle(1,GREEN);
   fillpoly(5,poly30);
   drawpoly(5,poly30);


   poly31[0]=460;                     //house 2nd door rectangle

   poly31[1]=403;

   poly31[2]=460;
   poly31[3]=370;

   poly31[4]=480;
   poly31[5]=373;

   poly31[6]=480;
   poly31[7]=407;

   poly31[8]=poly31[0];
   poly31[9]=poly31[1];

   setfillstyle(1,GREEN);
   fillpoly(5,poly31);
   drawpoly(5,poly31);

   setfillstyle(1,GREEN);
   circle(460,341,3);
   floodfill(460,341,WHITE);

   poly32[0]=510;                       //house window rectangle
   poly32[1]=380;

   poly32[2]=535;
   poly32[3]=380;

   poly32[4]=535;
   poly32[5]=390;

   poly32[6]=510;
   poly32[7]=390;

   poly32[8]=poly32[0];
   poly32[9]=poly32[1];

   setfillstyle(1,GREEN);

   fillpoly(5,poly32);
   drawpoly(5,poly32);


   setfillstyle(1,LTBKSLASH_FILL);           //sun
   ellipse(400,100,0,360,20,40);
   fillellipse(400,100,20,40);


					   //middle road part
  poly25[0]=-1;
  poly25[1]=298;

  poly25[2]=0;
  poly25[3]=220;

  poly25[4]=110;
  poly25[5]=190;

  poly25[6]=220;
  poly25[7]=220;

  poly25[8]=320;
  poly25[9]=200;

  poly25[10]=420;
  poly25[11]=220;

  poly25[12]=520;
  poly25[13]=200;

  poly25[14]=650;
  poly25[15]=220;

  poly25[16]=640;
  poly25[17]=298;

  poly25[18]=-1;
  poly25[19]=298;

  poly25[20]=poly25[0];
  poly25[21]=poly25[1];

  setfillstyle(1,XHATCH_FILL);
  fillpoly(11,poly25);
  drawpoly(11,poly25);


  poly22[0]=0;                             //1st mountain
  poly22[1]=220;

  poly22[2]=100;
  poly22[3]=100;

  poly22[4]=220;
  poly22[5]=220;

  poly22[6]=120;
  poly22[7]=200;

  poly22[8]=poly22[0];
  poly22[9]=poly22[1];

  setfillstyle(1,WIDE_DOT_FILL);
  fillpoly(5,poly22);
  drawpoly(5,poly22);

					 //2nd mountain
  poly23[0]=200;
  poly23[1]=223;

  poly23[2]=300;
  poly23[3]=100;

  poly23[4]=420;
  poly23[5]=220;

  poly23[6]=320;
  poly23[7]=200;

  poly23[8]=poly23[0];
  poly23[9]=poly23[1];

  setfillstyle(1,WIDE_DOT_FILL);
  fillpoly(5,poly23);
  drawpoly(5,poly23);

				       //3rd mountain
  poly24[0]=400;
  poly24[1]=223;

  poly24[2]=500;
  poly24[3]=100;

  poly24[4]=620;
  poly24[5]=220;

  poly24[6]=520;
  poly24[7]=200;

  poly24[8]=poly24[0];
  poly24[9]=poly24[1];

  setfillstyle(1,WIDE_DOT_FILL);
  fillpoly(5,poly24);
  drawpoly(5,poly24);

					     //1st smpl root
  poly[0]=58;
  poly[1]=250;

  poly[2]=64;
  poly[3]=250;

  poly[4]=56;
  poly[5]=300;

  poly[6]=66;
  poly[7]=300;

  poly[8]=poly[0];
  poly[9]=poly[1];

  setfillstyle(1,RED);
  fillpoly(5,poly);
  drawpoly(5,poly);

					      //2nd smpl root
  poly1[0]=108;
  poly1[1]=250;

  poly1[2]=114;
  poly1[3]=250;

  poly1[4]=106;
  poly1[5]=300;

  poly1[6]=116;
  poly1[7]=300;

  poly1[8]=poly1[0];
  poly1[9]=poly1[1];

  setfillstyle(1,RED);
  fillpoly(5,poly1);
  drawpoly(5,poly1);

					     //3rd smpl root
  poly2[0]=158;
  poly2[1]=250;

  poly2[2]=164;
  poly2[3]=250;

  poly2[4]=156;
  poly2[5]=300;

  poly2[6]=166;
  poly2[7]=300;

  poly2[8]=poly2[0];
  poly2[9]=poly2[1];

  setfillstyle(1,RED);
  fillpoly(5,poly2);
  drawpoly(5,poly2);

					      //4th smpl root
  poly3[0]=208;
  poly3[1]=250;

  poly3[2]=214;
  poly3[3]=250;

  poly3[4]=206;
  poly3[5]=300;

  poly3[6]=216;
  poly3[7]=300;

  poly3[8]=poly3[0];
  poly3[9]=poly3[1];

  setfillstyle(1,RED);
  fillpoly(5,poly3);
  drawpoly(5,poly3);

					     //5th smpl root
  poly4[0]=258;
  poly4[1]=250;

  poly4[2]=264;
  poly4[3]=250;

  poly4[4]=256;
  poly4[5]=300;

  poly4[6]=266;
  poly4[7]=300;

  poly4[8]=poly4[0];
  poly4[9]=poly4[1];

  setfillstyle(1,RED);
  fillpoly(5,poly4);
  drawpoly(5,poly4);

					      //6th smpl root
  poly5[0]=308;
  poly5[1]=250;

  poly5[2]=314;
  poly5[3]=250;

  poly5[4]=306;
  poly5[5]=300;

  poly5[6]=316;
  poly5[7]=300;

  poly5[8]=poly5[0];
  poly5[9]=poly5[1];

  setfillstyle(1,RED);
  fillpoly(5,poly5);
  drawpoly(5,poly5);

						 //7th smpl root
  poly6[0]=358;
  poly6[1]=250;

  poly6[2]=364;
  poly6[3]=250;

  poly6[4]=356;
  poly6[5]=300;

  poly6[6]=366;
  poly6[7]=300;

  poly6[8]=poly6[0];
  poly6[9]=poly6[1];

  setfillstyle(1,RED);
  fillpoly(5,poly6);
  drawpoly(5,poly6);

						  //8th smpl root
  poly7[0]=408;
  poly7[1]=250;

  poly7[2]=414;
  poly7[3]=250;

  poly7[4]=406;
  poly7[5]=300;

  poly7[6]=416;
  poly7[7]=300;

  poly7[8]=poly7[0];
  poly7[9]=poly7[1];

  setfillstyle(1,RED);
  fillpoly(5,poly7);
  drawpoly(5,poly7);

						  //1st smpl grass
  poly8[0]=58;
  poly8[1]=250;

  poly8[2]=42;
  poly8[3]=270;

  poly8[4]=58;
  poly8[5]=235;

  poly8[6]=42;
  poly8[7]=250;

  poly8[8]=58;
  poly8[9]=220;

  poly8[10]=42;
  poly8[11]=230;

  poly8[12]=60;
  poly8[13]=189;

  poly8[14]=78;
  poly8[15]=230;

  poly8[16]=64;
  poly8[17]=220;

  poly8[18]=78;
  poly8[19]=250;

  poly8[20]=64;
  poly8[21]=235;

  poly8[22]=78;
  poly8[23]=270;

  poly8[24]=64;
  poly8[25]=250;

  poly8[26]=poly8[0];
  poly8[27]=poly8[1];

  setfillstyle(1,BKSLASH_FILL);
  fillpoly(14,poly8);
  drawpoly(14,poly8);

					       //2nd smpl grass
  poly9[0]=108;
  poly9[1]=250;

  poly9[2]=92;
  poly9[3]=270;

  poly9[4]=108;
  poly9[5]=235;

  poly9[6]=92;
  poly9[7]=250;

  poly9[8]=108;
  poly9[9]=220;

  poly9[10]=92;
  poly9[11]=230;

  poly9[12]=110;
  poly9[13]=189;

  poly9[14]=128;
  poly9[15]=230;

  poly9[16]=114;
  poly9[17]=220;

  poly9[18]=128;
  poly9[19]=250;

  poly9[20]=114;
  poly9[21]=235;

  poly9[22]=128;
  poly9[23]=270;

  poly9[24]=114;
  poly9[25]=250;

  poly9[26]=108;
  poly9[27]=250;

  setfillstyle(1,LINE_FILL);
  fillpoly(14,poly9);
  drawpoly(14,poly9);

						  //3rd smpl grass
  poly10[0]=158;
  poly10[1]=250;

  poly10[2]=142;
  poly10[3]=270;

  poly10[4]=158;
  poly10[5]=235;

  poly10[6]=142;
  poly10[7]=250;

  poly10[8]=158;
  poly10[9]=220;

  poly10[10]=142;
  poly10[11]=230;

  poly10[12]=160;
  poly10[13]=189;

  poly10[14]=178;
  poly10[15]=230;

  poly10[16]=164;
  poly10[17]=220;

  poly10[18]=178;
  poly10[19]=250;

  poly10[20]=164;
  poly10[21]=235;

  poly10[22]=178;
  poly10[23]=270;

  poly10[24]=164;
  poly10[25]=250;

  poly10[26]=poly10[0];
  poly10[27]=poly10[1];

  setfillstyle(1,BKSLASH_FILL);
  fillpoly(14,poly10);
  drawpoly(14,poly10);

						   //4th smpl grass
  poly11[0]=208;
  poly11[1]=250;

  poly11[2]=192;
  poly11[3]=270;

  poly11[4]=208;
  poly11[5]=235;

  poly11[6]=192;
  poly11[7]=250;

  poly11[8]=208;
  poly11[9]=220;

  poly11[10]=192;
  poly11[11]=230;

  poly11[12]=210;
  poly11[13]=189;

  poly11[14]=228;
  poly11[15]=230;

  poly11[16]=214;
  poly11[17]=220;

  poly11[18]=228;
  poly11[19]=250;

  poly11[20]=214;
  poly11[21]=235;

  poly11[22]=228;
  poly11[23]=270;

  poly11[24]=214;
  poly11[25]=250;

  poly11[26]=poly11[0];
  poly11[27]=poly11[1];

  setfillstyle(1,LINE_FILL);
  fillpoly(14,poly11);
  drawpoly(14,poly11);

						       //5th smpl grass
  poly12[0]=258;
  poly12[1]=250;

  poly12[2]=242;
  poly12[3]=270;

  poly12[4]=258;
  poly12[5]=235;

  poly12[6]=242;
  poly12[7]=250;

  poly12[8]=258;
  poly12[9]=220;

  poly12[10]=242;
  poly12[11]=230;

  poly12[12]=260;
  poly12[13]=189;

  poly12[14]=278;
  poly12[15]=230;

  poly12[16]=264;
  poly12[17]=220;

  poly12[18]=278;
  poly12[19]=250;

  poly12[20]=264;
  poly12[21]=235;

  poly12[22]=278;
  poly12[23]=270;

  poly12[24]=264;
  poly12[25]=250;

  poly12[26]=poly12[0];
  poly12[27]=poly12[1];

  setfillstyle(1,BKSLASH_FILL);
  fillpoly(14,poly12);
  drawpoly(14,poly12);

							 //6th smpl grass
  poly13[0]=308;
  poly13[1]=250;

  poly13[2]=292;
  poly13[3]=270;

  poly13[4]=308;
  poly13[5]=235;

  poly13[6]=292;
  poly13[7]=250;

  poly13[8]=308;
  poly13[9]=220;

  poly13[10]=292;
  poly13[11]=230;

  poly13[12]=310;
  poly13[13]=189;

  poly13[14]=328;
  poly13[15]=230;

  poly13[16]=314;
  poly13[17]=220;

  poly13[18]=328;
  poly13[19]=250;

  poly13[20]=314;
  poly13[21]=235;

  poly13[22]=328;
  poly13[23]=270;

  poly13[24]=314;
  poly13[25]=250;

  poly13[26]=poly13[0];
  poly13[27]=poly13[1];

  setfillstyle(1,LINE_FILL);
  fillpoly(14,poly13);
  drawpoly(14,poly13);

						  //7th smpl grass
  poly14[0]=358;
  poly14[1]=250;

  poly14[2]=342;
  poly14[3]=270;

  poly14[4]=358;
  poly14[5]=235;

  poly14[6]=342;
  poly14[7]=250;

  poly14[8]=358;
  poly14[9]=220;

  poly14[10]=342;
  poly14[11]=230;

  poly14[12]=360;
  poly14[13]=189;

  poly14[14]=378;
  poly14[15]=230;

  poly14[16]=364;
  poly14[17]=220;

  poly14[18]=378;
  poly14[19]=250;

  poly14[20]=364;
  poly14[21]=235;

  poly14[22]=378;
  poly14[23]=270;

  poly14[24]=364;
  poly14[25]=250;

  poly14[26]=poly14[0];
  poly14[27]=poly14[1];

  setfillstyle(1,BKSLASH_FILL);
  fillpoly(14,poly14);
  drawpoly(14,poly14);

						  //8th smpl grass
  poly15[0]=408;
  poly15[1]=250;

  poly15[2]=392;
  poly15[3]=270;

  poly15[4]=408;
  poly15[5]=235;

  poly15[6]=392;
  poly15[7]=250;

  poly15[8]=408;
  poly15[9]=220;

  poly15[10]=392;
  poly15[11]=230;

  poly15[12]=410;
  poly15[13]=189;

  poly15[14]=428;
  poly15[15]=230;

  poly15[16]=414;
  poly15[17]=220;

  poly15[18]=428;
  poly15[19]=250;

  poly15[20]=414;
  poly15[21]=235;

  poly15[22]=428;
  poly15[23]=270;

  poly15[24]=414;
  poly15[25]=250;

  poly15[26]=poly15[0];
  poly15[27]=poly15[1];

  setfillstyle(1,LINE_FILL);
  fillpoly(14,poly15);
  drawpoly(14,poly15);

						     //tree root1
  poly16[0]=500;
  poly16[1]=250;

  poly16[2]=506;
  poly16[3]=256;

  poly16[4]=510;
  poly16[5]=260;

  poly16[6]=510;
  poly16[7]=290;

  poly16[8]=500;
  poly16[9]=300;

  poly16[10]=525;
  poly16[11]=300;

  poly16[12]=515;
  poly16[13]=290;

  poly16[14]=515;
  poly16[15]=260;

  poly16[16]=524;
  poly16[17]=250;

  poly16[18]=poly16[0];
  poly16[19]=poly16[1];

  setfillstyle(1,RED);
  fillpoly(10,poly16);
  drawpoly(10,poly16);

						    //tree grass1
  poly17[0]=506;
  poly17[1]=256;

  poly17[2]=500;
  poly17[3]=256;

  poly17[4]=494;
  poly17[5]=262;

  poly17[6]=488;
  poly17[7]=256;

  poly17[8]=480;
  poly17[9]=256;

  poly17[10]=480;
  poly17[11]=250;

  poly17[12]=485;
  poly17[13]=250;

  poly17[14]=475;
  poly17[15]=240;

  poly17[16]=480;
  poly17[17]=240;

  poly17[18]=480;
  poly17[19]=236;

  poly17[20]=474;
  poly17[21]=230;

  poly17[22]=480;
  poly17[23]=226;

  poly17[24]=476;
  poly17[25]=220;

  poly17[26]=482;
  poly17[27]=216;

  poly17[28]=482;
  poly17[29]=210;

  poly17[30]=488;
  poly17[31]=204;

  poly17[32]=488;
  poly17[33]=198;

  poly17[34]=494;
  poly17[35]=192;

  poly17[36]=494;
  poly17[37]=186;

  poly17[38]=500;
  poly17[39]=186;

  poly17[40]=508;
  poly17[41]=194;

  poly17[42]=514;
  poly17[43]=178;

  poly17[44]=520;
  poly17[45]=184;

  poly17[46]=520;
  poly17[47]=190;

  poly17[48]=526;
  poly17[49]=190;

  poly17[50]=532;
  poly17[51]=196;

  poly17[52]=532;
  poly17[53]=202;

  poly17[54]=538;
  poly17[55]=208;

  poly17[56]=538;
  poly17[57]=214;

  poly17[58]=544;
  poly17[59]=220;

  poly17[60]=544;
  poly17[61]=226;

  poly17[62]=544;
  poly17[63]=232;

  poly17[64]=538;
  poly17[65]=238;

  poly17[66]=544;
  poly17[67]=244;

  poly17[68]=544;
  poly17[69]=250;

  poly17[70]=538;
  poly17[71]=256;

  poly17[72]=526;
  poly17[73]=250;

  poly17[74]=500;
  poly17[75]=250;

  poly17[76]=poly17[0];
  poly17[77]=poly17[1];


  setfillstyle(1,GREEN);
  fillpoly(39,poly17);
  drawpoly(39,poly17);


					       //tree root2
  poly18[0]=600;
  poly18[1]=250;

  poly18[2]=606;
  poly18[3]=256;

  poly18[4]=610;
  poly18[5]=260;

  poly18[6]=610;
  poly18[7]=290;

  poly18[8]=600;
  poly18[9]=300;

  poly18[10]=625;
  poly18[11]=300;

  poly18[12]=615;
  poly18[13]=290;

  poly18[14]=615;
  poly18[15]=260;

  poly18[16]=624;
  poly18[17]=250;

  poly18[18]=poly18[0];
  poly18[19]=poly18[1];

  setfillstyle(1,RED);
  fillpoly(10,poly18);
  drawpoly(10,poly18);



						  //tree grass2
  poly19[0]=606;
  poly19[1]=256;

  poly19[2]=600;
  poly19[3]=256;

  poly19[4]=594;
  poly19[5]=262;

  poly19[6]=588;
  poly19[7]=256;

  poly19[8]=580;
  poly19[9]=256;

  poly19[10]=580;
  poly19[11]=250;

  poly19[12]=585;
  poly19[13]=250;

  poly19[14]=575;
  poly19[15]=240;

  poly19[16]=580;
  poly19[17]=240;

  poly19[18]=580;
  poly19[19]=236;

  poly19[20]=574;
  poly19[21]=230;

  poly19[22]=580;
  poly19[23]=226;

  poly19[24]=576;
  poly19[25]=220;

  poly19[26]=582;
  poly19[27]=216;

  poly19[28]=582;
  poly19[29]=210;

  poly19[30]=588;
  poly19[31]=204;

  poly19[32]=588;
  poly19[33]=198;

  poly19[34]=594;
  poly19[35]=192;

  poly19[36]=594;
  poly19[37]=186;

  poly19[38]=600;
  poly19[39]=186;

  poly19[40]=608;
  poly19[41]=194;

  poly19[42]=614;
  poly19[43]=178;

  poly19[44]=620;
  poly19[45]=184;

  poly19[46]=620;
  poly19[47]=190;

  poly19[48]=626;
  poly19[49]=190;

  poly19[50]=632;
  poly19[51]=196;

  poly19[52]=632;
  poly19[53]=202;

  poly19[54]=638;
  poly19[55]=208;

  poly19[56]=638;
  poly19[57]=214;

  poly19[58]=644;
  poly19[59]=220;

  poly19[60]=644;
  poly19[61]=226;

  poly19[62]=644;
  poly19[63]=232;

  poly19[64]=638;
  poly19[65]=238;

  poly19[66]=644;
  poly19[67]=244;

  poly19[68]=644;
  poly19[69]=250;

  poly19[70]=638;
  poly19[71]=256;

  poly19[72]=626;
  poly19[73]=250;

  poly19[74]=600;
  poly19[75]=250;

  poly19[76]=poly19[0];
  poly19[77]=poly19[1];


  setfillstyle(1,GREEN);
  fillpoly(39,poly19);
  drawpoly(39,poly19);
  getch();
  closegraph();
}
