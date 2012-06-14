/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
@private
	NSString *_identifier;	// 4 = 0x4
	NSString *_segueClassName;	// 8 = 0x8
	UIViewController *_viewController;	// 12 = 0xc
	NSString *_destinationViewControllerIdentifier;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x3567ef75; @synthesize=_identifier
@property(assign, nonatomic) UIViewController *viewController;	// G=0x3567ef85; S=0x3567ef95; @synthesize=_viewController
- (id)initWithCoder:(id)coder;	// 0x3567ec55
- (void)dealloc;	// 0x3567ebe1
- (id)defaultSegueClassName;	// 0x3567edb1
- (Class)effectiveSegueClass;	// 0x3567edbd
- (void)encodeWithCoder:(id)coder;	// 0x3567ed21
// declared property getter: - (id)identifier;	// 0x3567ef75
- (void)perform:(id)perform;	// 0x3567eed9
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x3567ee51
// declared property setter: - (void)setViewController:(id)controller;	// 0x3567ef95
// declared property getter: - (id)viewController;	// 0x3567ef85
@end
