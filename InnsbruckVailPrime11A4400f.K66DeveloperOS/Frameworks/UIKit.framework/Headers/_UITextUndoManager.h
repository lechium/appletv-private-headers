/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <GraphicsServices/NSUndoManager.h>

@class UITextInputController;

__attribute__((visibility("hidden")))
@interface _UITextUndoManager : NSUndoManager {
	UITextInputController *_inputController;	// 40 = 0x28
}
@property(assign, nonatomic) UITextInputController *inputController;	// G=0x2f93b79d; S=0x2f93b7ad; @synthesize=_inputController
// declared property getter: - (id)inputController;	// 0x2f93b79d
- (void)removeAllActions;	// 0x2f93b751
// declared property setter: - (void)setInputController:(id)controller;	// 0x2f93b7ad
@end
