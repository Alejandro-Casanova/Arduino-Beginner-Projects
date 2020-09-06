// set an array to store character of “0”
int data[][8] = {
  {0,0,0,0,0,0,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,1,0,0,1,0,0},
  {0,0,0,0,0,0,0,0},
  {0,1,1,1,1,1,1,0},
  {0,0,1,1,1,1,0,0},
  {0,0,0,0,0,0,0,0}
};
unsigned char Text[]={0xaa,0x55,0xaa,0x55,0xaa,0x55,0xaa,0x55};
void Draw_point(unsigned char x,unsigned char y)// point drawing function
{ clear_();
   digitalWrite(x+2, HIGH);
   digitalWrite(y+10, LOW);
   
}
void show_num(void)// display function, call point drawing function
{
  unsigned char i,j,num;
  for(i=0;i<8;i++)
  {
    for(j=0;j<8;j++)
    {
      if(data[i][j]==1)
      Draw_point(j,i);

    }  
  }
}
void setup(){ 
int i = 0 ; 
for(i=2;i<18;i++) 
 { 
   pinMode(i, OUTPUT); 
  }  
  clear_(); 
}
void loop()
{ show_num();    
} 
void clear_(void)// clear screen
{for(int i=2;i<10;i++)
  digitalWrite(i, LOW);
  for(int i=0;i<8;i++)
  digitalWrite(i+10, HIGH);
}
