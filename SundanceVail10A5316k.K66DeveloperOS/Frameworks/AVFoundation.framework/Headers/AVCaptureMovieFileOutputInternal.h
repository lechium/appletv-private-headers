/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import <NSObject.h> // Unknown library
#import "AVFoundation-Structs.h"

@class NSArray, NSMutableArray;

@interface AVCaptureMovieFileOutputInternal : NSObject {
	NSMutableArray *recordingDelegatesArray;	// 4 = 0x4
	XXStruct_pwHToB movieFragmentInterval;	// 8 = 0x8
	NSArray *metadata;	// 32 = 0x20
	BOOL sendLastVideoPreviewFrame;	// 36 = 0x24
}
- (id)init;	// 0x3675abd5
- (void)dealloc;	// 0x3675ac8d
@end

