/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library

@class NSError;

@interface _NSJSONReader : NSObject {
	id input;	// 4 = 0x4
	int kind;	// 8 = 0x8
	char *buf;	// 12 = 0xc
	unsigned options;	// 16 = 0x10
	NSError *error;	// 20 = 0x14
	unsigned bufLength;	// 24 = 0x18
	unsigned idx;	// 28 = 0x1c
	struct {
		char *location;
		unsigned length;
		id value;
		unsigned hash;
	} cache[256];	// 32 = 0x20
}
@property(retain) NSError *error;	// G=0x306eaa1d; S=0x306eaa2d; converted property
+ (BOOL)validForJSON:(id)json depth:(unsigned)depth allowFragments:(BOOL)fragments;	// 0x306eaad9
- (id)init;	// 0x306ea971
- (void)dealloc;	// 0x306ea9cd
// converted property getter: - (id)error;	// 0x306eaa1d
- (unsigned)findEncodingFromData:(id)data withBOMSkipLength:(unsigned *)bomskipLength;	// 0x306ecf85
- (id)newJSONArray;	// 0x306ec2f9
- (id)newJSONBooleanOrNull;	// 0x306ebf8d
- (id)newJSONNumber;	// 0x306eb039
- (id)newJSONNumberAtPosition:(unsigned)position;	// 0x306eaed9
- (id)newJSONObject;	// 0x306ec739
- (id)newJSONString;	// 0x306eb755
- (id)newJSONValue;	// 0x306ec21d
- (id)parseData:(id)data options:(unsigned)options;	// 0x306ed0e1
- (unsigned short)parseJSONUnicodePointAtLocation:(unsigned)location end:(unsigned)end;	// 0x306eb665
- (id)parseStream:(id)stream options:(unsigned)options;	// 0x306ed1f9
- (id)parseUTF8JSONData:(id)data skipBytes:(unsigned)bytes;	// 0x306ece05
// converted property setter: - (void)setError:(id)error;	// 0x306eaa2d
- (BOOL)skipJSONWhitespace;	// 0x306ec1ad
@end

