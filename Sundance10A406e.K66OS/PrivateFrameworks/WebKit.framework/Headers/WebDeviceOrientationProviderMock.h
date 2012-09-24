/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebDeviceOrientationProvider.h"
#import "WebKit-Structs.h"

@class WebDeviceOrientationProviderMockInternal;

@interface WebDeviceOrientationProviderMock : NSObject <WebDeviceOrientationProvider> {
	WebDeviceOrientationProviderMockInternal *m_internal;	// 4 = 0x4
}
+ (id)shared;	// 0x3080862d
- (id)init;	// 0x3080868d
- (void)dealloc;	// 0x308086f5
- (id)lastOrientation;	// 0x308087a1
- (void)setController:(DeviceOrientationController *)controller;	// 0x3080860d
- (void)setOrientation:(id)orientation;	// 0x30808741
- (void)startUpdating;	// 0x30808761
- (void)stopUpdating;	// 0x30808781
@end
