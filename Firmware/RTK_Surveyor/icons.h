//Create a bitmap then use http://en.radzio.dxp.pl/bitmap_converter/ to generate output
//Make sure the bitmap is n*8 pixels tall (pad white pixels to lower area as needed)
//Otherwise the bitmap bitmap_converter will compress some of the bytes together

uint8_t BT_Symbol [] = {
0x18, 0x30, 0xE0, 0xFF, 0xE6, 0x3C, 0x18, 0x06, 0x03, 0x01, 0x3F, 0x19, 0x0F, 0x06, 
};
int BT_Symbol_Height = 14;
int BT_Symbol_Width = 7;

uint8_t WiFi_Symbol [] = {
0x08, 0x04, 0x12, 0x09, 0x25, 0x95, 0xD5, 0x95, 0x25, 0x09, 0x12, 0x04, 0x08, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 
};
int WiFi_Symbol_Height = 9;
int WiFi_Symbol_Width = 13;

uint8_t CrossHair [] = {
0x80, 0x80, 0xF0, 0x88, 0x84, 0x84, 0x84, 0x7F, 0x84, 0x84, 0x84, 0x88, 0xF0, 0x80, 0x80, 0x00,
0x00, 0x07, 0x08, 0x10, 0x10, 0x10, 0x7F, 0x10, 0x10, 0x10, 0x08, 0x07, 0x00, 0x00, 
};
int CrossHair_Height = 15;
int CrossHair_Width = 15;

uint8_t CrossHairDual [] = {
0x80, 0x80, 0xF0, 0x88, 0xE4, 0x94, 0x94, 0x7F, 0x94, 0x94, 0xE4, 0x88, 0xF0, 0x80, 0x80, 0x00,
0x00, 0x07, 0x08, 0x13, 0x14, 0x14, 0x7F, 0x14, 0x14, 0x13, 0x08, 0x07, 0x00, 0x00, 
};
int CrossHairDual_Height = 15;
int CrossHairDual_Width = 15;

uint8_t SIV_Antenna [] = {
0x00, 0x1E, 0x62, 0x84, 0x08, 0x10, 0x20, 0x50, 0x88, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x1F,
0x1F, 0x12, 0x12, 0x04, 0x04, 0x05, 0x06, 0x00, 
};
int SIV_Antenna_Height = 13;
int SIV_Antenna_Width = 12;

uint8_t Rover_Fusion [] = {
0x3E, 0xC1, 0x21, 0x21, 0xC1, 0x7D, 0x55, 0x55, 0x45, 0x41, 0xC2, 0x24, 0x24, 0xC4, 0x3C, 0x00,
0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
};
int Rover_Fusion_Height = 9;
int Rover_Fusion_Width = 15;

uint8_t Rover_Fusion_Empty [] = {
0x3E, 0xC1, 0x21, 0x21, 0xC1, 0x41, 0x41, 0x41, 0x41, 0x41, 0xC2, 0x24, 0x24, 0xC4, 0x3C, 0x00,
0x00, 0x01, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 0x00, 
};
int Rover_Fusion_Empty_Height = 9;
int Rover_Fusion_Empty_Width = 15;

uint8_t BaseTemporary [] = {
0x00, 0xFF, 0x99, 0x99, 0xE7, 0xCE, 0x32, 0x32, 0xE7, 0xE7, 0x99, 0x32, 0xFE, 0x00, 0x00, 0x1F,
0x00, 0x00, 0x00, 0x01, 0x01, 0x01, 0x00, 0x00, 0x00, 0x01, 0x01, 0x00, 
};
int BaseTemporary_Height = 12;
int BaseTemporary_Width = 14;

uint8_t BaseFixed [] = {
0x00, 0xFF, 0x01, 0x0F, 0x01, 0x8F, 0x88, 0x88, 0x8F, 0x01, 0x0F, 0x01, 0xFF, 0x00, 0x0E, 0x09,
0x08, 0x08, 0x08, 0x0F, 0x00, 0x00, 0x0F, 0x08, 0x08, 0x08, 0x09, 0x0E, 
};
int BaseFixed_Height = 12;
int BaseFixed_Width = 14;

uint8_t Battery_3 [] = {
0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01,
0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B,
0x0B, 0x0B, 0x08, 0x0F, 0x01, 0x01, 
};
int Battery_3_Height = 12;
int Battery_3_Width = 19;

uint8_t Battery_2 [] = {
0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x08,
0x08, 0x08, 0x08, 0x0F, 0x01, 0x01, 
};
int Battery_2_Height = 12;
int Battery_2_Width = 19;

uint8_t Battery_1 [] = {
0xFF, 0x01, 0xFD, 0xFD, 0xFD, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x0B, 0x0B, 0x0B, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
0x08, 0x08, 0x08, 0x0F, 0x01, 0x01, 
};
int Battery_1_Height = 12;
int Battery_1_Width = 19;

uint8_t Battery_0 [] = {
0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01, 0x01,
0x0F, 0x08, 0xF8, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
0x08, 0x08, 0x08, 0x0F, 0x01, 0x01, 
};
int Battery_0_Height = 12;
int Battery_0_Width = 19;

uint8_t Logging_3 [] = {
0xFF, 0x01, 0x51, 0x51, 0x51, 0x51, 0x53, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
0x08, 0x0F, 
};
int Logging_3_Height = 12;
int Logging_3_Width = 9;

uint8_t Logging_2 [] = {
0xFF, 0x01, 0x41, 0x41, 0x41, 0x41, 0x43, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
0x08, 0x0F, 
};
int Logging_2_Height = 12;
int Logging_2_Width = 9;

uint8_t Logging_1 [] = {
0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x09, 0x09, 0x09, 0x09, 0x09,
0x08, 0x0F, 
};
int Logging_1_Height = 12;
int Logging_1_Width = 9;

uint8_t Logging_0 [] = {
0xFF, 0x01, 0x01, 0x01, 0x01, 0x01, 0x03, 0x06, 0xFC, 0x0F, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08,
0x08, 0x0F, 
};
int Logging_0_Height = 12;
int Logging_0_Width = 9;

int DynamicModel_Height = 12;
int DynamicModel_Width = 15;

uint8_t DynamicModel_1_Portable [] = {
0x00, 0xF0, 0x00, 0xF8, 0x04, 0x34, 0x34, 0x37, 0x37, 0x04, 0xF8, 0x00, 0xF0, 0x00, 0x00, 0x00,
0x03, 0x00, 0x07, 0x08, 0x08, 0x08, 0x08, 0x08, 0x08, 0x07, 0x00, 0x03, 0x00, 0x00, 
};

uint8_t DynamicModel_2_Stationary [] = {
0x00, 0x00, 0x00, 0x00, 0x82, 0xC6, 0x6E, 0xFE, 0x6E, 0xC6, 0x82, 0x00, 0x00, 0x00, 0x00, 0x00,
0x04, 0x06, 0x03, 0x01, 0x00, 0x00, 0x07, 0x00, 0x00, 0x01, 0x03, 0x06, 0x04, 0x00, 
};

uint8_t DynamicModel_3_Pedestrian [] = {
0x00, 0x00, 0x00, 0x00, 0x20, 0x32, 0x95, 0xF9, 0x95, 0x32, 0x60, 0x00, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x04, 0x06, 0x03, 0x01, 0x00, 0x01, 0x07, 0x04, 0x00, 0x00, 0x00, 0x00, 
};

uint8_t DynamicModel_4_Automotive [] = {
0x78, 0x84, 0x44, 0x44, 0x84, 0x84, 0x84, 0x84, 0x84, 0x84, 0x88, 0x50, 0x50, 0x90, 0x70, 0x00,
0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 
};

uint8_t DynamicModel_5_Sea [] = {
0x00, 0x60, 0xE0, 0x3C, 0x26, 0x3C, 0x20, 0x20, 0x20, 0xA0, 0xA0, 0x20, 0xE0, 0x60, 0x00, 0x00,
0x00, 0x03, 0x06, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x04, 0x06, 0x03, 0x00, 0x00, 
};

uint8_t DynamicModel_6_Airborne1g [] = {
0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x08, 0x88, 0x88, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

uint8_t DynamicModel_7_Airborne2g [] = {
0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x08, 0x88, 0xA8, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

uint8_t DynamicModel_8_Airborne4g [] = {
0x00, 0xFE, 0x0C, 0xF8, 0x08, 0x28, 0x88, 0xA8, 0x88, 0x28, 0x08, 0x18, 0xB0, 0xE0, 0x00, 0x00,
0x01, 0x01, 0x01, 0x01, 0x01, 0x07, 0x08, 0x07, 0x01, 0x01, 0x01, 0x01, 0x00, 0x00, 
};

uint8_t DynamicModel_9_Wrist [] = {
0x00, 0x00, 0x00, 0xE0, 0x10, 0x08, 0x4F, 0x4F, 0x4F, 0x08, 0x10, 0xE0, 0x00, 0x00, 0x00, 0x00,
0x00, 0x00, 0x00, 0x01, 0x02, 0x1E, 0x1E, 0x1E, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 
};

uint8_t DynamicModel_10_Bike [] = {
0x00, 0x80, 0x40, 0x50, 0x90, 0xB0, 0xC0, 0xC0, 0xC0, 0xA0, 0x98, 0x4C, 0x4C, 0x80, 0x00, 0x00,
0x01, 0x02, 0x02, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x02, 0x02, 0x01, 0x00, 
};
