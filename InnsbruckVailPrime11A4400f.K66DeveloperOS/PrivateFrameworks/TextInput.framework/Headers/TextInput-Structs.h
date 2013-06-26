/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

typedef struct _NSZone NSZone;

typedef struct _NSRange {
	unsigned location;
	unsigned length;
} NSRange;

template<>
struct vector<CGPoint, std::__1::allocator<CGPoint> >;

template<>
struct __compressed_pair<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> > *, std::__1::allocator<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> > > > {
	vector<CGPoint, std::__1::allocator<CGPoint> > *__first_;
};

template<>
struct vector<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> >, std::__1::allocator<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> > > > {
	vector<CGPoint, std::__1::allocator<CGPoint> > *__begin_;
	vector<CGPoint, std::__1::allocator<CGPoint> > *__end_;
	__compressed_pair<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> > *, std::__1::allocator<std::__1::vector<CGPoint, std::__1::allocator<CGPoint> > > > __end_cap_;
};

typedef struct CGPoint {
	float x;
	float y;
} CGPoint;

typedef struct _ShortRect {
	short _field1;
	short _field2;
	short _field3;
	short _field4;
} ShortRect;

typedef struct CGSize {
	float _field1;
	float _field2;
} CGSize;

typedef struct CGRect {
	CGPoint _field1;
	CGSize _field2;
} CGRect;

typedef struct {
	id _field1;
	id _field2;
	int _field3;
	id _field4;
	id _field5;
	int _field6;
} XXStruct_N0zFsC;

typedef struct {
	id _field1;
	id _field2;
	BOOL _field3;
	BOOL _field4;
	unsigned long long _field5;
	int _field6;
} XXStruct_7wOxJB;

typedef struct __CFString *CFStringRef;

typedef struct USet USet;

typedef struct __CFCharacterSet *CFCharacterSetRef;

typedef struct __CFStringTokenizer *CFStringTokenizerRef;

