/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class BRListControl, BRDropShadowControl;

__attribute__((visibility("hidden")))
@interface BRBoxListControl : BRControl {
@private
	BRListControl *_list;	// 48 = 0x30
	BRDropShadowControl *_shadow;	// 52 = 0x34
}
@property(retain) id providers;	// G=0x35de8991; S=0x35de8955; converted property
- (id)init;	// 0x35de86fd
- (void)dealloc;	// 0x35de88b5
- (void)layoutSubcontrols;	// 0x35de89d1
- (float)listHeightToMaximum:(float)maximum;	// 0x35de89b1
// converted property getter: - (id)providers;	// 0x35de8991
- (void)setProvider:(id)provider;	// 0x35de8915
// converted property setter: - (void)setProviders:(id)providers;	// 0x35de8955
@end
