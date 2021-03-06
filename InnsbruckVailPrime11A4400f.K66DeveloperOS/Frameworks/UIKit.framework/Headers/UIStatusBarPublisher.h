/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <ImageIO/NSObject.h>
#import "UIKit-Structs.h"

@class NSMutableSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarPublisher : NSObject {
	CFMachPortRef _machPort;	// 4 = 0x4
	int _styleOverrides;	// 8 = 0x8
	NSMutableSet *_statusBarItems;	// 12 = 0xc
}
@property(readonly, retain) NSMutableSet *statusBarItems;	// G=0x2f3e6c19; converted property
@property(readonly, assign) int styleOverrides;	// G=0x2f3e7571; converted property
- (id)initWithCFMachPort:(CFMachPortRef)cfmachPort;	// 0x2f787fd9
- (void)addStatusBarItem:(int)item;	// 0x2f7880f9
- (int)addStyleOverrides:(int)overrides;	// 0x2f7880e1
- (void)dealloc;	// 0x2f788055
- (unsigned)publisherPort;	// 0x2f3e72a5
- (void)removeStatusBarItem:(int)item;	// 0x2f788145
- (int)removeStyleOverrides:(int)overrides;	// 0x2f3e7311
// converted property getter: - (id)statusBarItems;	// 0x2f3e6c19
// converted property getter: - (int)styleOverrides;	// 0x2f3e7571
@end

