/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

#import "AVFoundation-Structs.h"
#import <NSObject.h> // Unknown library

@class AVCaptureDeviceFormatInternal, NSString, NSArray;

@interface AVCaptureDeviceFormat : NSObject {
	AVCaptureDeviceFormatInternal *_internal;	// 4 = 0x4
}
@property(readonly, assign, nonatomic) opaqueCMFormatDescription *formatDescription;	// G=0x36935db1; 
@property(readonly, assign, nonatomic) NSString *mediaType;	// G=0x36935d91; 
@property(readonly, assign, nonatomic) NSArray *videoSupportedFrameRateRanges;	// G=0x36935fad; 
+ (id)_stringForFormatDescription:(opaqueCMFormatDescription *)formatDescription frameRateRanges:(id)ranges;	// 0x369357b1
+ (id)deviceFormatWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;	// 0x369359fd
+ (void)initialize;	// 0x36935a55
- (id)initWithDictionary:(id)dictionary mediaType:(id)type mediaSubType:(int)type3;	// 0x36935b29
- (void)dealloc;	// 0x36935ce5
- (id)description;	// 0x36935955
// declared property getter: - (opaqueCMFormatDescription *)formatDescription;	// 0x36935db1
- (BOOL)hasBinned;	// 0x369360cd
- (BOOL)isBinned;	// 0x36936111
- (BOOL)isEqual:(id)equal;	// 0x36935c2d
// declared property getter: - (id)mediaType;	// 0x36935d91
- (int)supportedStabilizationMethod;	// 0x3693615d
- (BOOL)supportsLowLightBoost;	// 0x369361ad
// declared property getter: - (id)videoSupportedFrameRateRanges;	// 0x36935fad
@end

