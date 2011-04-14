/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebFormDelegate.h"
#import "NSObject.h"
#import <NSObject.h> // Unknown library


@protocol WebFormDelegate <NSObject>
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;
@end

@interface WebFormDelegate : NSObject <WebFormDelegate> {
}
+ (id)_sharedWebFormDelegate;	// 0x32c488f9
- (void)frame:(id)frame sourceFrame:(id)frame2 willSubmitForm:(id)form withValues:(id)values submissionListener:(id)listener;	// 0x32c488e1
- (void)textDidChangeInTextArea:(id)text inFrame:(id)frame;	// 0x32c488d5
- (void)textDidChangeInTextField:(id)text inFrame:(id)frame;	// 0x32c488d1
- (BOOL)textField:(id)field doCommandBySelector:(SEL)selector inFrame:(id)frame;	// 0x32c488d9
- (void)textFieldDidBeginEditing:(id)textField inFrame:(id)frame;	// 0x32c488c9
- (void)textFieldDidEndEditing:(id)textField inFrame:(id)frame;	// 0x32c488cd
@end

