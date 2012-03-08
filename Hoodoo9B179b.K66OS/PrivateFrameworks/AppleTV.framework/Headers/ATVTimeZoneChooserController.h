/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import "BRProvider.h"
#import "BRSelectionHandler.h"
#import "ATVSearchController.h"
#import "BRControlFactory.h"

@class NSArray;

@interface ATVTimeZoneChooserController : ATVSearchController <BRProvider, BRControlFactory, BRSelectionHandler> {
@private
	NSArray *_matchedCities;	// 156 = 0x9c
}
+ (void)initialize;	// 0x3020c8bd
- (id)init;	// 0x3020c951
- (void)_runInitialSearch;	// 0x3020cb15
- (id)controlFactory;	// 0x3020cbf5
- (id)controlForData:(id)data currentControl:(id)control requestedBy:(id)by;	// 0x3020cc71
- (id)dataAtIndex:(long)index;	// 0x3020cc19
- (long)dataCount;	// 0x3020cbf9
- (void)dealloc;	// 0x3020ca65
- (BOOL)handleSelectionForControl:(id)control;	// 0x3020cd89
- (id)hashForDataAtIndex:(long)index;	// 0x3020cc39
- (void)setMatchedCities:(id)cities;	// 0x3020cbb5
- (void)wasPopped;	// 0x3020cb61
- (void)wasPushed;	// 0x3020cab1
@end

