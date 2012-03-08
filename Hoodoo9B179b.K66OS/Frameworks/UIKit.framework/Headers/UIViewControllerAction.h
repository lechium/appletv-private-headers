/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIViewController, NSString;

__attribute__((visibility("hidden")))
@interface UIViewControllerAction : NSObject {
@private
	UIViewController *_viewController;	// 4 = 0x4
	NSString *_name;	// 8 = 0x8
	BOOL _animated;	// 12 = 0xc
	id _completion;	// 16 = 0x10
}
@property(assign, nonatomic) BOOL animated;	// G=0x3309f275; S=0x32f9c831; @synthesize=_animated
@property(copy, nonatomic) id completion;	// G=0x32fb68a9; S=0x32f9c851; @synthesize=_completion
@property(retain, nonatomic) NSString *name;	// G=0x3309f265; S=0x32f9c80d; @synthesize=_name
@property(assign, nonatomic) UIViewController *viewController;	// G=0x3309f255; S=0x32f9c7fd; @synthesize=_viewController
- (id)initWithViewController:(id)viewController name:(id)name animated:(BOOL)animated;	// 0x32f9c77d
// declared property getter: - (BOOL)animated;	// 0x3309f275
// declared property getter: - (id)completion;	// 0x32fb68a9
- (void)dealloc;	// 0x32fb6905
// declared property getter: - (id)name;	// 0x3309f265
// declared property setter: - (void)setAnimated:(BOOL)animated;	// 0x32f9c831
// declared property setter: - (void)setCompletion:(id)completion;	// 0x32f9c851
// declared property setter: - (void)setName:(id)name;	// 0x32f9c80d
// declared property setter: - (void)setViewController:(id)controller;	// 0x32f9c7fd
// declared property getter: - (id)viewController;	// 0x3309f255
@end

