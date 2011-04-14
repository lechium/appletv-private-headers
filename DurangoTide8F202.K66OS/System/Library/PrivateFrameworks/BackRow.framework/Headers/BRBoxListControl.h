/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BackRow.framework/BackRow
 */

#import "BackRow-Structs.h"
#import "BRControl.h"

@class BRDropShadowControl, BRListControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
@private
	BRListControl *_list;	// 44 = 0x2c
	BRDropShadowControl *_shadow;	// 48 = 0x30
}
@property(retain) id providers;	// G=0x328f1ae1; S=0x328f1b01; converted property
- (id)init;	// 0x328f263d
- (void)dealloc;	// 0x328f1b69
- (void)layoutSubcontrols;	// 0x328f27c9
- (float)listHeightToMaximum:(float)maximum;	// 0x328f1ac1
// converted property getter: - (id)providers;	// 0x328f1ae1
- (void)setProvider:(id)provider;	// 0x328f1b35
// converted property setter: - (void)setProviders:(id)providers;	// 0x328f1b01
@end

