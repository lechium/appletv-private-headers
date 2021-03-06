/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControlMediator.h"

@class BRProviderGroup;

@interface BRThresholdControlMediator : BRControlMediator {
@private
	BRProviderGroup *_dataProviderGroup;	// 20 = 0x14
	int _activeThreshold;	// 24 = 0x18
}
- (void)_refreshActiveState;	// 0x36714fc1
- (void)dealloc;	// 0x36714d09
- (void)setActiveThreshold:(int)threshold;	// 0x36714fa1
- (void)setDataProvider:(id)provider;	// 0x36714f65
- (void)setDataProviders:(id)providers;	// 0x36714d85
@end

