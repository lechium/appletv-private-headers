/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSFileHandle.h"


__attribute__((visibility("hidden")))
@interface NSNullFileHandle : NSFileHandle {
}
@property(retain) id readabilityHandler;	// G=0x3256cac9; S=0x3256cac5; converted property
@property(retain) id writeabilityHandler;	// G=0x3256cac1; S=0x3256cabd; converted property
- (id)availableData;	// 0x3256ca3d
- (void)closeFile;	// 0x3256cab1
- (int)fileDescriptor;	// 0x3256cab5
- (unsigned long long)offsetInFile;	// 0x3256ca95
- (id)readDataOfLength:(unsigned)length;	// 0x3256ca75
- (id)readDataToEndOfFile;	// 0x3256ca59
// converted property getter: - (id)readabilityHandler;	// 0x3256cac9
- (unsigned long long)seekToEndOfFile;	// 0x3256ca9d
- (void)seekToFileOffset:(unsigned long long)fileOffset;	// 0x3256caa5
// converted property setter: - (void)setReadabilityHandler:(id)handler;	// 0x3256cac5
// converted property setter: - (void)setWriteabilityHandler:(id)handler;	// 0x3256cabd
- (void)synchronizeFile;	// 0x3256caad
- (void)truncateFileAtOffset:(unsigned long long)offset;	// 0x3256caa9
- (void)writeData:(id)data;	// 0x3256ca91
// converted property getter: - (id)writeabilityHandler;	// 0x3256cac1
@end

