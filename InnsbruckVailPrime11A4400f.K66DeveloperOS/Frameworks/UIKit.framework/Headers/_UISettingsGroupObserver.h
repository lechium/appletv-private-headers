/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "NSObject.h"


@protocol _UISettingsGroupObserver <NSObject>
- (void)settingsGroup:(id)group didInsertSettings:(id)settings atIndex:(unsigned)index;
- (void)settingsGroup:(id)group didMoveSettings:(id)settings fromIndex:(unsigned)index toIndex:(unsigned)index4;
- (void)settingsGroup:(id)group didRemoveSettings:(id)settings atIndex:(unsigned)index;
@end

