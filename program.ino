/*
  Tell DCS-BIOS to use a serial connection and use interrupt-driven
  communication. The main program will be interrupted to prioritize
  processing incoming data.
  
  This should work on any Arduino that has an ATMega328 controller
  (Uno, Pro Mini, many others).
 */
#define DCSBIOS_IRQ_SERIAL

#include "DcsBios.h"

/* paste code snippets from the reference documentation here */
DcsBios::Switch2Pos rightDdiPb01("RIGHT_DDI_PB_01", 2);
DcsBios::Switch2Pos rightDdiPb02("RIGHT_DDI_PB_02", 3);
DcsBios::Switch2Pos rightDdiPb03("RIGHT_DDI_PB_03", 4);
DcsBios::Switch2Pos rightDdiPb04("RIGHT_DDI_PB_04", 5);
DcsBios::Switch2Pos rightDdiPb05("RIGHT_DDI_PB_05", 6);
DcsBios::Switch2Pos rightDdiPb06("RIGHT_DDI_PB_06", 7);
DcsBios::Switch2Pos rightDdiPb07("RIGHT_DDI_PB_07", 8);
DcsBios::Switch2Pos rightDdiPb08("RIGHT_DDI_PB_08", 9);
DcsBios::Switch2Pos rightDdiPb09("RIGHT_DDI_PB_09", 10);
DcsBios::Switch2Pos rightDdiPb10("RIGHT_DDI_PB_10", 11);
DcsBios::Switch2Pos rightDdiPb11("RIGHT_DDI_PB_11", 12);
DcsBios::Switch2Pos rightDdiPb12("RIGHT_DDI_PB_12", 13);
DcsBios::Switch2Pos rightDdiPb13("RIGHT_DDI_PB_13", 14);
DcsBios::Switch2Pos rightDdiPb14("RIGHT_DDI_PB_14", 15);
DcsBios::Switch2Pos rightDdiPb15("RIGHT_DDI_PB_15", 16);
DcsBios::Switch2Pos rightDdiPb16("RIGHT_DDI_PB_16", 17);
DcsBios::Switch2Pos rightDdiPb17("RIGHT_DDI_PB_17", 18);
DcsBios::Switch2Pos rightDdiPb18("RIGHT_DDI_PB_18", 19);
DcsBios::Switch2Pos rightDdiPb19("RIGHT_DDI_PB_19", 20);
DcsBios::Switch2Pos rightDdiPb20("RIGHT_DDI_PB_20", 21);
DcsBios::Switch2Pos leftDdiPb01("LEFT_DDI_PB_01", 22);
DcsBios::Switch2Pos leftDdiPb02("LEFT_DDI_PB_02", 23);
DcsBios::Switch2Pos leftDdiPb03("LEFT_DDI_PB_03", 24);
DcsBios::Switch2Pos leftDdiPb04("LEFT_DDI_PB_04", 25);
DcsBios::Switch2Pos leftDdiPb05("LEFT_DDI_PB_05", 26);
DcsBios::Switch2Pos leftDdiPb06("LEFT_DDI_PB_06", 27);
DcsBios::Switch2Pos leftDdiPb07("LEFT_DDI_PB_07", 28);
DcsBios::Switch2Pos leftDdiPb08("LEFT_DDI_PB_08", 29);
DcsBios::Switch2Pos leftDdiPb09("LEFT_DDI_PB_09", 30);
DcsBios::Switch2Pos leftDdiPb10("LEFT_DDI_PB_10", 31);
DcsBios::Switch2Pos leftDdiPb11("LEFT_DDI_PB_11", 32);
DcsBios::Switch2Pos leftDdiPb12("LEFT_DDI_PB_12", 33);
DcsBios::Switch2Pos leftDdiPb13("LEFT_DDI_PB_13", 34);
DcsBios::Switch2Pos leftDdiPb14("LEFT_DDI_PB_14", 35);
DcsBios::Switch2Pos leftDdiPb15("LEFT_DDI_PB_15", 36);
DcsBios::Switch2Pos leftDdiPb16("LEFT_DDI_PB_16", 37);
DcsBios::Switch2Pos leftDdiPb17("LEFT_DDI_PB_17", 38);
DcsBios::Switch2Pos leftDdiPb18("LEFT_DDI_PB_18", 39);
DcsBios::Switch2Pos leftDdiPb19("LEFT_DDI_PB_19", 40);
DcsBios::Switch2Pos leftDdiPb20("LEFT_DDI_PB_20", 41);


void setup() {
  DcsBios::setup();
}

void loop() {
  DcsBios::loop();
}

