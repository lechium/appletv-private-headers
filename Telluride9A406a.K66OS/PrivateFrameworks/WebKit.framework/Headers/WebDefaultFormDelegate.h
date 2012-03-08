/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import <NSObject.h> // Unknown library
#import "WebFormDelegate.h"


__attribute__((visibility("hidden")))
@interface WebDefaultFormDelegate : NSObject <WebFormDelegate> {
}
+ (id)sharedFormDelegate;	// 0x302d9931
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x302d991d
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x302d9915
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x302d9911
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x302d9919
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x302d9909
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x302d990d
@end

