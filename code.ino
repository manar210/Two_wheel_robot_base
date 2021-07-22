// C++ code
//
#define Ena 10
#define In1 9
#define In2 7

#define Enb 11
#define In3 12
#define In4 13

int s1=120;
int dir1=1;
int dir2=0;

int s2=120;
int dir3=1;
int dir4=0;
void setup()
{
  pinMode(Ena, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(Enb, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);

}

void loop()
{
  digitalWrite(In1, HIGH);
  digitalWrite(In2, LOW);
  analogWrite(Ena, 120);

  digitalWrite(In3, HIGH);
  digitalWrite(In4, LOW);
  analogWrite(Enb, 120);
}