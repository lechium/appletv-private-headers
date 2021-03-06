/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "UIKit-Structs.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarPublisher : NSObject {
@private
	CFMachPortRef _machPort;	// 4 = 0x4
	int _styleOverrides;	// 8 = 0x8
	NSMutableSet *_statusBarItems;	// 12 = 0xc
}
@property(readonly, retain) NSMutableSet *statusBarItems;	// G=0x32ec542d; converted property
@property(readonly, assign) int styleOverrides;	// G=0x331cb529; converted property
- (id)initWithCFMachPort:(CFMachPortRef)cfmachPort;	// 0x331cb415
- (void)addStatusBarItem:(int)item;	// 0x331cb575
- (int)addStyleOverrides:(int)overrides;	// 0x331cb539
- (void)dealloc;	// 0x331cb48d
- (unsigned)publisherPort;	// 0x331cb515
- (void)removeStatusBarItem:(int)item;	// 0x331cb5bd
- (int)removeStyleOverrides:(int)overrides;	// 0x331cb559
// converted property getter: - (id)statusBarItems;	// 0x32ec542d
// converted property getter: - (int)styleOverrides;	// 0x331cb529
@end

