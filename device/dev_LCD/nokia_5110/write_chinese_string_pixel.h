
/////////////////////////////////////////////////////////////////////////
// ������ģ��                                                          //
// ���ֿ�: ����12.dot ����ȡģ�¸�λ,��������:�����Ҵ��ϵ���         //
/////////////////////////////////////////////////////////////////////////
char write_chinese[][24]=          // ���ݱ�
{
//"��",
{ 0x00,0xF8,0x48,0x48,0x48,0x48,0xFF,0x48,
      0x48,0x48,0xFC,0x08,0x00,0x00,0x00,0x00,
      0x00,0x00,0x0F,0x00,0x00,0x00,0x00,0x00},

//"��",
{ 0x00,0xFE,0x02,0x2A,0x2A,0xFA,0x2A,0x6A,
      0xAA,0x02,0xFF,0x02,0x00,0x0F,0x05,0x05,
      0x05,0x05,0x05,0x05,0x05,0x05,0x0F,0x00},

//"��",
{ 0x92,0x52,0xFE,0x51,0x91,0x08,0xA4,0x6B,
      0x52,0x4A,0x46,0xC0,0x01,0x00,0x0F,0x00,
      0x00,0x09,0x08,0x09,0x05,0x02,0x01,0x00},

//"��",
{ 0x10,0x92,0x52,0x32,0x92,0x10,0x08,0x88,
      0x7F,0x08,0x08,0xF8,0x01,0x03,0x01,0x09,
      0x09,0x05,0x02,0x01,0x00,0x04,0x08,0x07},

//"��",
{ 0x30,0x28,0x27,0xFC,0x24,0x22,0x7A,0x4A,
      0x4A,0x4A,0x7B,0x02,0x08,0x04,0x03,0x00,
      0x0B,0x08,0x0B,0x0C,0x08,0x0E,0x09,0x08},

//"��",
{ 0x08,0x11,0xC2,0x24,0x00,0xF2,0x54,0x5F,
      0x50,0x54,0xF2,0x00,0x01,0x0F,0x00,0x00,
      0x00,0x0F,0x01,0x01,0x05,0x09,0x0F,0x00},

//"Ϣ",
{ 0x00,0x00,0xFE,0xAA,0xAA,0xAB,0xAA,0xAA,
      0xAA,0xFE,0x00,0x00,0x08,0x06,0x00,0x07,
      0x08,0x09,0x0A,0x08,0x08,0x0C,0x02,0x04},

//"��",
{ 0x20,0x24,0x2C,0x34,0xA4,0xFF,0x64,0xB4,
      0x2C,0x26,0x24,0x20,0x04,0x04,0x02,0x01,
      0x00,0x0F,0x00,0x00,0x01,0x02,0x06,0x02},

//"��",
{ 0x00,0x02,0x02,0x02,0x02,0x02,0xF2,0x0A,
      0x06,0x02,0x02,0x00,0x00,0x00,0x00,0x00,
      0x04,0x08,0x07,0x00,0x00,0x00,0x00,0x00},

//"��",
{ 0x00,0x00,0xFE,0x0A,0x8A,0xBE,0xAB,0xAA,
      0xBE,0x0A,0x0A,0x00,0x0C,0x02,0x09,0x08,
      0x04,0x05,0x02,0x05,0x04,0x08,0x08,0x08},

//"��",
{ 0x88,0x48,0xFF,0x28,0x08,0xAC,0x94,0x85,
      0x86,0x94,0xA4,0x0C,0x04,0x08,0x07,0x00,
      0x08,0x08,0x08,0x0F,0x08,0x08,0x08,0x08},

//"��",
{ 0x18,0xD6,0x54,0xFF,0x54,0x54,0xD4,0x00,
      0xFC,0x00,0xFF,0x00,0x00,0x07,0x00,0x0F,
      0x00,0x04,0x07,0x00,0x05,0x08,0x0F,0x00},

//"��",
{ 0x00,0x00,0xFC,0x24,0xE4,0x04,0x3F,0xC4,
      0x05,0xF6,0x04,0x04,0x08,0x06,0x01,0x02,
      0x0B,0x08,0x04,0x02,0x03,0x04,0x08,0x0F},

//"��",
{ 0x04,0x04,0xFC,0x86,0x84,0x08,0x08,0xFF,
      0x08,0x08,0xFC,0x08,0x01,0x01,0x08,0x08,
      0x04,0x02,0x01,0x00,0x04,0x08,0x07,0x00},

//"��",
{ 0x44,0x24,0xF5,0x4E,0xA4,0x10,0x04,0xFC,
      0x04,0x04,0xFE,0x04,0x00,0x00,0x0F,0x00,
      0x08,0x04,0x03,0x00,0x04,0x08,0x07,0x00},

//"ʼ",
{ 0x08,0xC8,0x3F,0x88,0x78,0x10,0xDC,0x53,
      0x50,0x54,0xD8,0x30,0x08,0x05,0x02,0x03,
      0x04,0x00,0x0F,0x04,0x04,0x04,0x0F,0x00},

//"��",
{ 0x40,0x20,0xF8,0x07,0x00,0x80,0xFF,0x40,
      0x20,0x10,0x08,0x00,0x00,0x00,0x0F,0x00,
      0x01,0x00,0x07,0x08,0x08,0x08,0x08,0x0E},

//"ͨ",
{ 0x20,0x22,0xE4,0x00,0xF9,0xA9,0xAB,0xFD,
      0xAB,0xA9,0xF9,0x00,0x08,0x04,0x03,0x04,
      0x0B,0x08,0x08,0x0B,0x08,0x0A,0x0B,0x08},

//"��",
{ 0x20,0x10,0xFC,0x03,0x04,0x54,0x55,0x56,
      0x54,0x54,0x56,0x04,0x00,0x00,0x0F,0x00,
      0x00,0x0F,0x05,0x05,0x05,0x05,0x0F,0x00},

//"ģ",
{ 0xC8,0x28,0xFF,0x28,0x42,0xFA,0xAF,0xAA,
      0xAA,0xAF,0xFA,0x02,0x00,0x00,0x0F,0x00,
      0x0A,0x0A,0x06,0x03,0x02,0x06,0x0A,0x0A},

//"��",
{ 0x08,0x08,0xFF,0x08,0x48,0x44,0x44,0xFF,
      0x44,0x44,0x7C,0x40,0x02,0x02,0x09,0x09,
      0x09,0x04,0x03,0x00,0x03,0x04,0x08,0x08},

//"��",
{ 0x10,0x0C,0xD4,0x14,0x14,0xF5,0x96,0x94,
      0xD4,0x94,0x04,0x0C,0x08,0x04,0x03,0x02,
      0x04,0x07,0x08,0x08,0x08,0x08,0x08,0x08},

//"λ",
{ 0x20,0x10,0xFC,0x03,0x04,0x34,0xC5,0x06,
      0x04,0xF6,0x04,0x04,0x00,0x00,0x0F,0x00,
      0x08,0x08,0x0B,0x08,0x0F,0x08,0x08,0x08}
};

// ���ֱ���
// �й��ƶ�����Ϣ���˶ȿ��Ƴɹ���ʼ��ͨ��ģ�鶨λ

