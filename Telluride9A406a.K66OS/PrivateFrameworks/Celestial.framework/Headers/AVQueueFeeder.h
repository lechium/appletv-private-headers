/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
 */

#import "Celestial-Structs.h"
#import <NSObject.h> // Unknown library


@interface AVQueueFeeder : NSObject {
}
- (id)init;	// 0x338b6e71
- (double)bookmarkTimeForIndex:(unsigned)index;	// 0x338c7299
- (void)contentInvalidatedWithCurrentItemMovedToIndex:(unsigned)index;	// 0x338c72ad
- (void)contentsDidChangeByInsertingRange:(NSRange)contents;	// 0x338c7449
- (void)contentsDidChangeByRemovingRange:(NSRange)contents;	// 0x338c7379
- (unsigned)itemCount;	// 0x338beb65
- (unsigned)numberOfPaths;	// 0x338c7291
- (id)pathAtIndex:(unsigned)index;	// 0x338c7295
- (id)playbackInfoAtIndex:(unsigned)index;	// 0x338b73a5
@end

