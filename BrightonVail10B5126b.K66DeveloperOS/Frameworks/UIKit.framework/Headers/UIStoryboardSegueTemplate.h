/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"

@class NSString, UIViewController;

__attribute__((visibility("hidden")))
@interface UIStoryboardSegueTemplate : NSObject <NSCoding> {
	NSString *_identifier;	// 4 = 0x4
	NSString *_segueClassName;	// 8 = 0x8
	UIViewController *_viewController;	// 12 = 0xc
	NSString *_destinationViewControllerIdentifier;	// 16 = 0x10
	BOOL _performOnViewLoad;	// 20 = 0x14
}
@property(readonly, assign, nonatomic) NSString *identifier;	// G=0x32e6fe69; @synthesize=_identifier
@property(assign, nonatomic) BOOL performOnViewLoad;	// G=0x32e6fe99; S=0x32e6fea9; @synthesize=_performOnViewLoad
@property(assign, nonatomic) UIViewController *viewController;	// G=0x32e6fe79; S=0x32e6fe89; @synthesize=_viewController
- (id)initWithCoder:(id)coder;	// 0x32e6fa8d
- (void)_perform:(id)perform;	// 0x32e6fd69
- (void)dealloc;	// 0x32e6fa15
- (id)defaultSegueClassName;	// 0x32e6fc41
- (Class)effectiveSegueClass;	// 0x32e6fc4d
- (void)encodeWithCoder:(id)coder;	// 0x32e6fb81
// declared property getter: - (id)identifier;	// 0x32e6fe69
- (void)perform:(id)perform;	// 0x32e6fe05
// declared property getter: - (BOOL)performOnViewLoad;	// 0x32e6fe99
- (id)segueWithDestinationViewController:(id)destinationViewController;	// 0x32e6fce1
// declared property setter: - (void)setPerformOnViewLoad:(BOOL)load;	// 0x32e6fea9
// declared property setter: - (void)setViewController:(id)controller;	// 0x32e6fe89
// declared property getter: - (id)viewController;	// 0x32e6fe79
@end

