/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSArray;

@interface IndexData : XXUnknownSuperclass {
	int flags;	// 4 = 0x4
	int ivSize;	// 8 = 0x8
	NSArray *chunkList;	// 12 = 0xc
}
- (id)initWithBuffer:(id)buffer length:(unsigned)length;	// 0x492089
- (void)dealloc;	// 0x492269
- (id)getChunks;	// 0x492259
- (int)getFlags;	// 0x492239
- (int)getIVSize;	// 0x492249
@end
