/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRMenuItem.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface BRHiddenSelectionMenuItem : BRMenuItem {
	NSArray *_events;	// 196 = 0xc4
	int _eventCount;	// 200 = 0xc8
}
@property(retain) NSArray *events;	// G=0x384a61; S=0x384a71; converted property
@property(retain) id hiddenSelectionHandler;	// G=0x384ad9; S=0x384abd; converted property
- (BOOL)brEventAction:(id)action;	// 0x38494d
- (void)dealloc;	// 0x384901
// converted property getter: - (id)events;	// 0x384a61
// converted property getter: - (id)hiddenSelectionHandler;	// 0x384ad9
// converted property setter: - (void)setEvents:(id)events;	// 0x384a71
// converted property setter: - (void)setHiddenSelectionHandler:(id)handler;	// 0x384abd
@end

