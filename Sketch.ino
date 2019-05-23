#include <MeggyJrSimple.h>    
int x,y;
int color;
void setup()                   
{
  MeggyJrSimpleSetup();  
}

void loop() 
{
  DrawPlayer();
  MovePlayer();
  DisplaySlate();
}

void DrawPlayer()
{
  DrawPx(x,y,color);
}

void MovePlayer()
{
  CheckButtonsPress();
  if (Button_B)
  {
    color = random(7) + 1;
  }

  if (Button_A)
  {
    ClearSlate();
  }
  if (Button_Left)
  {
    if (x>0)
    {
      x--;
    }
  }
  if (Button_Right)
  {
    if (x<8)
    {
      x++;
    }
  }
  if (Button_Down)
  {
    if (y>0)
    {
      y--;
    }
  }
  if (Button_Up)
  {
    if (y<8)
    {
      y++;
    }
  }
}
