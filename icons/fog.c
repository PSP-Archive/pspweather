int fogWidth = 86;
int fogHeight = 86;
unsigned short fogData[] = {
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x294a,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x318c,0x318c,0x318c,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x318c,0x318c,0x318c,0x318c,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x318c,0x318c,0x318c,0x318c,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x318c,0x2d6b,0x318c,0x318c,0x318c,0x318c,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x318c,0x318c,0x318c,0x318c,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x2d6b,0x2d6b,0x2d6b,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x294a,0x294a,0x294a,0x2529,0x294a,0x294a,0x294a,0x294a,0x294a,0x294a,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0x842,0x842,0x842,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2529,0x2529,0x2529,0x2529,0x2529,0x2529,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0xc63,0xc63,0xc63,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x2108,0x2108,0x2108,0x2108,0x2108,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x1ce7,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x18c6,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x14a5,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0x1084,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0xc63,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0xc63,0x842,0x842,0xc63,0xc63,0xc63,0x842,0x842,0xc63,0xc63,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x842,0x421,0x842,0x421,0x421,0x842,0x842,0x842,0x842,0x842,0x421,0x842,0x842,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x421,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,0x0,
};
