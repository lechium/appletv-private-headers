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
@property(assign) int keyboardType;	// G=0x331c0579; S=0x331c0589; @synthesize=_keyboardType
@property(assign, getter=isSecure) BOOL secure;	// G=0x331c0599; S=0x331c05a9; @synthesize=_secure
@property(retain) NSString *title;	// G=0x331c05b9; S=0x331c05cd; @synthesize=_title
@property(retain) NSString *value;	// G=0x331c05f1; S=0x331c0605; @synthesize=_value
+ (id)textFieldWithTitle:(id)title;	// 0x331c0525
- (void)dealloc;	// 0x331c04cd
// declared property getter: - (BOOL)isSecure;	// 0x331c0599
// declared property getter: - (int)keyboardType;	// 0x331c0579
// declared property setter: - (void)setKeyboardType:(int)type;	// 0x331c0589
// declared property setter: - (void)setSecure:(BOOL)secure;	// 0x331c05a9
// declared property setter: - (void)setTitle:(id)title;	// 0x331c05cd
// declared property setter: - (void)setValue:(id)value;	// 0x331c0605
// declared property getter: - (id)title;	// 0x331c05b9
// declared property getter: - (id)value;	// 0x331c05f1
@end

