struct Std_String
{
	char aStr[16];
  	uint32_t uiStrLen;
  	uint32_t uiReverse;
};

struct MAG_MDiskFileReadTask_Vtable
{
	uint32_t* fnUn0;
	uint32_t* fnUn1;
	uint32_t* fnUn2;
	uint32_t* fnUn3;
	uint32_t* fnUn4;
	uint32_t* fnUn5;
	uint32_t* fnUn6;
	uint32_t* fnUn7;
	uint32_t* fnUn8;
	uint32_t* fnUn9;
	uint32_t* fnUnA;
	uint32_t* fnUnB;
	uint32_t* fnUnC;
	uint32_t* fnRead;
	uint32_t* fnUnD;
	uint32_t* fnIsMdf;
	uint32_t* fnDecode;
};

struct MAG_MDiskFileReadTask
{
  MAG_MDiskFileReadTask_Vtable *pVtable;
  uint32_t aUn1[27];
  MAG_FileRead_Entry **ppEntry1;
  MAG_FileRead_Entry **ppEntry2;
  uint32_t aUn2[5];
  CRITICAL_SECTION CriticalSection1;
  CRITICAL_SECTION CriticalSection2;
  Std_String msKeyString;
  uint32_t uiKeySize;
  uint32_t aUn3[6];
  Std_String msFilePath;
  HANDLE hFileHandle;
  uint32_t *pFileBuffer;
  uint32_t uiFileSize;
  uint32_t uiUn1;
  OVERLAPPED OverAppend;
};


struct MAG_FileRead_Entry
{
  uint32_t uiID;
  Std_String msPackName;
  Std_String msFileName;
  Std_String msFolderName;
  uint32_t aUn0[5];
  uint32_t uiOffsetLow;
  uint32_t uiOffsetHigh;
  uint32_t uiSizeLow;
  uint32_t uiSizeHigh;
  uint32_t uiUn0;
  uint32_t uiUn1;
};
