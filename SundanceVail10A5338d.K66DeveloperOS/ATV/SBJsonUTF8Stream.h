/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library
#import "AppleTV-Structs.h"

@class NSMutableData;

@interface SBJsonUTF8Stream : XXUnknownSuperclass {
	const char *_bytes;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
}
@property(assign) unsigned index;	// G=0x463c21; S=0x463c31; @synthesize=_index
- (id)init;	// 0x4637e5
- (void)appendData:(id)data;	// 0x4638a1
- (void)dealloc;	// 0x463855
- (BOOL)getNextUnichar:(unsigned short *)unichar;	// 0x4639a5
- (BOOL)getSimpleString:(id *)string;	// 0x4639f5
- (BOOL)getUnichar:(unsigned short *)unichar;	// 0x463965
- (BOOL)haveRemainingCharacters:(unsigned)characters;	// 0x463b21
// declared property getter: - (unsigned)index;	// 0x463c21
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x463c31
- (void)skip;	// 0x463ab1
- (BOOL)skipCharacters:(const char *)characters length:(unsigned)length;	// 0x463b61
- (void)skipWhitespace;	// 0x463ac5
- (id)stringWithRange:(NSRange)range;	// 0x463bbd
@end
