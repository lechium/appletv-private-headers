/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRProvider.h"
#import "BRControlFactory.h"
#import "ATVSearchController.h"
#import "BRSelectionHandler.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
	NSArray *_matchedCities;	// 172 = 0xac
}
+ (void)initialize;	// 0x130a89
- (id)init;	// 0x130b1d
- (void)_runInitialSearch;	// 0x130ce1
- (id)controlFactory;	// 0x130dbd
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x130e39
- (id)dataAtIndex:(long)index;	// 0x130de1
- (long)dataCount;	// 0x130dc1
- (void)dealloc;	// 0x130c31
- (BOOL)handleSelectionForControl:(id)control;	// 0x130f51
- (id)hashForDataAtIndex:(long)index;	// 0x130e01
- (void)setMatchedCities:(id)cities;	// 0x130d81
- (void)wasPopped;	// 0x130d2d
- (void)wasPushed;	// 0x130c7d
@end

