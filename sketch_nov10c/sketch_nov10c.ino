 int GenerateDot() {
    int x = rand() % 8;
    int y = rand() % 8;
    return x, y;
  }

int collision(int x, int y, int snakex, int snakey) {
  if (x == snakex && y == snakey) {
    return 0;
  }
  else {
    return 1;
  }
}
void DotDirection(x,y) {
  int 4direction = rand() % 4;
if (4direction == 1){
  x++;
}
if (4direction == 2){
  x--;
}
if (4direction == 3){
  y++;
}
if (4direction == 0) {
  y--;
}
}

  GenerateDot(); 
}



x,y = GenerateDot();
int check = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
 
}

void loop() {
  while (check == 0) {
    x, y = GenerateDot();
    check = collision(x,y,snakex,snakey);
    LedState(0,x,y,1);
  }
  LedState(0,x,y,0);
  x, y = DotDirection(x,y);
  LedState(0,x,y,1);
}
