/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureInput, NSString, AVCaptureInputPortInternal;

@interface AVCaptureInputPort : NSObject {
	AVCaptureInputPortInternal *_internal;	// 4 = 0x4
}
@property(assign, nonatomic, getter=isEnabled) BOOL enabled;	// G=0x3421c73d; S=0x3421c75d; 
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x3421c6a5; 
@property(readonly, assign, nonatomic) AVCaptureInput *input;	// G=0x3421c641; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x3421c661; 
+ (id)portWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x3421c361
- (id)init;	// 0x3421c3b9
- (id)initWithInput:(id)input mediaType:(id)type formatDescription:(opaqueCMFormatDescription *)description enabled:(BOOL)enabled;	// 0x3421c439
- (void)_setFormatDescription:(opaqueCMFormatDescription *)description;	// 0x3421c6c5
- (void)dealloc;	// 0x3421c4d9
- (id)description;	// 0x3421c545
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x3421c6a5
// declared property getter: - (id)input;	// 0x3421c641
// declared property getter: - (BOOL)isEnabled;	// 0x3421c73d
// declared property getter: - (id)mediaType;	// 0x3421c661
// declared property setter: - (void)setEnabled:(BOOL)enabled;	// 0x3421c75d
- (void)setOwner:(id)owner;	// 0x3421c525
@end

