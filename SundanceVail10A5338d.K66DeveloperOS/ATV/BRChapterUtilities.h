/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library


__attribute__((visibility("hidden")))
@interface BRChapterUtilities : XXUnknownSuperclass {
}
+ (unsigned)chapterGroupCountForMediaAsset:(id)mediaAsset;	// 0x34c4b1
+ (unsigned)chapterGroupCountForMediaItem:(id)mediaItem;	// 0x34c585
+ (long)chapterIndexForTime:(double)time chapters:(id)chapters startSearchFrom:(long)from;	// 0x34c591
+ (id)mediaAsset:(id)asset chapterGroupAtIndex:(unsigned)index;	// 0x34c53d
+ (BOOL)mediaAsset:(id)asset hasChapterGroupAtIndex:(unsigned)index;	// 0x34c4f5
+ (id)mediaItem:(id)item chapterGroupAtIndex:(unsigned)index;	// 0x34c58d
+ (BOOL)mediaItem:(id)item hasChapterGroupAtIndex:(unsigned)index;	// 0x34c589
@end

