#include<stdio.h>
#include<graphics.h>
#include<iostream>
#include<winbgim.h>
using namespace std;



int main()
{
    int gd=DETECT,gm,x,y,clkx,clky,f=0,a,b;
    initwindow(1000,690,"BGI",-3,-3,false,true);

    while(1)
    {
        //SendString("play sona.mp3",0,0,0);
        readimagefile("flag.jpg",0,0,getmaxx(),getmaxy());
        POINT mouse;
        GetCursorPos(&mouse);
        getmouseclick(WM_LBUTTONDOWN,a,b);
        //if (a!=-1 && b!=-1) cout<<a<<"  "<<b<<"\n"<<endl;
        if(a>=249 && a<=699 && b>=485 && b<=526)
        {
            while(1)

            {
                readimagefile("map.jpg",0,0,getmaxx(),getmaxy());
                int e,f;
                getmouseclick(WM_LBUTTONDOWN,e,f);
                //if (e!=-1 && f!=-1) printf("%d %d\n",e,f);
                if (e>=789 && e<=926 && f>=641 && f<=670)
                {
                    while(1)
                    {
                        readimagefile("bd.jpg",0,0,getmaxx(),getmaxy());
                        int k,l;
                        getmouseclick(WM_LBUTTONDOWN,k,l);
                        //if (k!=-1 && l!=-1) printf("%d %d\n",k,l);
                        if (k>=764 && k<=872 && l>=654 && l<=676)



                    while(1)
                    {


                        //  mciSendString("play sound.mp3",0,0,0);
                        readimagefile("Front-page.jpg",0,0,getmaxx(),getmaxy());
                        //POINT mouse;
                        //GetCursorPos(&mouse);
                        getmouseclick(WM_LBUTTONDOWN,clkx,clky);
                        int mx=mouse.x;
                        int my=mouse.y;
                        // x=mousex();
                        //y=mousey();
                        //if(clkx!=-1 && clky!=-1) cout<<clkx<<"  "<<clky<<"\n"<<endl;
                        // cout<<mx<<" "<<my<<endl;

                        if(clkx>=665 && clkx<=852 && clky>=648 && clky<=670)
                        {


                            while(1)
                            {
                                //  mciSendString("stop sound.mp3",0,0,0);
                                //  mciSendString("play m.mp3",0,0,0);
                                 readimagefile("second page-new.jpg",0,0,getmaxx(),getmaxy());
                                //readimagefile("Dhaka div final.jpg",0,0,getmaxx(),getmaxy());
                                //if(clkx!=-1 && clky!=-1) cout<<clkx<<"  "<<clky<<"\n"<<endl;
                                //break;

                                int h,g;
                                getmouseclick(WM_LBUTTONDOWN,h,g);
                                if (h>=718 && h<=887 && g>=6 && g<=22)
                                    break;
                                //delay(500);
                                //readimagefile("Dhaka div final.jpg",0,0,getmaxx(),getmaxy());

                                //if(h!=-1 && g!=-1)    cout<<h<<"  "<<g<<"\n"<<endl;
                                if(h>=750 && h<=878 && g>=148 && g<=181)
                                {
                                    while(1)
                                    {
                                        readimagefile("finalpage.jpg",0,0,getmaxx(),getmaxy());
                                        delay(3000);
                                        closegraph();
                                    }
                                }
                                if (h>=265 && h<=347 && g>=303 && g<=317)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0){
                                        readimagefile("curjon.jpg",0,0,getmaxx(),getmaxy());
                                        delay(1000);

                                        readimagefile("ahsan.jpg",0,0,getmaxx(),getmaxy());
                                        delay(1000);
                                        b=1;
                                        }
                                        if(b==1){
                                        readimagefile("Dhaka div final.jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if (u>=752 && u<=946 && v>=12 && v<=46)
                                            break;

                                        //if (u!=-1 && v!=-1) cout<<u<<"  "<<v<<"\n"<<endl;
                                        if(u>=364 && u<=429 && v>=172 && v<=186)
                                        {
                                            while(1)
                                            {
                                                readimagefile("dh-final.jpg",0,0,getmaxx(),getmaxy());
                                                //break;
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=720 && i<=901 && j>=10 && j<=20)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        else if(u>=407 && u<=526 && v>=194 && v<=203)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Narayanganj-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=760 && i<=944 && j>=3 && j<=22)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=397 && u<=471 && v>=128 && v<=139)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Gazipur-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=752 && i<=918 && j>=5 && j<=23)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=255 && u<=383 && v>=85 && v<=96)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Tangail-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=726 && i<=889 && j>=6 && j<=20)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=531 && u<=647 && v>=80 && v<=93)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Kishoreganjfinal.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=766 && i<=934 && j>=5 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=499 && u<=588 && v>=148 && v<=158)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Narsingdi-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=746 && i<=916 && j>=6 && j<=23)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=234 && u<=335 && v>=177 && v<=187)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Manikgonj.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=763 && i<=933 && j>=7 && j<=22)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=121 && u<=193 && v>=194 && v<=209)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Rajbari-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=755 && i<=932 && j>=8 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=213 && u<=306 && v>=238 && v<=248)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Faridpur-final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=738 && i<=914 && j>=4 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=226 && u<=323 && v>=314 && v<=325)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Gopalgonj Final.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=762 && i<=950 && j>=3 && j<=23)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=369 && u<=466 && v>=281 && v<=290)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Shariatpur final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=795 && i<=985 && j>=4 && j<=22)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }

                                        }
                                        if(u>=290 && u<=383 && v>=295 && v<=305)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Madaripur final.jpg",0,0,getmaxx(),getmaxy());
                                                int ci,cj;
                                                getmouseclick(WM_LBUTTONDOWN,ci,cj);
                                                if(ci>=644 && ci<=833 && cj>=6 && cj<=27)
                                                    break;
                                                //if (ci!=-1 && cj!=-1) printf("%d %d\n",ci,cj);
                                            }
                                        }
                                        if(u>=358 && u<=469 && v>=233 && v<=247)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Munshiganj final.jpg",0,0,getmaxx(),getmaxy());
                                                //delay(35000);
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=754 && i<=923 && j>=4 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        }
                                    }
                                }

                                else if(h>=274 && h<=430 && g>=211 && g<=234)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("my.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("garo.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("Mymensingh Division.jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=802 && u<=973 && u>=34 && v<=59)
                                            break;
                                        if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=131 && u<=251 && v>=141 && v<=155)
                                        {
                                            while(1)
                                            {
                                                readimagefile("sherpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=762 && i<=944 && j>=3 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=35 && u<=169 && v>=221 && v<=243)
                                        {
                                            while(1)
                                            {
                                                readimagefile("jamalpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=761 && i<=953 && j>=5 && j<=29)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=325 && u<=498 && v>=266 && v<=288)
                                        {
                                            while(1)
                                            {
                                                readimagefile("mymensingh.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=780 && i<=950 && j>=3 && j<=28)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=565 && u<=711 && v>=191 && v<=209)
                                        {
                                            while(1)
                                            {
                                                readimagefile("netokhona.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=766 && i<=952 && j>=6 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=141 && h<=224 && g>=366 && g<=384)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("tiger.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("gombuj.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if (b!=0)
                                        {


                                        readimagefile("Khulna div.jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=796 && u<=999 && u>=27 && v<=58)
                                            break;
                                        //if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=112 && u<=195 && v>=118 && v<=129)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Kushtia.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=707 && i<=875 && j>=4 && j<=23)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=13 && u<=117 && v>=145 && v<=160)
                                        {
                                            while(1)
                                            {
                                                readimagefile("meherpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=705 && i<=877 && j>=3 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=43 && u<=160 && v>=169 && v<=178)
                                        {
                                            while(1)
                                            {
                                                readimagefile("chudanga1.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=685 && i<=866 && j>=2 && j<=21)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=129 && u<=244 && v>=187 && v<=198)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Jhenaidah.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=686 && i<=860 && j>=7 && j<=30)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=233 && u<=310 && v>=202 && v<=214)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Magura.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=617 && i<=789 && j>=4 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=160 && u<=241 && v>=252 && v<=266)
                                        {
                                            while(1)
                                            {
                                                readimagefile("jessore.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=694 && i<=861 && j>=6 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=280 && u<=345 && v>=246 && v<=260)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Narail.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=669 && i<=857 && j>=1 && j<=21)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=141 && u<=230 && v>=314 && v<=329)
                                        {
                                            while(1)
                                            {
                                                readimagefile("sathkhira.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=681 && i<=852 && j>=3 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=233 && u<=316 && v>=375 && v<=394)
                                        {
                                            while(1)
                                            {
                                                readimagefile("khulna.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=772 && i<=948 && j>=6 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=329 && u<=427 && v>=341 && v<=358)
                                        {
                                            while(1)
                                            {
                                                readimagefile("bagerhat.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=758 && i<=945 && j>=2 && j<=30)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=479 && h<=562 && g>=216 && g<=233)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("shri.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("jaflong.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("Sylhet Div..jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=760 && u<=935 && u>=9 && v<=26)
                                            break;
                                        //if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=184 && u<=347 && v>=123 && v<=146)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Sunamgonj.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=765 && i<=951 && j>=1 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=491 && u<=587 && v>=131 && v<=151)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Sylhet.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=685 && i<=866 && j>=6 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=227 && u<=354 && v>=288 && v<=307)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Habiganj.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=795 && i<=972 && j>=8 && j<=28)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=389 && u<=560 && v>=250 && v<=270)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Moulvibazar.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=766 && i<=946 && j>=4 && j<=29)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=313 && h<=416 && g>=399 && g<=421)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("dhan.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("lonch.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("Barishal Div..jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=765 && u<=947 && v>=3 && v<=25)
                                            break;
                                        if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=353 && u<=462 && v>=182 && v<=198)
                                        {
                                            while(1)
                                            {
                                                readimagefile("barishal.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=698 && i<=876 && j>=6 && j<=28)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=145 && u<=259 && v>=209 && v<=227)
                                        {
                                            while(1)
                                            {
                                                readimagefile("pirojpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=622 && i<=778 && j>=26 && j<=52)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=262 && u<=394 && v>=237 && v<=353)
                                        {
                                            while(1)
                                            {
                                                readimagefile("jhalakathi.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=761 && i<=947 && j>=6 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=201 && u<=329 && v>=347 && v<=362)
                                        {
                                            while(1)
                                            {
                                                readimagefile("borghuna.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=701 && i<=871 && j>=8 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=390 && u<=541 && v>=296 && v<=310)
                                        {
                                            while(1)
                                            {
                                                readimagefile("patuakhali.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=780 && i<=959 && j>=6 && j<=23)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=529 && u<=675 && v>=278 && v<=296)
                                        {
                                            while(1)
                                            {
                                                readimagefile("bhola.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=686 && i<=874 && j>=7 && j<=29)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=96 && h<=203 && g>=110 && g<=134)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("tajhat.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("kanto.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("Rangpur Div..jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=765 && u<=944 && v>=7 && v<=25)
                                            break;
                                        //if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=275 && u<=424 && v>=162 && v<=174)
                                        {
                                            while(1)
                                            {
                                                readimagefile("PANCHAGARH.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=764 && i<=951 && j>=2 && j<=30)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=211 && u<=372 && v>=189 && v<=202)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Thakurgaon.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=771 && i<=951 && j>=5 && j<=24)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=409 && u<=532 && v>=212 && v<=326)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Nilphamari.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=768 && i<=950 && j>=9 && j<=30)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=542 && u<=702 && v>=213 && v<=224)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Lalmonirhat.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=768 && i<=948 && j>=0 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=665 && u<=792 && v>=270 && v<=288)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Kurigram.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=760 && i<=947 && j>=8 && j<=26)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=325 && u<=447 && v>=265 && v<=282)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Dinjpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=765 && i<=949 && j>=6 && j<=26)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=522 && u<=641 && v>=268 && v<=283)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Rangpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=689 && i<=910 && j>=4 && j<=30)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=602 && u<=748 && v>=344 && v<=358)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Gaibandha.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=762 && i<=950 && j>=7 && j<=29)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=80 && h<=191 && g>=211 && g<=234)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("digha1.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("digha.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("Rajshahi Div..jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=777 && u<=974 && v>=3 && v<=23)
                                            break;
                                        //if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                        if(u>=533 && u<=750 && v>=86 && v<=122)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Joypurhat.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=756 && i<=949 && j>=4 && j<=31)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=293 && u<=492 && v>=114 && v<=145)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Naogaon.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=767 && i<=952 && j>=5 && j<=26)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=72 && u<=318 && v>=198 && v<=230)
                                        {
                                            while(1)
                                            {
                                                readimagefile("chapainawabgonj.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=760 && i<=948 && j>=6 && j<=24)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=269 && u<=477 && v>=259 && v<=283)
                                        {
                                            while(1)
                                            {
                                                readimagefile("rajshahi.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=754 && i<=954 && j>=4 && j<=31)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=519 && u<=663 && v>=287 && v<=319)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Natore.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=757 && i<=951 && j>=7 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=723 && u<=860 && v>=140 && v<=178)
                                        {
                                            while(1)
                                            {
                                                readimagefile("bogra.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=761 && i<=948 && j>=1 && j<=26)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=704 && u<=907 && v>=278 && v<=315)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Sirajgonj.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=756 && i<=946 && j>=3 && j<=25)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=702 && u<=853 && v>=389 && v<=413)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Pabna.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=765 && i<=948 && j>=1 && j<=27)
                                                    break;
                                                //if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                    }
                                    }
                                }
                                else if(h>=520 && h<=652 && g>=416 && g<=433)
                                {
                                    int b=0;
                                    while(1)
                                    {
                                        if(b==0)
                                        {
                                            readimagefile("bazar.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            readimagefile("moina.jpg",0,0,getmaxx(),getmaxy());
                                            delay(1000);
                                            b=2;
                                        }
                                        if(b!=0)
                                        {


                                        readimagefile("chdv.jpg",0,0,getmaxx(),getmaxy());
                                        int u,v;
                                        getmouseclick(WM_LBUTTONDOWN,u,v);
                                        if(u>=747 && u<=985 && v>=10 && v<=57)
                                            break;
                                        if (u!=-1 && v!=-1) printf("%d %d\n",u,v);
                                       if(u>=378 && u<=473 && v>=346 && v<=359)
                                        {
                                            while(1)
                                            {
                                                readimagefile("bandarban.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=816 && i<=991 && j>=5 && j<=25)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=264 && u<=363 && v>=288 && v<=310)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Chittagong.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=680 && i<=876 && j>=3 && j<=27)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=119 && u<=181 && v>=179 && v<=195)
                                        {
                                            while(1)
                                            {
                                                readimagefile("comilla.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=738 && i<=902 && j>=7 && j<=23)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=183 && u<=223 && v>=224 && v<=237)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Feni.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=661 && i<=835 && j>=6 && j<=33)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=285 && u<=396 && v>=200 && v<=217)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Khagrachari.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=765 && i<=985 && j>=4 && j<=29)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=114 && u<=194 && v>=239 && v<=247)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Noakhali.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=684 && i<=875 && j>=6 && j<=24)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=337 && u<=437 && v>=242 && v<=261)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Rangamati.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=811 && i<=982 && j>=8 && j<=29)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=86 && u<=212 && v>=132 && v<=142)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Brahmanbaria.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=769 && i<=990 && j>=4 && j<=23)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=54 && u<=137 && v>=191 && v<=204)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Chandpur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=751 && i<=997 && j>=2 && j<=29)
                                                    break;
                                                 if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=48 && u<=161 && v>=227 && v<=237)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Lakshmipur.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=770 && i<=983 && j>=4 && j<=27)
                                                    break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }
                                        if(u>=292 && u<=394 && v>=359 && v<=372)
                                        {
                                            while(1)
                                            {
                                                readimagefile("Cox's bazar.jpg",0,0,getmaxx(),getmaxy());
                                                int i,j;
                                                getmouseclick(WM_LBUTTONDOWN,i,j);
                                                if(i>=781 && i<=997 && j>=4 && j<=29)
                                                  break;
                                                if (i!=-1 && j!=-1) printf("%d %d\n",i,j);
                                            }
                                        }

                                    }
                                    }
                                }

                            }

                            //getch();

                        }

                    }
                }
                }
            }


            //cout<<"out"<<endl;
            //getch();
            //closegraph();
            //return 0;
        }
    }
}


