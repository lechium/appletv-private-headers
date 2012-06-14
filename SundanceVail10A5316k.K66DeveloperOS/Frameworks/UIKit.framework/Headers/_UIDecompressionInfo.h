/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSData, _UIAsyncInvocation;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface _UIDecompressionInfo : NSObject {
@private
	unsigned long jpegDecodeRequestID;	// 4 = 0x4
	NSObject<OS_dispatch_semaphore> *syncSemaphore;	// 8 = 0x8
	NSObject<OS_dispatch_semaphore> *metadataSemaphore;	// 12 = 0xc
	NSData *imageData;	// 16 = 0x10
	CGSize maxSize;	// 20 = 0x14
	int renderingIntent;	// 28 = 0x1c
	_UIAsyncInvocation *terminationInvocation;	// 32 = 0x20
	BOOL decompressionComplete;	// 36 = 0x24
	BOOL metadataComplete;	// 37 = 0x25
}
- (id)initWithData:(id)data maxSize:(CGSize)size renderingIntent:(int)intent;	// 0x30228781
- (void)dealloc;	// 0x30228835
@end

