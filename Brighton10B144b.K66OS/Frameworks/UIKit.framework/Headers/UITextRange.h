/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library

@class UITextRangeImpl, UITextPosition;

@interface UITextRange : NSObject {
}
@property(readonly, assign, nonatomic, getter=isEmpty) BOOL empty;	// G=0x32dee82d; 
@property(readonly, assign, nonatomic) UITextPosition *end;	// G=0x32dee835; 
@property(readonly, assign, nonatomic, getter=_isCaret) BOOL isCaret;	// G=0x32bd4e99; 
@property(readonly, assign, nonatomic, getter=_isImpl) UITextRangeImpl *isImpl;	// G=0x32c0240d; 
@property(readonly, assign, nonatomic, getter=_isRanged) BOOL isRanged;	// G=0x32beba79; 
@property(readonly, assign, nonatomic) UITextPosition *start;	// G=0x32dee831; 
// declared property getter: - (BOOL)_isCaret;	// 0x32bd4e99
// declared property getter: - (id)_isImpl;	// 0x32c0240d
// declared property getter: - (BOOL)_isRanged;	// 0x32beba79
// declared property getter: - (id)end;	// 0x32dee835
// declared property getter: - (BOOL)isEmpty;	// 0x32dee82d
// declared property getter: - (id)start;	// 0x32dee831
@end

