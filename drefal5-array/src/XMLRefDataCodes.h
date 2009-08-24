#define ADD_SYMBOL_CODE(kod, klas) \
	RefData* create_atom_##kod##_from_text(unistring text){ klas* k = new klas(0); k->setValueFromText(text); return k; }; 
#define SET_SYMBOL_VALUE(kod, valu) \
	create_atom_##kod##_from_text(valu);

// ����� ����� �����-�������� ������� ����� � ���������������� RefData-��������.
// ADD_SYMBOL_CODE(���, ��� ������);

ADD_SYMBOL_CODE(WORD,  RefWord);
ADD_SYMBOL_CODE(INT,   RefInteger);
//ADD_SYMBOL_CODE(REAL,  RefReal);
ADD_SYMBOL_CODE(ALPHA, RefAlpha);
//ADD_SYMBOL_CODE(BYTE,  RefByte);


const char varPathSeparator = '/';  // ����������� � ���� � �������������. ���������� ������������� �� �������

