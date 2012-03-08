/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "AppleTV-Structs.h"
#import <NSObject.h> // Unknown library

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface SBJsonUTF8Stream : NSObject {
@private
	char *_bytes;	// 4 = 0x4
	NSMutableData *_data;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
	unsigned _index;	// 16 = 0x10
}
@property(assign) unsigned index;	// G=0x33305198; S=0x333051ac; @synthesize=_index
- (id)init;	// 0x333051c0
- (void)appendData:(id)data;	// 0x333054a0
- (void)dealloc;	// 0x333055a8
- (BOOL)getNextUnichar:(unsigned short *)unichar;	// 0x33305098
- (BOOL)getSimpleString:(id *)string;	// 0x33305398
- (BOOL)getUnichar:(unsigned short *)unichar;	// 0x33305044
- (BOOL)haveRemainingCharacters:(unsigned)characters;	// 0x33305344
// declared property getter: - (unsigned)index;	// 0x33305198
// declared property setter: - (void)setIndex:(unsigned)index;	// 0x333051ac
- (void)skip;	// 0x33305104
- (BOOL)skipCharacters:(const char *)characters length:(unsigned)length;	// 0x333052cc
- (void)skipWhitespace;	// 0x33305120
- (id)stringWithRange:(NSRange)range;	// 0x33305250
@end

