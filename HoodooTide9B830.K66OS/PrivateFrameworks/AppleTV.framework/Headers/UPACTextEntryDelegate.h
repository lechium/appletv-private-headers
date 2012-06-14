/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library
#import "BRTextFieldDelegate.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UPACTextEntryDelegate : NSObject <BRTextFieldDelegate> {
@private
	id _completionHandler;	// 4 = 0x4
	NSString *_text;	// 8 = 0x8
}
@property(copy, nonatomic) id completionHandler;	// G=0x3298bb39; S=0x3298bb49; @synthesize=_completionHandler
@property(retain, nonatomic) NSString *text;	// G=0x3298bb6d; S=0x3298bb7d; @synthesize=_text
// declared property getter: - (id)completionHandler;	// 0x3298bb39
- (void)dealloc;	// 0x3298ba1d
// declared property setter: - (void)setCompletionHandler:(id)handler;	// 0x3298bb49
// declared property setter: - (void)setText:(id)text;	// 0x3298bb7d
// declared property getter: - (id)text;	// 0x3298bb6d
- (void)textDidChange:(id)text;	// 0x3298ba7d
- (void)textDidEndEditing:(id)text;	// 0x3298ba81
@end
