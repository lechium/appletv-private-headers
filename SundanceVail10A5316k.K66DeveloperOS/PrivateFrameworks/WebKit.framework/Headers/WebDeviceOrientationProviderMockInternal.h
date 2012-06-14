/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebKit-Structs.h"


__attribute__((visibility("hidden")))
@interface WebDeviceOrientationProviderMockInternal : NSObject {
@private
	OwnPtr<WebCore::DeviceOrientationClientMock> m_core;	// 4 = 0x4
}
- (id)init;	// 0x35038401
- (id).cxx_construct;	// 0x35038789
- (void).cxx_destruct;	// 0x3503876d
- (id)lastOrientation;	// 0x35038641
- (void)setController:(DeviceOrientationController *)controller;	// 0x35038601
- (void)setOrientation:(id)orientation;	// 0x35038505
- (void)startUpdating;	// 0x35038619
- (void)stopUpdating;	// 0x3503862d
@end

