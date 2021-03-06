/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ATVSlideshow.framework/ATVSlideshow
 */

#import "MCAsset.h"

@class NSMutableSet;

@interface MCAssetAudio : MCAsset {
	NSMutableSet *mSongs;	// 20 = 0x14
}
- (id)init;	// 0x2fcc0de5
- (void)demolish;	// 0x2fcc0e49
- (void)forgetSong:(id)song;	// 0x2fcc0f15
- (BOOL)isInUse;	// 0x2fcc0e99
- (void)learnSong:(id)song;	// 0x2fcc0ef5
@end

