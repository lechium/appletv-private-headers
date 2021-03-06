/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import "NSCopying.h"
#import "Symbolication-Structs.h"
#import "VMUAddressRange.h"

@class NSString;

@interface VMUSourceInfo : VMUAddressRange <NSCopying> {
	NSString *_path;	// 20 = 0x14
	unsigned _lineNumber;	// 24 = 0x18
	unsigned _fileOffset;	// 28 = 0x1c
}
@property(readonly, assign) unsigned fileOffset;	// G=0x34d6742d; converted property
@property(readonly, assign) unsigned lineNumber;	// G=0x34d6741d; converted property
@property(readonly, retain) NSString *path;	// G=0x34d673ed; converted property
+ (id)sourceInfoWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x34d672e5
- (id)initWithPath:(id)path addressRange:(VMURange)range lineNumber:(unsigned)number fileOffset:(unsigned)offset;	// 0x34d67345
- (VMURange)addressRange;	// 0x34d6743d
- (int)compare:(id)compare;	// 0x34d67465
- (id)copyWithZone:(NSZone *)zone;	// 0x34d676b5
- (void)dealloc;	// 0x34d67665
- (id)description;	// 0x34d675cd
- (id)fileName;	// 0x34d673fd
// converted property getter: - (unsigned)fileOffset;	// 0x34d6742d
- (BOOL)isEqualToSourceInfo:(id)sourceInfo;	// 0x34d674c5
// converted property getter: - (unsigned)lineNumber;	// 0x34d6741d
// converted property getter: - (id)path;	// 0x34d673ed
@end

