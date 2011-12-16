#ifndef DataContainerType_h
#define DataContainerType_h

enum DataContainerType {
	byte,
	bytes,
	text,
	integer,
	real,

	word,
	struct_bracket,
	exec_bracket,
	dummy
};

inline bool isComplexData(DataContainerType arg){
    return arg==bytes || arg==text || arg==word || arg==struct_bracket || arg==exec_bracket;
};

#endif
