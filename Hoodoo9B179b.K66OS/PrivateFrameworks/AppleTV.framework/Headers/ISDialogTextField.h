/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/AppleTV.framework/AppleTV
 */

#import <NSObject.h> // Unknown library

@class NSString;

__attribute__((visibility("hidden")))
@interface ISDialogTextField : NSObject {
@private
	int _keyboardType;	// 4 = 0x4
	BOOL _secure;	// 8 = 0x8
	NSString *_title;	// 12 = 0xc
	NSString *_value;	// 16 = 0x10
}
@property(assign) int keyboardType;	// G=0x3041b695; S=0x3041b6a5; @synthesize=_keyboardType
@property(assign, getter=isSecure) BOOL secure;	// G=0x3041b6b5; S=0x3041b6c5; @synthesize=_secure
@property(retain) NSString *title;	// G=0x3041b6d5; S=0x3041b6e9; @synthesize=_title
@property(retain) NSString *value;	// G=0x3041b70d; S=0x3041b721; @synthesize=_value
+ (id)textFieldWithTitle:(id)title;	// 0x3041b641
- (void)dealloc;	// 0x3041b5e9
// declared property getter: - (BOOL)isSecure;	// 0x3041b6b5
// declared property getter: - (int)keyboardType;	// 0x3041b695
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x3041b6a5
// declared property setter: - (void)setSecure:(BOOL)secure;	// 0x3041b6c5
// declared property setter: - (void)setTitle:(id)title;	// 0x3041b6e9
// declared property setter: - (void)setValue:(id)value;	// 0x3041b721
// declared property getter: - (id)title;	// 0x3041b6d5
// declared property getter: - (id)value;	// 0x3041b70d
@end

