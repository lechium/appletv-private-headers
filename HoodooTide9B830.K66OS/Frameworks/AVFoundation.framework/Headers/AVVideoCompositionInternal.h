/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVVideoCompositionCoreAnimationTool, NSArray, NSString;

@interface AVVideoCompositionInternal : NSObject {
	NSString *compositor;	// 4 = 0x4
	XXStruct_pwHToB frameDuration;	// 8 = 0x8
	CGSize renderSize;	// 32 = 0x20
	float renderScale;	// 40 = 0x28
	NSArray *instructions;	// 44 = 0x2c
	BOOL auxiliaryTrackLayerSetLast;	// 48 = 0x30
	AVVideoCompositionCoreAnimationTool *animationTool;	// 52 = 0x34
}
@end
