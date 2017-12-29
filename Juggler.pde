
int Screen = 0;
int timer;
int score;
float ballX;
float ballY;
int ballSize = 30;
int ballColor = color(0, 255, 150);
float gravity = 1; 
float BallVertSpeed = 0;
float BallHorziSpeed = 0;
float airResist = 0.0001;
float friction = 0.1;
color playerColor = color (255,100,100);
float playerWidth = 100;
float playerHeight = 10;
int playerForce = 40; 

void setup()
{
  size(700,700);
  ballX = width/4;
  ballY = height/5; 
  timer = millis();
  score = 0; 
}

void draw()
{
  if(Screen == 0)
  {
    startG();
  }
  else if(Screen == 1)
  {
    playG();
  }
  else if(Screen == 2)
  {
    endG();
  }
}
void beginG()
{
  Screen = 1;
}
void startG()
{
  background(0);
  textAlign(CENTER);
  textSize(32);
  text("Click to Start", height/2, width/2); 
  fill(60, 102, 153);
  text("Click to Start", (height/2)-20, (width/2)-20);
  fill(60, 102, 153, 51);
  text("Click to Start", (height/2)-40, (width/2)-40); 
  fill(60, 102, 153, 51);
  fill(255, 100, 100);
  text("Press Shift for Challenge Mode", height/2, width/2+300);
}
void playG()
{
  background(255);
  drawBall();
  Gravity();
  Borders();
  drawPlayer();
  playerKickBall();
  horizontalSpeed();
  
  int time = (millis()-timer)/1000;
  text(time+"s", width/2 , height/2-100);
  text(score, width/2 , height/2-200);
  
}
void endG()
{
  background(0);
  textAlign(CENTER);
  textSize(32);
  text("You Lose", height/2, width/2+30); 
  fill(150, 102, 153);
  text("Click to Restart", (height/2)-20, (width/2)-20);
  fill(150, 102, 153, 51);
  text("Click to Restart", (height/2)-40, (width/2)-40); 
  fill(150, 102, 153, 51);
  fill(150, 102, 153);
  text("Score: "+score, height/2-100, width/2-100); 
}
public void mousePressed()
{
  if (Screen == 0)
  {
    beginG();
  }
  if (Screen == 2)
   {
     
    restart();
    
   }
}
void drawBall()
{
  fill(ballColor);
  ellipse(ballX, ballY, ballSize, ballSize);
}
void Gravity()
{
  BallVertSpeed += gravity;
  ballY += BallVertSpeed;
  BallVertSpeed -= (BallVertSpeed * airResist);
}
void bounceBottom(float floor)
{
  ballY = floor -(ballSize/2);
  BallVertSpeed*=-1;
  BallVertSpeed -= (BallVertSpeed * friction);
}
void bounceTop(float roof)
{
  ballY = roof +(ballSize/2);
  BallVertSpeed*=-1;
  BallVertSpeed -= (BallVertSpeed * friction);
}
void bounceRight(float wall)
{
  ballX = wall -(ballSize/2);
  BallHorziSpeed*=-1;
  BallHorziSpeed -= (BallHorziSpeed * friction);
}
void bounceLeft(float wall)
{
  ballX = wall +(ballSize/2);
  BallHorziSpeed*=-1;
  BallHorziSpeed -= (BallHorziSpeed * friction);
}
void Borders()
{
  if(ballY+(ballSize/2) > height) 
  {
    Screen = 2; 
    endG();
  }
  if(ballY-(ballSize/2) < 0)
  {
    bounceTop(0);
  }
  if (ballX-(ballSize/2) < 0)
  {
    bounceLeft(0);
  }
  if (ballX-(ballSize/2) > width)
  {
    bounceRight(width);
  }
}
void drawPlayer()
{
  fill(playerColor);
  rectMode(CENTER);
  rect(mouseX, mouseY, playerWidth, playerHeight);
}
void playerKickBall()
{
  float over = mouseY - pmouseY;
  if((ballX+(ballSize/2) > mouseX-(playerWidth/2)) && (ballX - (ballSize/2) < mouseX + (playerWidth/2)))
  {
    if(dist(ballX, ballY, ballX, mouseY) <= (ballSize/2)+abs(over))
    {
      score++;
      bounceBottom(mouseY);
      BallHorziSpeed = (ballX - mouseX)/5;
      if (over<0)
      {
        ballY+=over;
        BallVertSpeed += over;
      }
    }
  }
  
}
void horizontalSpeed()
{
 ballX += BallHorziSpeed;
 BallHorziSpeed -= (BallHorziSpeed * airResist);
}
void restart()
{
  size(700,700);
  timer = millis();
  score = 0;
  Screen = 0;
  BallVertSpeed = 0;
  BallHorziSpeed = 0;
  ballX = width/4;
  ballY = height/5; 
 

}
void keyPressed()
{
  if(Screen == 0)
  {
    if(keyCode == SHIFT)
    {
      ballSize = (int)(Math.random()*50+10);
      ballColor = color((int)(Math.random()*256), (int)(Math.random()*256),(int)(Math.random()*256));
      gravity = (float)Math.random(); 
      airResist = (float)Math.random()/100;
      friction = (float)Math.random()/10;
      playerForce = (int)(Math.random()*100); 
      playerWidth = (int)(Math.random()*200);
      playerHeight = (int)(Math.random()*20);
    }
  }
}