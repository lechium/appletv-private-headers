/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import </libobjc.A.h>

@class UIImage;

@interface MPMediaItemArtwork : NSObject {
	UIImage *_image;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) CGRect bounds;	// G=0x2e2b2e49; 
@property(readonly, assign, nonatomic) CGRect imageCropRect;	// G=0x2e2b2ea1; 
- (id)initWithImage:(id)image;	// 0x2e2b2cb9
- (void).cxx_destruct;	// 0x2e2b2ec5
- (id)albumImageDataWithSize:(CGSize)size;	// 0x2e2b2e15
- (id)albumImageWithSize:(CGSize)size;	// 0x2e2b2de1
// declared property getter: - (CGRect)bounds;	// 0x2e2b2e49
- (BOOL)hasArtworkAvailable;	// 0x2e2b2d61
// declared property getter: - (CGRect)imageCropRect;	// 0x2e2b2ea1
- (id)imageDataWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x2e2b2dad
- (id)imageWithSize:(CGSize)size;	// 0x2e2b2d65
- (id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;	// 0x2e2b2d99
@end
