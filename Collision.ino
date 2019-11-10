void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  
  
}

int loop() {
  // put your main code here, to run repeatedly:
      if ((hazard.pos[0]==(player1.row || (player1.row)-1 || (player1.row)-2 || (player1.row)-3) && (hazard.pos[1] ==(player1.col || (player1.col)-1 || (player1.col)-2 || (player1.col)_3)))){
        for (int i = 0;i<=7;i++) {
          for (int j =0;j<=7;j++) {
            lc1.setled(0,i,j,1);
          }
        }
      }
      else if (hazard.pos[0]==(player2.row || (player2.row)-1 || (player2.row)-2 || (player2.row)-3) && (hazard.pos[1] ==(player2.col || (player2.col)-1 || (player2.col)-2 || (player2.col)_3)))){
        for (int i = 0;i<=7;i++) {
          for (int j =0;j<=7;j++) {
            lc3.setled(0,i,j,1);;       
    }
  }
 }
}
