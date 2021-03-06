/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIAlertView.h"

@class NSUndoManager;

__attribute__((visibility("hidden")))
@interface UIUndoAlertView : UIAlertView {
@private
	int _undoButtonIndex;	// 156 = 0x9c
	int _redoButtonIndex;	// 160 = 0xa0
	NSUndoManager *_undoManager;	// 164 = 0xa4
}
@property(readonly, assign, nonatomic) int redoButtonIndex;	// G=0x358225d9; @synthesize=_redoButtonIndex
@property(readonly, assign, nonatomic) int undoButtonIndex;	// G=0x358225c9; @synthesize=_undoButtonIndex
@property(readonly, assign, nonatomic) NSUndoManager *undoManager;	// G=0x358225e9; @synthesize=_undoManager
- (id)initWithDelegate:(id)delegate undoManager:(id)manager;	// 0x35822399
- (void)dealloc;	// 0x3582257d
// declared property getter: - (int)redoButtonIndex;	// 0x358225d9
- (void)show;	// 0x3582254d
// declared property getter: - (int)undoButtonIndex;	// 0x358225c9
// declared property getter: - (id)undoManager;	// 0x358225e9
@end

