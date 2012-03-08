/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UILongPressGestureRecognizer.h"
#import "UIKit-Structs.h"

@class UIWebDocumentView;

__attribute__((visibility("hidden")))
@interface UIWebLongPressInSelectableRecognizer : UILongPressGestureRecognizer {
@private
	UIWebDocumentView *_documentView;	// 104 = 0x68
}
@property(assign, nonatomic) UIWebDocumentView *documentView;	// G=0x331935c5; S=0x331935d5; @synthesize=_documentView
// declared property getter: - (id)documentView;	// 0x331935c5
// declared property setter: - (void)setDocumentView:(id)view;	// 0x331935d5
- (void)setState:(int)state;	// 0x331934bd
@end

