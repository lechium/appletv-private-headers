/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import "AVAssetTrack.h"

@class AVCompositionTrackInternal, NSArray;

@interface AVCompositionTrack : AVAssetTrack {
@private
	AVCompositionTrackInternal *_priv;	// 8 = 0x8
}
@property(readonly, copy, nonatomic) NSArray *segments;	// G=0x346af789; 
- (id)_initWithAsset:(id)asset trackID:(int)anId trackIndex:(long)index;	// 0x346af87d
- (OpaqueFigMutableComposition *)_mutableComposition;	// 0x346af769
- (void)dealloc;	// 0x346af819
- (void)finalize;	// 0x346af7b5
// declared property getter: - (id)segments;	// 0x346af789
@end
