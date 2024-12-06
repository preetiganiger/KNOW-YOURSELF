#include <iostream>

using namespace std;

int main()
{ int a,b,sum; 
  char x;
   cout<<"\n\nHey!! are you instrested in knowing yourself..?\n";
   cout<<"\nLet us help you to explore yourself by your birth date....\n";
   
   
   std::cout<<"\nEnter your date of the day you born (only one digit)\n\n\n";
   cout<<"\nenter 1st digit of your date:\n";
   cin>>a;
   cout<<"\nenter 2st digit of your date:\n";
   cin>>b;
   sum=a+b;
   if(sum==1||sum==10){ 
    cout<<"\noh you are sun....you are very aggresive\nyou love having attention from others:even though you disagree with it.\nyou have great affinity to words money and power. \nyour are very bold and have don't care personality";
   }else if(sum==2||sum==11){ 
    cout<<"\noh you are moon....you have dual personality\nyou can be aggresive and calm at the sametime and you think you are bold but,you are very sensitive person.\nyou are very creative and very imaginative but,sometimes you feel low and sometimes you feel motivated when you interact with highly ambitious people...\n But you have ability to showcase your best version";
   }else if(sum==3){ 
    cout<<"\nyou are generally positive thinkers and have a childish side that can make them endearing\nyou are outgoing, friendly, and enjoy being around others.\n you are always seeking knowledge and prioritize it over money";
   }else if(sum==4){ 
    cout<<"\nYou are very active and energetic. You are highly analytical, practical, social person.\nYou are not ever expected to give up easily, you are reckless, impatient";
   }else if(sum==5){ 
    cout<<"\nYou are very balanced and independent person.\nyou want to do everything by yourselves and not depend on others\nyour aura charms everyone,and get along.you also encourage individuality.";
   }else if(sum==6){ 
    cout<<"\nyou are magnetic, youthful, gentle, soft-spoken,luxury-loving, artistic..!\nyou are very caring for your family,childrens and give them the top priority of your life.\nyou are secretive by nature and can keep the secrets of others";
   }else if(sum==7){ 
    cout<<"\nyou are said to be dreamer..\nyou are said to be highly opinionated and have very few friends.\nyou are said to have a strong intuition and a gut feeling about things.\nBy you are an intellectual person";
   }else if(sum==8){ 
    cout<<"\nyou are both spiritual and materialistic.\nyou have great self-confidence, inner-strength, inner wisdom but, social status, ego and at the same time\nyou have good judgement and solve difficulties quickly.";
   }else if(sum==9){ 
    cout<<"\nyou are said to be compassionate, generous, and understanding.\nyou are said to be creative and may be drawn to the arts.\nThey are very much enthusiastic in life and see life differently .. ";
   }else{
    cout<<"\n...............error.................\nyou entered data without following the instruction.\n\n";
   }
    return 0;
   
}