/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class NSString, AVMetadataObjectInternal;

@interface AVMetadataObject : NSObject {
	AVMetadataObjectInternal *_objectInternal;	// 4 = 0x4
}
@property(readonly, assign) CGRect bounds;	// G=0x367b5479; 
@property(readonly, assign) XXStruct_pwHToB duration;	// G=0x367b5441; 
@property(readonly, assign) XXStruct_pwHToB time;	// G=0x367b5409; 
@property(readonly, assign) NSString *type;	// G=0x367b54ad; 
- (id)init;	// 0x367b52bd
// declared property getter: - (CGRect)bounds;	// 0x367b5479
- (void)dealloc;	// 0x367b53bd
// declared property getter: - (XXStruct_pwHToB)duration;	// 0x367b5441
// declared property getter: - (XXStruct_pwHToB)time;	// 0x367b5409
// declared property getter: - (id)type;	// 0x367b54ad
@end
