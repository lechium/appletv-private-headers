/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImage.h> // Unknown library

@class MPPipelineJPEGDecoder;

@interface MPSurfaceBackedUIImage : UIImage {
@private
	MPPipelineJPEGDecoder *decoder;	// 16 = 0x10
}
- (id)initWithIOSurface:(IOSurfaceRef)iosurface decoder:(id)decoder;	// 0x309ff2a9
- (void)dealloc;	// 0x309ff2fd
@end

