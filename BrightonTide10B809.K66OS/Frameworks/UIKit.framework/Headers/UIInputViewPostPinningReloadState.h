/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UIResponder;

__attribute__((visibility("hidden")))
@interface UIInputViewPostPinningReloadState : NSObject {
	UIResponder *_responderPreventedFromSettingInputViews;	// 4 = 0x4
}
@property(retain, nonatomic) UIResponder *responderToReload;	// G=0x32c52705; S=0x32c520cd; @synthesize=_responderPreventedFromSettingInputViews
+ (id)stateWithResponder:(id)responder;	// 0x32c5206d
- (void)dealloc;	// 0x32c52719
// declared property getter: - (id)responderToReload;	// 0x32c52705
// declared property setter: - (void)setResponderToReload:(id)reload;	// 0x32c520cd
@end
