int getchar();
int putchar(int c);

int main()
{
  char *s = "                   .MMM.\n                     .OMM                       MM?\n                      ~MMM                              .  ..\n                    =MM~MM8                    . :ZMMMMMMMMM:\n                   MM8  +MM.       . :OMMMMMMMD+....NMMD.  :MM\n                .MM8.    MMO .MMM8,.  .     .. NMMD..  MMMMMMM\n         .MMN  'MO       .MM.  ..MMM. .   OMMM . .?MMMMMMMMMMM\n    MMD=.  :M.  8.       .,ZM .MMM. .$MMM.... MMMMMMMMMMMMMMMM\n    MMMI.. ...  MM.. ....   .$ ..MMMO. ...MMMMMMMMMMMMMMMM7\n    MD .MMM8.. ...MMMM...   NMMO .   8MMMMMMMMMMMMMMMM .    IM\n    MD     ...ZMMMMMMMMMMMD.. ..~MMMMMMMMMMMMMMMM?.   ..MMMMMM\n    MD                    ..MMMMMMMMMMMMMMMMN .  . OMMMMMMMMMM\n    MD                   .MMMMMMMMMMMMMM8  .  .NMMMMMMMMMMMMMM\n    MD                   .MMMMMMMMMM. .   +MMMMMMMMMMMMMMMM~..\n    MD                   .MMMMMI.  .. MMMMMMMMMMMMMMMM8 ...,MM\n    MD                   .M.. .  ?MMMMMMMMMMMMMMMM.....DMMMMMM\n    MD                       $MMMMMMMMMMMMMMMM.. . MMMMMMMMMMM\n    MD                   .MMMMMMMMMMMMMMMI. ..7MMMMMMMMMMMMMMM\n    MD                   .MMMMMMMMMMM   . MMMMMMMMMMMMMMMM\n    MD                   .MMMMMM~ .  $MMMMMMMMMMMMMMMM\n    MD                   .MM,. ..8MMMMMMMMMMMMMMMM\n    MD                    ..:MMMMMMMMMMMMMMMM?\n    MM                   .MMMMMMMMMMMMMMN\n     MM                  .MMMMMMMMMM\n      .MMM=..            .MMMMMM\n          '77MMMMMMMMMMMMMM7\n";
  char *p;
  for (p = s; p < s + 1434; p++)
    putchar(*p);
  return 0;
}
