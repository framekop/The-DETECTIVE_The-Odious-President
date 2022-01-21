///////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////The DETECTIVE : The Odious President//////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////
//LIBRALY ADD
#include<stdio.h>
#include<string.h>
#include<time.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>
#include<ctype.h>

//FUNCTION PROTOTYPE
void mainmenu(void);
void menu(void);
void ui_map(void);
void ui_inventory(void);
void ui_save(void);
void ui_load(void);
void delay(int);
void minigame_findsum(void);
void minigame_findpq(void);

void lo_home(void);
void lo_office(void);
void lo_abandoned_house(void);
void lo_shop(void);
void lo_bank(void);
void lo_goverment(void);
void lo_river(void);
void lo_hospital(void);
void lo_police_station(void);
void lo_restuarant(void);
void lo_forest(void);
void lo_central(void);
void lo_junkyard(void);
void lo_warehouse(void);

void chapter_4(void);

void use_item(void);
void not_have(void);
void game(void);
void story_item(void);

//CHAPTER 1 - STORY
char ch1_story[1000] = {"You get an e-mail from anonymous guy.\n\nThe e-mail said that he want you to detect the\ndead of Miss Brie and attach one picture.\n\nWhen you see the picture you realize at once that\nyou have to do this case because it is a picture\nof president in the warehouse with Miss Brie when\nshe died.\n\n"};
char ch1_home[1000] = {"You are in your home. It is a beautiful house made\nfrom wood full of many type of plant.\n\nBut it has nothing to do here.\n\n"};
char ch1_office[1000] = {"Here is your office where you use for work and\nanalyze your evidence.\n\nBut it also has nothing to do here in this time.\n\n"};
char ch1_abandonedhouse[1000] = {"This house look like it was left for a years.\n\nIt's look so scary. You should get out of here.\n\n"};
char ch1_shop[1000] = {"Uncle Gun : Welcome! Here have everything that you\nneed. And also something that you don't need.\n\nYou : Sorry, Can I ask you some question?\n\nUncle Gun : Oh, Of course!!\n\nYou : Do you know anything about Miss Brie?\n\nUncle Gun : Ah, I don't know about her that much.\nBut she is a good girl in my eyes.\n\nYou : Thank you.\n\n"};
char ch1_bank_it[1000] = {"Congratulation!! You found the [ Name Card ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch1_government[1000] = {"Sorry, you are not allow to go inside.\n\n"};
char ch1_river[1000] = {"This river is the place that have many people use\nfor suicide themselves.\n\nIt's beautiful but dangerous in the same time.\n\n"};
char ch1_hospital[1000] = {"There is nothing to do here.\n\n"};
char ch1_policeoffice[1000] = {"It has nothing to do here in this time.\n\n"};
char ch1_restuarant_it[1000] = {"Congratulation!! You found the [ Button ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch1_forest[1000] = {"This forest is the place that many people use for\nrest in daytime.\n\nBut in nighttime there is nobody because everyone\nknow that if you don't want to die don't come here\nin the night.\n\n"};
char ch1_central[1000] = {"Here is central of the city. It's full of people.\n\n"};
char ch1_junkyard[1000] = {"Oh no! The smell of here is so bad that make\nyou die\n\n\t\t...Goodbye...\n\n"};//Ch1 exit(0);
char ch1_warehourse[1000] = {"It has nothing to do here right now.\n\n"};

//CHAPTER 2 - STORY
char ch2_story_button[1000] = {"After you enter the office you see your partner,\nhis name is 'Tim'.\n\nYou : Look at this!\n\nTim : What's that.\n\nYou : It's a button. I found it at the restaurant.\n\nTim : And?\n\nYou : After I touch it, I saw Miss Brie has\neavesdropped the president talking with someone.\nI'm not sure who is he, but I'm sure that he is\none of billionaire.\n\nTim : Okay give it to me, I will help you find\nthat man.\n\nYou : Oh thanks.\n\nTim : No problem.\n\n"};
char ch2_story_name_card[1000] = {"After you enter the office you see your partner,\nhis name is 'Tim'.\n\nYou : Look at this!\n\nTim : What's that.\n\nYou : It's a name card of President.\nI found it at the bank.\n\nTim : And?\n\nYou : After I touch it, I saw him talking with\nsomeone. I'm not sure who is he, but I'm sure that\nhe is one of billionaire.\n\nTim : Okay give it to me, I will help you find\nthat man.\n\nYou : Oh thanks.\n\nTim : No problem.\n\n"};
char ch2_home[1000] = {"You are in your home. It is a beautiful house made\nfrom wood full of many type of plant.\n\nBut it has nothing to do here.\n\nWhy you still come here.\nRemember Don't come here again.\n\n"};
char ch2_office[1000] = {"Tim : Hey, Look what I've found.\n\nYou : What?\n\nTim : The man that you told me he is the owner of\nthe Marina and the Warehouse!\n\nYou : That's great! Thanks buddy.\n\n"};
char ch2_abandonedhouse[1000] = {"This house look like it was left for a years.\n\nIt's look so scary. You should get out of here.\n\n"};
char ch2_shop[1000] = {"Uncle Gun : Good afternoon! Do you want any help?\n\nYou : Not now. Thank you.\n\nUncle Gun : Hahaha You will come back here soon.\nMark my word!\n\n"};
char ch2_bank[1000] = {"You come here and check your account balance then\nyou found out that you don't have enough money\nfor this month.\n\nSo you decide to suicide yourself\n\n\t\t...Goodbye...\n\n"};//Ch2 exit(0);
char ch2_government[1000] = {"Sorry, you are not allow to go inside.\n\n"};
char ch2_river[1000] = {"This river is the place that have many people use\nfor suicide themselves.\n\nIt's beautiful but dangerous in the same time.\n\n"};
char ch2_hospital[1000] = {"There is nothing to do here.\n\n"};
char ch2_hospital_it[1000] = {"Congratulation!! You found the [ Syringe ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch2_policeoffice[1000] = {"It has nothing to do here in this time.\n\n"};
char ch2_policeoffice_it[1000] = {"Congratulation!! You found the [ D Cameo ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch2_restuarant[1000] = {"You don't have enough money to eat anything.\n\n"};
char ch2_forest_it[1000] = {"Congratulation!! You found the [ Feather ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch2_central[1000] = {"Here is central of the city. It's full of people.\n\n"};
char ch2_junkyard[1000] = {"Oh no! The smell of here is so bad that make\nyou die\n\n\t\t...Goodbye...\n\n"};//Ch2 exit(0);
char ch2_warehourse[1000] = {"It has nothing to do here right now.\n\n"};

//CHAPTER 3 - STORY
char ch3_story_syringe[1000] = {"You give syringe to Jame who works in this\nhospital and ask him to help you investigate the\nchemicals in syringe.\n\nThen, you found out it is a new type of drug.\n\n"};
char ch3_story_Dcameo[1000] = {"You ask your friend, John, who works here to talk\nwith the prisoner that you see when you touch\nthe cameo.\n\nAfter talking with him you knew that this guy was\nunder arrested in case of drug transports.\n\nBut the president has participated in this but he\nshifted the mistake to this guy only.\n\nMoreover, he tells you about the place that he\nhide the [ KEY ] in the Junkyard!!\n\n"};
char ch3_story_feather[1000] = {"Uncle Gun : I had told you that you would come\nback HAHAHA.\n\nYou : Yes, you're right.\n\nUncle Gun : So, what do you want?\n\nYou : Do you know anything about this?\n\nUncle Gun : Of course! I know everything.\nUmm this is the feather of rare bird in this city.\nThere is only one man that have this bird.\n\nYou : Ah I think I know who he is.\n\nUncle Gun : I know that you know. Good luck BOY!\nHope to see you again.\n\nYou : Thanks a lot.\n\n"};
char ch3_home[1000] = {"I said that don't come here again.\n\n\t\t...Goodbye...\n\n"};//Ch3 exit(0);
char ch3_office[1000] = {"Here is your office where you use for work and\nanalyze your evidence.\n\nBut it also has nothing to do here in this time.\n\n"};
char ch3_abandonedhouse[1000] = {"This house look like it was left for a years.\n\nIt's look so scary. You should get out of here.\n\n"};
char ch3_shop[1000] = {"You have nothing to talk with Uncle Gun.\n\n"};
char ch3_bank[1000] = {"You come here and check your account balance then\nyou found out that you don't have enough money\nfor this month.\n\nSo you decide to suicide yourself\n\n\t\t...Goodbye...\n\n"};//Ch3 exit(0);
char ch3_government[100] = {"Sorry, you are not allow to go inside.\n\n"};
char ch3_river[1000] = {"This river is the place that have many people use\nfor suicide themselves.\n\nIt's beautiful but dangerous in the same time.\n\n"};
char ch3_river_it[1000] = {"Congratulation!! You found the [ Watch ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch3_hospital[1000] = {"There is nothing to do here.\n\n"};
char ch3_policeoffice[100] = {"It has nothing to do here in this time.\n\n"};
char ch3_restuarant[1000] = {"You don't have enough money to eat anything.\n\n"};
char ch3_forest[1000] = {"This forest is the place that many people use for\nrest in daytime.\n\nBut in nighttime there is nobody because everyone\nknow that if you don't want to die don't come here\nin the night.\n\n"};
char ch3_central[1000] = {"Here is central of the city. It's full of people.\n\n"};
char ch3_junkyard[1000] = {"Oh! The smell of here is better great!\n\n"};
char ch3_junkyard_it[1000] = {"Congratulation!! You found the [ Key ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};
char ch3_warehourse[1000] = {"It has nothing to do here right now.\n\n"};
char ch3_warehourse_it[1000] = {"Congratulation!! You found the [ Ring ].\n\nBut before you can get the item you have to\nplay the game!!\n\n"};

//CHAPTER 4 - STORY
char ch4_story_watch[1000] = {"After you looked around, you found one guy that\nyou have never seen before.\n\nYou : Who are you?\n\n??? : I'm son of the president. You may know me\nin the name of anonymous guy.\n\nYou : !!!???\n\n??? : Let me introduce myself again.\nMy name is Carl, the son of the president.\n\nYou : Why you ask me to do this...\n\nCarl : Miss Brie, She is my girlfriend.\nI know that she is a detective and come to find\nevidences to arrest my father but I have fall\nin love with her.\n\nYou : I think I understand everything now.\n\nCarl : Yes, I just want a justice for her.\nSo, she wouldn't die like this.\n\nPresident : Well well well such a good guy.\n\nCarl : Dad!?\n\nThe president has come with some henchman.\n\nPresident : Catch them!\n\nYou and Carl was caught.\nYou know that they will kill you after this.\n\n\nNow you have to choose between\n\n\t      [ RUN ] or [ FIGHT ]\n\nBe careful, This is the last thing that you can\nchoose.\n\n"};
char ch4_story_key[1000] = {"You have entered the room of the president\nsecretly and find the bag that you saw when\ntouching the key.\n\nAfter a while, you have found that bag so you use\nthe key to open it.\n\nWhen the bag opens you find 2 things.\n\nFirst is some document and second is bell.\n\n\nNow you have to choose between\n\n\t  [ DOCUMENT ] or [ BELL ]\n\nBe careful, This is the last thing that you can\nchoose.\n\n"};
char ch4_story_ring[1000] = {"You decide to enter the house and find that it is\nreally messed like it was dismantled before.\n\nYou try to find the documents but it was\ndisappeared.\n\nThen you hear something outside.\n\nIt is a president with his henchmen so you hide\nin the cabinet and find gun and knife.\n\n\nNow you have to choose between\n\n\t      [ GUN ] or [ KNIFE ]\n\nBe careful, This is the last thing that you can\nchoose.\n\n"};

//END - STORY
char end1[1000] = {"You find the document that you want and get out\nfrom there safely.\n\nYou have sent this document to the police station\nand post it on social.\n\nSo, everyone in this city has known about this\nand the president was under arrest finally.\n\n\t      ...CONGRATULATION!!!...\n\n\t...YOUR MISSION IS COMPLETE!!!!!...\n\n"};
char end2[1000] = {"You got caught. because you touched the bell and\nit makes a loud noise that security guards can\nhear.\n\nI don't know why you choose this choice.\nIt is really dumb...\n\n\t\t ...GAME OVER...\n\n"};
char end3[1000] = {"You can not run away from them.\nYou got caught and they put the blame on you.\n\nSo, you are under arrest in case of drug\npossession and addict.\n\n\t\t ...GAME OVER...\n\n"};
char end4[1000] = {"You know? you can not fight with someone who\nhas gun...\n\nSorry but you are dead...Goodbye...\n\n\t\t ...GAME OVER...\n\n"};
char end5[1000] = {"After you open the door you shoot the president\nand you also got shot too.\n\nEven you have died.\nBut you also kill the president.\n\nIt praiseworthy self-sacrifice.\n\n\t       ...REST IN PEACE...\n\n"};
char end6[1000] = {"After you open the door you try to stab the\npresident but you were shot from him.\n\nSo you have died in this house alone and no one\ncan find you.\n\n\t\t...GAME OVER...\n\n"};

//Item story
char story_button[1000] = {"You see Miss Brie hided herself and eavesdropped\nthe president that talking to someone who handed\nthe black bag to president.\n\n"};
char story_name_card[1000] = {"You see the president talking to someone and they\nhad exchange their name card.\n\n"};
char story_feather[1000] = {"You see the president that had a rare bird on his\nshoulder ordered his henchman to injure Miss Brie.\n\n"};
char story_syringe[1000] = {"You see the president that inject something to\nbody of Miss Brie.\n\n"};
char story_d_cameo[1000] = {"You see the president talking to prisoner and the\nprisoner look very angry.\n\n"};
char story_key[1000] = {"You see president at his room at government was\nlocking the black bag with this key.\n\n"};
char story_watch[1000] = {"You see an anonymous guy hold this watch in front\nof the grave of Miss Brie.\n\n"};
char story_ring[1000] = {"You see Miss Brie in the abandoned house.\nShe looks very bad and full of paper around her.\n\n"};

//EXTRA
char again[1000] = {"You already got item here, but you also have to\nplay the game again!!\n\n"};
char use[1000] = {"Now you can use your item to unlock the\nnext chapter.\n\nBut if you don't want to unlock now you can go\nback to menu by input nothing.\n\n"};
char idk[1000] = {"Sorry,I don't know what it is.\n\n"};
char cant[1000] = {"Can not use this item here.\n\n"};
char howtoplay[1000] = {"How to play\n\nFor this game you will play as a detective who\nhave a special power that when he touch something\nwith bare hand he will see some situation about\nthat thing.\n\nTo unlock the next chapter you have to find the\nitem before and you have to go to the right place\nthen you will find how to use it.\n\n"};

//CENTRAL VALUE
int num[3],n,ans,x;//for minigame_findsum
int locate=0,ch=1,i,y=0; // y for check how many item player have
int button=0,name_card=0,D_cameo=0,feather=0,syringe=0,key=0,watch=0,ring=0,document=0,knife=0,gun=0,bell=0;
char at[14][50] = {"Home","Office","Abandoned House","Shop","Bank","Government","River","Hospital","Police Station","Restuarant","Forest","Central","Junkyard","Warehourse"};
char item[12][20] = {"Button","Name Card","D Cameo","Feather","Syringe","Key","Watch","Ring","Document","Knife","Gun","Bell"};
char choice[50],condition[20],stable[20],story[20];

//FUNCTION BODY == [MAIN MENU]
void mainmenu()
{
    int h=3,cl=75;

    while(cl!=13)
    {
        if (cl==72)
        {
            h+=1;
            if(h>3)
            {
                h=1;
            }
        }
        if(cl==80)
        {
            h-=1;
            if(h<1)
            {
                h=3;
            }
        }

        if(h==3)
        {
            system("cls");
            printf("==================================================\n\n");
            printf("       The DETECTIVE : The Odious President\n\n");
            printf("==================================================\n\n");
            printf("\t\t>>1.) NEW GAME\n");
            printf("\t\t  2.) CONTINUE\n");
            printf("\t\t  3.) QUIT\n\n");
            printf("==================================================\n");
        }
        if(h==2)
        {
            system("cls");
            printf("==================================================\n\n");
            printf("       The DETECTIVE : The Odious President\n\n");
            printf("==================================================\n\n");
            printf("\t\t  1.) NEW GAME\n");
            printf("\t\t>>2.) CONTINUE\n");
            printf("\t\t  3.) QUIT\n\n");
            printf("==================================================\n");
        }
        if(h==1)
        {
            system("cls");
            printf("==================================================\n\n");
            printf("       The DETECTIVE : The Odious President\n\n");
            printf("==================================================\n\n");
            printf("\t\t  1.) NEW GAME\n");
            printf("\t\t  2.) CONTINUE\n");
            printf("\t\t>>3.) QUIT\n\n");
            printf("==================================================\n");
        }

        cl = getch();
        if(cl==13)
        {
            if(h==3)
            {
                button=0,name_card=0,D_cameo=0,feather=0,syringe=0,key=0,watch=0,ring=0,document=0,knife=0,gun=0,bell=0;
                locate=0,ch=1,i,y=0;

                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch1_story); i++)
                {
                    delay(1);
                    printf("%c",ch1_story[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();

                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(howtoplay); i++)
                {
                    delay(1);
                    printf("%c",howtoplay[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                menu();
            }
            else if(h==2)
            {
                ui_load();
            }
            else if(h==1)
            {
                exit(0);
            }
            else
            {
                mainmenu();
            }
        }
    }
}

//FUNCTION BODY == [MENU]
void menu()
{
    int h=4,cl=75;
    while(cl!=13)
    {
        if(cl==72)
        {
            h+=1;
            if(h>4)
            {
                h=1;
            }
        }
        if(cl==80)
        {
            h-=1;
            if(h<1)
            {
                h=4;
            }
        }
        if(h==4)
        {
            system("cls");
            printf("=====================LOCATION=====================\n\n");
            printf("Now you are at %s.\n\n",at[locate]);
            printf("=======================MENU=======================\n\n");
            printf(">>1.) MAP\n");
            printf("  2.) INVENTORY\n");
            printf("  3.) SAVE\n");
            printf("  4.) QUIT\n\n");
            printf("=====================CHAPTER %d====================\n",ch);
        }
        if(h==3)
        {
            system("cls");
            printf("=====================LOCATION=====================\n\n");
            printf("Now you are at %s.\n\n",at[locate]);
            printf("=======================MENU=======================\n\n");
            printf("  1.) MAP\n");
            printf(">>2.) INVENTORY\n");
            printf("  3.) SAVE\n");
            printf("  4.) QUIT\n\n");
            printf("=====================CHAPTER %d====================\n",ch);
        }
        if(h==2)
        {
            system("cls");
            printf("=====================LOCATION=====================\n\n");
            printf("Now you are at %s.\n\n",at[locate]);
            printf("=======================MENU=======================\n\n");
            printf("  1.) MAP\n");
            printf("  2.) INVENTORY\n");
            printf(">>3.) SAVE\n");
            printf("  4.) QUIT\n\n");
            printf("=====================CHAPTER %d====================\n",ch);
        }
        if(h==1)
        {
            system("cls");
            printf("=====================LOCATION=====================\n\n");
            printf("Now you are at %s.\n\n",at[locate]);
            printf("=======================MENU=======================\n\n");
            printf("  1.) MAP\n");
            printf("  2.) INVENTORY\n");
            printf("  3.) SAVE\n");
            printf(">>4.) QUIT\n\n");
            printf("=====================CHAPTER %d====================\n",ch);
        }

        cl =getch();
        system("cls");
        if(cl==13)
        {
            if(h==4)
            {
                ui_map();
            }
            else if(h==3)
            {
                ui_inventory();
            }
            else if(h==2)
            {
                ui_save();
            }
            else if(h==1)
            {
                mainmenu();
            }
            else
            {
                menu();
            }
        }
    }
}

//FUNCTION BODY == [UI MAP]
void ui_map()
{
    {
        int hs=1,cl=75;
        while(cl!=13)
        {
            if(cl==72)
            {
                hs-=1;
                if(hs<1)
                {
                    hs=15;
                }
            }
            if(cl==80)
            {
                hs+=1;
                if(hs>15)
                {
                    hs=1;
                }
            }
            if(hs==1)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf(">> 1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==2)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf(">> 2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==3)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf(">> 3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==4)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf(">> 4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==5)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf(">> 5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==6)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf(">> 6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==7)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf(">> 7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==8)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf(">> 8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==9)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf(">> 9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==10)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf(">>10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==11)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf(">>11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==12)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf(">>12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==13)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf(">>13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==14)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf(">>14.) Warehouse\n");
                printf("   Back to menu.\n\n");
                printf("==================================================\n\n");
            }
            if(hs==15)
            {
                system("cls");
                printf("=====================LOCATION=====================\n\n");
                printf("Now you are at %s.\n\n",at[locate]);
                printf("=======================MAP========================\n\n");
                printf("   1.) Home\n");
                printf("   2.) Office\n");
                printf("   3.) Abandoned House\n");
                printf("   4.) Shop\n");
                printf("   5.) Bank\n");
                printf("   6.) Goverment\n");
                printf("   7.) River\n");
                printf("   8.) Hospital\n");
                printf("   9.) Police Station\n");
                printf("  10.) Restuarant\n");
                printf("  11.) Forest\n");
                printf("  12.) Central\n");
                printf("  13.) Junkyard\n");
                printf("  14.) Warehouse\n");
                printf(">> Back to menu.\n\n");
                printf("==================================================\n\n");
            }

            cl =getch();
            system("cls");
            if(cl==13)
            {
                if(hs==1)
                {
                    locate = 0;
                    lo_home();
                    menu();
                }
                else if(hs==2)
                {
                    locate = 1;
                    lo_office();
                    menu();
                }
                else if(hs==3)
                {
                    locate = 2;
                    lo_abandoned_house();
                    menu();
                }
                else if(hs==4)
                {
                    locate = 3;
                    lo_shop();
                    menu();
                }
                else if(hs==5)
                {
                    locate = 4;
                    lo_bank();
                    menu();
                }
                else if(hs==6)
                {
                    locate = 5;
                    lo_goverment();
                    menu();
                }
                else if(hs==7)
                {
                    locate = 6;
                    lo_river();
                    menu();
                }
                else if(hs==8)
                {
                    locate = 7;
                    lo_hospital();
                    menu();
                }
                else if(hs==9)
                {
                    locate = 8;
                    lo_police_station();
                    menu();
                }
                else if(hs==10)
                {
                    locate = 9;
                    lo_restuarant();
                    menu();
                }
                else if(hs==11)
                {
                    locate = 10;
                    lo_forest();
                    menu();
                }
                else if(hs==12)
                {
                    locate = 11;
                    lo_central();
                    menu();
                }
                else if(hs==13)
                {
                    locate = 12;
                    lo_junkyard();
                    menu();
                }
                else if(hs==14)
                {
                    locate = 13;
                    lo_warehouse();
                    menu();
                }
                else
                {
                    menu();
                }

            }
        }
    }
}

//FUNCTION BODY == [UI INVENTORY]
void ui_inventory()
{
    system("cls");
    printf("=====================INVENTORY====================\n\n");
    if(button==1)
    {
        printf("%s\n",item[0]);
    }
    if(name_card==1)
    {
        printf("%s\n",item[1]);
    }
    if(D_cameo==1)
    {
        printf("%s\n",item[2]);
    }
    if(feather==1)
    {
        printf("%s\n",item[3]);
    }
    if(syringe==1)
    {
        printf("%s\n",item[4]);
    }
    if(key==1)
    {
        printf("%s\n",item[5]);
    }
    if(watch==1)
    {
        printf("%s\n",item[6]);
    }
    if(ring==1)
    {
        printf("%s\n",item[7]);
    }
    if(document==1)
    {
        printf("%s\n",item[8]);
    }
    if(knife==1)
    {
        printf("%s\n",item[9]);
    }
    if(gun==1)
    {
        printf("%s\n",item[10]);
    }
    if(bell==1)
    {
        printf("%s\n",item[11]);
    }
    printf("\n==================================================\n\n");
    printf("Input the name of item to see the story.\nOr input nothing to back to menu.\n\n");
    printf("Name of item : ");
    fflush(stdin);
    gets(story);
    story_item();
}

//FUNCTION BODY == [UI SAVE]
void ui_save()
{
    FILE* output;
    output = fopen("save1.dat", "wb");
    fwrite(&ch, 1,sizeof(ch), output);
	fwrite(&stable, 1,sizeof(stable), output);
    fwrite(&y, 1,sizeof(y), output);
    fwrite(&locate, 1,sizeof(locate), output);
    fwrite(&button, 1,sizeof(button), output);
    fwrite(&name_card, 1,sizeof(name_card), output);
    fwrite(&D_cameo, 1,sizeof(D_cameo), output);
    fwrite(&feather, 1,sizeof(feather), output);
    fwrite(&syringe, 1,sizeof(syringe), output);
    fwrite(&key, 1,sizeof(key), output);
    fwrite(&watch, 1,sizeof(watch), output);
    fwrite(&ring, 1,sizeof(ring), output);
    fwrite(&document, 1,sizeof(document), output);
    fwrite(&knife, 1,sizeof(knife), output);
    fwrite(&gun, 1,sizeof(gun), output);
    fwrite(&bell, 1,sizeof(bell), output);
    fclose(output);

    system("cls");
    char save[1000] = {"\t\t. . .SAVING. . .\n"};
    char complete[1000] = {"\t\t===Complete!!===\n\n"};

    printf("==================================================\n\n");
    for (i = 0; i < strlen(save); i++)
    {
        delay(2);
        printf("%c",save[i]);
    }
    for (i = 0; i < strlen(complete); i++)
    {
        delay(1);
        printf("%c",complete[i]);
    }
    printf("==================================================\n\n");
    printf("Press ENTER to back to menu.");
    getchar();
    menu();
}

//FUNCTION BODY == [UI LOAD]
void ui_load()
{
    FILE* input;
    input = fopen("save1.dat", "rb");
    fread(&ch, 1,sizeof(ch), input);
	fread(&stable, 1,sizeof(stable), input);
    fread(&locate, 1,sizeof(locate), input);
    fread(&y, 1,sizeof(y), input);
    fread(&button, 1,sizeof(button), input);
    fread(&name_card, 1,sizeof(name_card), input);
    fread(&D_cameo, 1,sizeof(D_cameo), input);
    fread(&feather, 1,sizeof(feather), input);
    fread(&syringe, 1,sizeof(syringe), input);
    fread(&key, 1,sizeof(key), input);
    fread(&watch, 1,sizeof(watch), input);
    fread(&ring, 1,sizeof(ring), input);
    fread(&document, 1,sizeof(document), input);
    fread(&knife, 1,sizeof(knife), input);
    fread(&gun, 1,sizeof(gun), input);
    fread(&bell, 1,sizeof(bell), input);
    fclose(input);

    system("cls");
    char load[1000] = {"\t\t. . .LOADING. . .\n"};
    char complete[1000] = {"\t\t===Complete!!!===\n\n"};

    printf("==================================================\n\n");
    for (i = 0; i < strlen(load); i++)
    {
        delay(2);
        printf("%c",load[i]);
    }
    for (i = 0; i < strlen(complete); i++)
    {
        delay(1);
        printf("%c",complete[i]);
    }
    printf("==================================================\n\n");
    printf("Press ENTER to continue.");
    getchar();
    menu();
}

//FUNCTION BODY == [STORY OF ITEM]
void story_item()
{
    for(i=0; i<strlen(story); i++)
    {
        story[i] = tolower(story[i]);
    }

    if(strcmp(story,"button")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_button); i++)
        {
            delay(1);
            printf("%c",story_button[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"name card")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_name_card); i++)
        {
            delay(1);
            printf("%c",story_name_card[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"d cameo")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_d_cameo); i++)
        {
            delay(1);
            printf("%c",story_d_cameo[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"feather")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_feather); i++)
        {
            delay(1);
            printf("%c",story_feather[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"syringe")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_syringe); i++)
        {
            delay(1);
            printf("%c",story_syringe[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"key")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_key); i++)
        {
            delay(1);
            printf("%c",story_key[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"watch")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_watch); i++)
        {
            delay(1);
            printf("%c",story_watch[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"ring")==0)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(story_ring); i++)
        {
            delay(1);
            printf("%c",story_ring[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        menu();
    }
    else if(strcmp(story,"")==0)
    {
        menu();
    }
    else
    {
        ui_inventory();
    }
}

//FUNCTION BODY == [TIME DELEY]
void delay(int number_of_seconds)
{
    int milli_seconds = 50 * number_of_seconds;
    clock_t start_time = clock();
    while (clock() < start_time + milli_seconds);
}

//FUNCTION BODY == [MINIGAME - FINDSUM]
void minigame_findsum()
{
//GAME PART
    system("cls");
    srand(time(0));
    char game[1000] = {"For this game you have to find the summation of\nnumbers in 5 seconds.\n\nQuestion : "};

    printf("==================================================\n\n");
    for (i = 0; i < strlen(game); i++)
    {
        delay(1);
        printf("%c",game[i]);
    }

    for(i = 0 ; i<3 ; i++)
    {
        delay(5);
        num[i] = rand()% (100 + 1 - 0) + 0;
        printf(" %d ", num[i]);
        if(i<2)
        {
            printf("+");
        }
    }

    printf("\n\nDo not use any calculater!!!\n");
    ans = num[0] + num[1] + num[2];

    for (i = 0; i < 6; i++)
    {
        delay(20);
        if(i<5)
            printf("\n\n%2d seconds have passed", i + 1);
    }
//ANSWER PART
    system("cls");
    char correct[1000] = {"\t\tYou are win!!\n\nIf you want to check your item, you can check it\nin your inventory.\n\n"};
    char wrong[1000] = {"\tOh no...You are lose, Goodbye...\n\n"};
    printf("==================================================\n");
    printf("\nTime up!!! Fill the answer.\n");
    printf("Your answer : ");
    fflush(stdin);
    scanf("%d",&n);
    fflush(stdin);

    if(ans==n)
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(correct); i++)
        {
            delay(1);
            printf("%c",correct[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        x=1;
        getchar();
    }
    else
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(wrong); i++)
        {
            delay(1);
            printf("%c",wrong[i]);
        }
        printf("==================================================\n");
        getch();
        exit(0);
    }
}

//FUNCTION BODY == [MINIGAME - FIND'Q']
void minigame_findpq()
{
//GAME PART
    system("cls");
    srand(time(0));
    int i,j,row,col,a,b;
    char game[1000] = {"For this game you have to find 'q' in 3 seconds\n\nLet's start!!!!!\n.\n.\n.\n.\n.\n"};

    printf("==================================================\n\n");
    for (i = 0; i < strlen(game); i++)
    {
        delay(1);
        printf("%c",game[i]);
    }

    row = rand()% (9 + 1 - 1) + 1;
    col = rand()% (9 + 1 - 1) + 1;

    printf("\n");
    for(i=0 ; i<10 ; i++)
    {
        for(j=0 ; j<10 ; j++)
        {
            if(i==0)
            {
                printf("%d|",j);
            }
            else if(j==0)
            {
                printf("\n%d|",i);
            }
            if(i==col && j==row)
            {
                printf("q|");
            }
            else if(i!=0&&j!=0)
            {
                printf("p|");
            }
        }
    }

    for (i = 0; i < 4; i++)
    {
        delay(20);
        if(i<3)
            printf("\n\n%2d seconds have passed", i + 1);
    }
//ANSWER PART
    system("cls");
    char correct[1000] = {"\t\tYou are win!!\n\nIf you want to check your item, you can check it\nin your inventory.\n\n"};
    char wrong[1000] = {"\tOh no...You are lose, Goodbye...\n\n"};
    printf("==================================================\n");
    printf("\nRow   = ");
    fflush(stdin);
    scanf("%1d",&a);
    printf("\nColum = ");
    fflush(stdin);
    scanf("%1d",&b);
    fflush(stdin);

    if(b==row&&a==col)
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(correct); i++)
        {
            delay(1);
            printf("%c",correct[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        x=1;
        getchar();
    }
    else
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(wrong); i++)
        {
            delay(1);
            printf("%c",wrong[i]);
        }
        printf("==================================================\n");
        getch();
        exit(0);
    }
}

//FUNCTION BODY == [MINIGAME - PASSWORD]
void minigame_password()
{
//GAME PART
    system("cls");
    srand(time(0));
    int i,j,code[5],n=0;
    char password[5],ans[5],alphabet[36]= {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','1','2','3','4','5','6','7','8','9'};
    char game[1000] = {"For this game you have to remember the passwords.\n\nLet's start!!!!!\n.\n.\n.\n.\n.\n"};

    printf("==================================================\n\n");
    for (i = 0; i < strlen(game); i++)
    {
        delay(1);
        printf("%c",game[i]);
    }

    for(i=0 ; i<5 ; i++)
    {
        j = rand()% (34 + 1 - 0) + 0;
        password[i] = alphabet[j];
    }
    printf("\n");
    for (i=0 ; i<5 ; i++)
    {
        delay(5);
        printf("%c\n",password[i]);
    }
    delay(10);

//ANSWER PART
    system("cls");
    char correct[1000] = {"\t\tYou are win!!\n\nIf you want to check your item, you can check it\nin your inventory.\n\n"};
    char wrong[1000] = {"\tOh no...You are lose, Goodbye...\n\n"};
    printf("==================================================\n");
    printf("\nWhat is passwords?\n");
    printf("Passwords : ");
    fflush(stdin);
    scanf("%c%c%c%c%c",&ans[0],&ans[1],&ans[2],&ans[3],&ans[4]);
    fflush(stdin);

    for(i=0 ; i<5 ; i++)
    {
        if(ans[i] != password[i])
        {
            break;
        }
        else
        {
            n++;
        }
    }

    if(n == 5)
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(correct); i++)
        {
            delay(1);
            printf("%c",correct[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        x=1;
        getchar();
    }
    else
    {
        printf("\n==================================================\n\n");
        for (i = 0; i < strlen(wrong); i++)
        {
            delay(1);
            printf("%c",wrong[i]);
        }
        printf("==================================================\n");
        getch();
        exit(0);
    }
}

//FUNCTION BODY == [RANDOM MINIGAME]
void game()
{
    int a=0;

    srand(time(0));

    a = rand()%(3+1-1)+1;

    if(a==1)
    {
        minigame_findsum();
    }
    else if(a==2)
    {
        minigame_findpq();
    }
    else if(a==3)
    {
        minigame_password();
    }
}

//FUNCTION BODY == [LOCATION - HOME]
void lo_home()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_home); i++)
        {
            delay(1);
            printf("%c",ch1_home[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_home); i++)
        {
            delay(1);
            printf("%c",ch2_home[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_home); i++)
        {
            delay(1);
            printf("%c",ch3_home[i]);
        }
        printf("==================================================\n\n");
        getch();
        exit(0);
    }
}

//FUNCTION BODY == [LOCATION - OFFICE]
void lo_office()
{
    if(ch==1)
    {
        if(y==0)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch1_office); i++)
            {
                delay(1);
                printf("%c",ch1_office[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(use); i++)
            {
                delay(1);
                printf("%c",use[i]);
            }
            printf("==================================================\n\n");
            if(button==1)
            {
                printf("%s\n",item[0]);
            }
            if(name_card==1)
            {
                printf("%s\n",item[1]);
            }
            printf("\nYour Choice : ");
            fflush(stdin);
            gets(condition);
            fflush(stdin);
            use_item();
        }

    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_office); i++)
        {
            delay(1);
            printf("%c",ch2_office[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_office); i++)
        {
            delay(1);
            printf("%c",ch3_office[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - ABANDONED HOUSE]
void lo_abandoned_house()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_abandonedhouse); i++)
        {
            delay(1);
            printf("%c",ch1_abandonedhouse[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_abandonedhouse); i++)
        {
            delay(1);
            printf("%c",ch2_abandonedhouse[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        if(strcmp(stable,"syringe")==0)
        {
            if(ring==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_abandonedhouse); i++)
                {
                    delay(1);
                    printf("%c",ch3_abandonedhouse[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to back to menu.");
                getchar();
                ui_map();
            }
            else if(ring==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(use); i++)
                {
                    delay(1);
                    printf("%c",use[i]);
                }
                printf("==================================================\n\n");
                if(ring==1)
                {
                    printf("%s\n",item[7]);
                }
                printf("\nYour Choice : ");
                fflush(stdin);
                gets(condition);
                fflush(stdin);
                use_item();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_abandonedhouse); i++)
            {
                delay(1);
                printf("%c",ch3_abandonedhouse[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
    }
}

//FUNCTION BODY == [LOCATION - SHOP]
void lo_shop()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_shop); i++)
        {
            delay(1);
            printf("%c",ch1_shop[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        if(y==0)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_shop); i++)
            {
                delay(1);
                printf("%c",ch2_shop[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(use); i++)
            {
                delay(1);
                printf("%c",use[i]);
            }
            printf("==================================================\n\n");
            if(feather==1)
            {
                printf("%s\n",item[3]);
            }
            printf("\nYour Choice : ");
            fflush(stdin);
            gets(condition);
            use_item();
        }
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_shop); i++)
        {
            delay(1);
            printf("%c",ch3_shop[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - BANK]
void lo_bank()
{
    if(ch==1)
    {
        if(name_card==0)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch1_bank_it); i++)
            {
                delay(1);
                printf("%c",ch1_bank_it[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            if(x==1)
            {
                name_card = 1;
                y++;
                x=0;
            }
            menu();
        }
        else if(name_card==1)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(again); i++)
            {
                delay(1);
                printf("%c",again[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            x=0;
            menu();
        }
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_bank); i++)
        {
            delay(1);
            printf("%c",ch2_bank[i]);
        }
        printf("==================================================\n\n");
        getch();
        exit(0);
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_bank); i++)
        {
            delay(1);
            printf("%c",ch3_bank[i]);
        }
        printf("==================================================\n\n");
        getch();
        exit(0);
    }
}

//FUNCTION BODY == [LOCATION - GOVERMENT]
void lo_goverment()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_government); i++)
        {
            delay(1);
            printf("%c",ch1_government[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_government); i++)
        {
            delay(1);
            printf("%c",ch2_government[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        if(strcmp(stable,"d cameo")==0)
        {
            if(key==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_government); i++)
                {
                    delay(1);
                    printf("%c",ch3_government[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to back to menu.");
                getchar();
                ui_map();
            }
            else if(key==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(use); i++)
                {
                    delay(1);
                    printf("%c",use[i]);
                }
                printf("==================================================\n\n");
                if(key==1)
                {
                    printf("%s\n",item[5]);
                }
                printf("\nYour Choice : ");
                fflush(stdin);
                gets(condition);
                fflush(stdin);
                use_item();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_government); i++)
            {
                delay(1);
                printf("%c",ch3_government[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
    }
}

//FUNCTION BODY == [LOCATION - RIVER]
void lo_river()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_river); i++)
        {
            delay(1);
            printf("%c",ch1_river[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_river); i++)
        {
            delay(1);
            printf("%c",ch2_river[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        if(strcmp(stable,"feather")==0)
        {
            if(watch==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_river_it); i++)
                {
                    delay(1);
                    printf("%c",ch3_river_it[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                if(x==1)
                {
                    watch = 1;
                    y++;
                    x=0;
                }
                menu();
            }
            else if(watch==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(again); i++)
                {
                    delay(1);
                    printf("%c",again[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                x=0;
                menu();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_river); i++)
            {
                delay(1);
                printf("%c",ch3_river[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }

    }
}

//FUNCTION BODY == [LOCATION - HOSPITAL]
void lo_hospital()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_hospital); i++)
        {
            delay(1);
            printf("%c",ch1_hospital[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        if(strcmp(stable,"name card")==0)
        {
            if(syringe==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0 ; i < strlen(ch2_hospital_it) ; i++)
                {
                    delay(1);
                    printf("%c",ch2_hospital_it[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                if(x==1)
                {
                    syringe = 1;
                    y++;
                    x=0;
                }
                menu();
            }
            else if(syringe==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(use); i++)
                {
                    delay(1);
                    printf("%c",use[i]);
                }
                printf("==================================================\n\n");
                if(syringe==1)
                {
                    printf("%s\n",item[4]);
                }
                printf("\nYour Choice : ");
                fflush(stdin);
                gets(condition);
                fflush(stdin);
                use_item();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_hospital); i++)
            {
                delay(1);
                printf("%c",ch2_hospital[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_hospital); i++)
        {
            delay(1);
            printf("%c",ch3_hospital[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - POLICE STATION]
void lo_police_station()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_policeoffice); i++)
        {
            delay(1);
            printf("%c",ch1_policeoffice[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        if(strcmp(stable,"button")==0)
        {
            if(D_cameo==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0 ; i < strlen(ch2_policeoffice_it) ; i++)
                {
                    delay(1);
                    printf("%c",ch2_policeoffice_it[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                if(x==1)
                {
                    D_cameo = 1;
                    y++;
                    x=0;
                }
                menu();
            }
            else if(D_cameo==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(use); i++)
                {
                    delay(1);
                    printf("%c",use[i]);
                }
                printf("==================================================\n\n");
                if(D_cameo==1)
                {
                    printf("%s\n",item[2]);
                }
                printf("\nYour Choice : ");
                fflush(stdin);
                gets(condition);
                fflush(stdin);
                use_item();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_policeoffice); i++)
            {
                delay(1);
                printf("%c",ch2_policeoffice[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_policeoffice); i++)
        {
            delay(1);
            printf("%c",ch3_policeoffice[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - RESTUARANT]
void lo_restuarant()
{
    if(ch==1)
    {
        if(button==0)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch1_restuarant_it); i++)
            {
                delay(1);
                printf("%c",ch1_restuarant_it[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            if(x==1)
            {
                button = 1;
                y++;
                x=0;
            }
            menu();
        }
        else if(button==1)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(again); i++)
            {
                delay(1);
                printf("%c",again[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            x=0;
            menu();
        }

    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_restuarant); i++)
        {
            delay(1);
            printf("%c",ch2_restuarant[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_restuarant); i++)
        {
            delay(1);
            printf("%c",ch3_restuarant[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - FOREST]
void lo_forest()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_forest); i++)
        {
            delay(1);
            printf("%c",ch1_forest[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        if(feather==0)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_forest_it); i++)
            {
                delay(1);
                printf("%c",ch2_forest_it[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            if(x==1)
            {
                feather = 1;
                y++;
                x=0;
            }
            menu();
        }
        else if(feather==1)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(again); i++)
            {
                delay(1);
                printf("%c",again[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to continue.");
            getchar();
            game();
            x=0;
            menu();
        }
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_forest); i++)
        {
            delay(1);
            printf("%c",ch3_forest[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - CENTRAL]
void lo_central()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_central); i++)
        {
            delay(1);
            printf("%c",ch1_central[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_central); i++)
        {
            delay(1);
            printf("%c",ch2_central[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch3_central); i++)
        {
            delay(1);
            printf("%c",ch3_central[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
}

//FUNCTION BODY == [LOCATION - JUNKYARD]
void lo_junkyard()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_junkyard); i++)
        {
            delay(1);
            printf("%c",ch1_junkyard[i]);
        }
        printf("==================================================\n\n");
        getch();
        exit(0);
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_junkyard); i++)
        {
            delay(1);
            printf("%c",ch2_junkyard[i]);
        }
        printf("==================================================\n\n");
        getch();
        exit(0);
    }
    else if(ch==3)
    {
        if(strcmp(stable,"d cameo")==0)
        {
            if(key==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_junkyard_it); i++)
                {
                    delay(1);
                    printf("%c",ch3_junkyard_it[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                if(x==1)
                {
                    key = 1;
                    y++;
                    x=0;
                }
                menu();
            }
            else if(key==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(again); i++)
                {
                    delay(1);
                    printf("%c",again[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                x=0;
                menu();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_junkyard); i++)
            {
                delay(1);
                printf("%c",ch3_junkyard[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }

    }
}

//FUNCTION BODY == [LOCATION - WAREHOUSE]
void lo_warehouse()
{
    if(ch==1)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch1_warehourse); i++)
        {
            delay(1);
            printf("%c",ch1_warehourse[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==2)
    {
        system("cls");
        printf("==================================================\n\n");
        for (i = 0; i < strlen(ch2_warehourse); i++)
        {
            delay(1);
            printf("%c",ch2_warehourse[i]);
        }
        printf("==================================================\n\n");
        printf("Press ENTER to back to menu.");
        getchar();
        ui_map();
    }
    else if(ch==3)
    {
        if(strcmp(stable,"syringe")==0)
        {
            if(ring==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_warehourse_it); i++)
                {
                    delay(1);
                    printf("%c",ch3_warehourse_it[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                if(x==1)
                {
                    ring = 1;
                    y++;
                    x=0;
                }
                menu();
            }
            else if(ring==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(again); i++)
                {
                    delay(1);
                    printf("%c",again[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to continue.");
                getchar();
                game();
                x=0;
                menu();
            }
        }
        else if(strcmp(stable,"feather")==0)
        {
            if(watch==0)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(ch3_warehourse); i++)
                {
                    delay(1);
                    printf("%c",ch3_warehourse[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to back to menu.");
                getchar();
                ui_map();
            }
            else if(watch==1)
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(use); i++)
                {
                    delay(1);
                    printf("%c",use[i]);
                }
                printf("==================================================\n\n");
                if(watch==1)
                {
                    printf("%s\n",item[6]);
                }
                printf("\nYour Choice : ");
                fflush(stdin);
                gets(condition);
                fflush(stdin);
                use_item();
            }
        }
        else
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_warehourse); i++)
            {
                delay(1);
                printf("%c",ch3_warehourse[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            ui_map();
        }

    }
}

//FUNCTION BODY == [USE ITEM]
void use_item()
{
    for(i=0; i<strlen(condition); i++)
    {
        condition[i] = tolower(condition[i]);
    }

    if(strcmp(condition,"button")!=0&&strcmp(condition,"name card")!=0&&strcmp(condition,"d cameo")!=0&&strcmp(condition,"feather")!=0&&strcmp(condition,"syringe")!=0&&strcmp(condition,"key")!=0&&strcmp(condition,"watch")!=0&&strcmp(condition,"ring")!=0&&strcmp(condition,"document")!=0&&strcmp(condition,"knife")!=0&&strcmp(condition,"gun")!=0&&strcmp(condition,"bell")!=0)
    {
        if(strcmp(condition,"")==0)
        {
            if(ch == 4)
            {
                printf("\nYou need to choose something!\n\n");
                printf("==================================================\n\n");
                chapter_4();
            }
            else
            {
                menu();
            }
        }
        else if(strcmp(condition,"run")==0 && locate==13)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end3); i++)
            {
                delay(1);
                printf("%c",end3[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else if(strcmp(condition,"fight")==0 && locate==13)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end4); i++)
            {
                delay(1);
                printf("%c",end4[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else
        {
            if(ch == 4)
            {
                printf("\nI don't have that choice!\n\n");
                printf("==================================================\n\n");
                chapter_4();
            }
            else
            {
                system("cls");
                printf("==================================================\n\n");
                for (i = 0; i < strlen(idk); i++)
                {
                    delay(1);
                    printf("%c",idk[i]);
                }
                printf("==================================================\n\n");
                printf("Press ENTER to back to menu.");
                getchar();
            }
        }
    }
    else
    {
        if(strcmp(condition,"button")==0 && locate==1)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_story_button); i++)
            {
                delay(1);
                printf("%c",ch2_story_button[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            y=0;
            printf("Press ENTER to continue.");
            getchar();
            menu();
        }
        else if(strcmp(condition,"name card")==0 && locate==1)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch2_story_name_card); i++)
            {
                delay(1);
                printf("%c",ch2_story_name_card[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            y=0;
            printf("Press ENTER to continue.");
            getchar();
            menu();
        }
        else if(strcmp(condition,"d cameo")==0 && locate==8)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_story_Dcameo); i++)
            {
                delay(1);
                printf("%c",ch3_story_Dcameo[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            y=0;
            printf("Press ENTER to continue.");
            getchar();
            menu();
        }
        else if(strcmp(condition,"feather")==0 && locate==3)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_story_feather); i++)
            {
                delay(1);
                printf("%c",ch3_story_feather[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            y=0;
            printf("Press ENTER to continue.");
            getchar();
            menu();
        }
        else if(strcmp(condition,"syringe")==0 && locate==7)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch3_story_syringe); i++)
            {
                delay(1);
                printf("%c",ch3_story_syringe[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            y=0;
            printf("Press ENTER to continue.");
            getchar();
            menu();
        }
        else if(strcmp(condition,"key")==0 && locate==5)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch4_story_key); i++)
            {
                delay(1);
                printf("%c",ch4_story_key[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            chapter_4();
        }
        else if(strcmp(condition,"watch")==0 && locate==13)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch4_story_watch); i++)
            {
                delay(1);
                printf("%c",ch4_story_watch[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            chapter_4();
        }
        else if(strcmp(condition,"ring")==0 && locate==2)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(ch4_story_ring); i++)
            {
                delay(1);
                printf("%c",ch4_story_ring[i]);
            }
            printf("==================================================\n\n");
            strcpy(stable,condition);
            ch++;
            chapter_4();
        }
        else if(strcmp(condition,"document")==0 && locate==5)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end1); i++)
            {
                delay(1);
                printf("%c",end1[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else if(strcmp(condition,"knife")==0 && locate==2)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end6); i++)
            {
                delay(1);
                printf("%c",end6[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else if(strcmp(condition,"gun")==0 && locate==2)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end5); i++)
            {
                delay(1);
                printf("%c",end5[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else if(strcmp(condition,"bell")==0 && locate==5)
        {
            system("cls");
            printf("==================================================\n\n");
            for (i = 0; i < strlen(end2); i++)
            {
                delay(1);
                printf("%c",end2[i]);
            }
            printf("==================================================\n");
            getch();
            exit(0);
        }
        else
        {
            printf("==================================================\n\n");
            for (i = 0; i < strlen(cant); i++)
            {
                delay(1);
                printf("%c",cant[i]);
            }
            printf("==================================================\n\n");
            printf("Press ENTER to back to menu.");
            getchar();
            menu();
        }
    }


}

//FUNCTION BODY == [CHAPTER 4]
void chapter_4()
{
    if(strcmp(stable,"key")==0)
    {
        printf("Your Choice : ");
        fflush(stdin);
        gets(condition);
        use_item();
    }
    else if(strcmp(stable,"watch")==0)
    {
        printf("Your Choice : ");
        fflush(stdin);
        gets(condition);
        use_item();
    }
    else if(strcmp(stable,"ring")==0)
    {
        printf("Your Choice : ");
        fflush(stdin);
        gets(condition);
        use_item();
    }
}

///////////////////////////////
//////////MAIN PROGRAM//////////
///////////////////////////////
int main()
{
    mainmenu();
}
///////////////////////////////
///////////////////////////////
///////////////////////////////
