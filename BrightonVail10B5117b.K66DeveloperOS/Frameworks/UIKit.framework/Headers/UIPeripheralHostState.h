/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import <NSObject.h> // Unknown library

@class NSDictionary;

__attribute__((visibility("hidden")))
@interface UIPeripheralHostState : NSObject {
	UIPeripheralAnimationGeometry _geometry;	// 4 = 0x4
	NSDictionary *_screenGeometry;	// 64 = 0x40
	BOOL _inPositionIsDestination;	// 68 = 0x44
}
@property(assign, nonatomic) UIPeripheralAnimationGeometry geometry;	// G=0x32fb7bbd; S=0x32dbed29; @synthesize=_geometry
@property(assign, nonatomic) BOOL inPositionIsDestination;	// G=0x32fb7c19; S=0x32dbed91; @synthesize=_inPositionIsDestination
@property(retain, nonatomic) NSDictionary *screenGeometry;	// G=0x32dbfaf9; S=0x32dbf501; @synthesize=_screenGeometry
+ (id)stateWithGeometry:(UIPeripheralAnimationGeometry)geometry inPositionIsDestination:(BOOL)positionIsDestination;	// 0x32dbec61
- (void)dealloc;	// 0x32dbfb69
// declared property getter: - (UIPeripheralAnimationGeometry)geometry;	// 0x32fb7bbd
// declared property getter: - (BOOL)inPositionIsDestination;	// 0x32fb7c19
// declared property getter: - (id)screenGeometry;	// 0x32dbfaf9
// declared property setter: - (void)setGeometry:(UIPeripheralAnimationGeometry)geometry;	// 0x32dbed29
// declared property setter: - (void)setInPositionIsDestination:(BOOL)positionIsDestination;	// 0x32dbed91
// declared property setter: - (void)setScreenGeometry:(id)geometry;	// 0x32dbf501
@end

