/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import <UIImage.h> // Unknown library


@interface MPPixelBufferBackedImage : UIImage {
	CVBufferRef _pixelBuffer;	// 36 = 0x24
}
- (id)initWithPixelBuffer:(CVBufferRef)pixelBuffer;	// 0x31df19ad
- (void)dealloc;	// 0x31df1a01
@end
