/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "AppleTV-Structs.h"


@interface BRChapterUtilities : NSObject {
}
+ (unsigned)chapterGroupCountForMediaAsset:(id)mediaAsset;	// 0x30343f6d
+ (unsigned)chapterGroupCountForMediaItem:(ATVMediaItemRef)mediaItem;	// 0x30344041
+ (long)chapterIndexForTime:(double)time chapters:(id)chapters startSearchFrom:(long)from;	// 0x3034404d
+ (id)mediaAsset:(id)asset chapterGroupAtIndex:(unsigned)index;	// 0x30343ff9
+ (BOOL)mediaAsset:(id)asset hasChapterGroupAtIndex:(unsigned)index;	// 0x30343fb1
+ (id)mediaItem:(ATVMediaItemRef)item chapterGroupAtIndex:(unsigned)index;	// 0x30344049
+ (BOOL)mediaItem:(ATVMediaItemRef)item hasChapterGroupAtIndex:(unsigned)index;	// 0x30344045
@end

