/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import <NSData.h> // Unknown library

@class MLMappedFileSegment;

__attribute__((visibility("hidden")))
@interface MLMappedImageData : NSData {
@private
	MLMappedFileSegment *_mappedFileSegment;	// 4 = 0x4
	void *_bytes;	// 8 = 0x8
	unsigned _length;	// 12 = 0xc
}
@property(readonly, assign) unsigned length;	// G=0x317f02f5; converted property
+ (id)mappedImageDataForFile:(id)file offset:(long long)offset length:(unsigned long)length fileIsFixedSize:(BOOL)size;	// 0x317efa05
- (id)initWithMappedFileSegment:(id)mappedFileSegment bytes:(void *)bytes length:(unsigned long)length;	// 0x317f0281
- (const void *)bytes;	// 0x317f0305
- (void)dealloc;	// 0x317f0441
// converted property getter: - (unsigned)length;	// 0x317f02f5
@end

