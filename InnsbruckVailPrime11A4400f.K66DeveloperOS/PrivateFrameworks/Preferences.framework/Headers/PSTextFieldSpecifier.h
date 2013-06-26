/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

#import "PSSpecifier.h"

@class NSString;

@interface PSTextFieldSpecifier : PSSpecifier {
	SEL bestGuess;	// 96 = 0x60
	NSString *_placeholder;	// 100 = 0x64
}
@property(retain) NSString *placeholder;	// G=0x3246b879; S=0x3246b83d; converted property
+ (id)preferenceSpecifierNamed:(id)named target:(id)target set:(SEL)set get:(SEL)get detail:(Class)detail cell:(int)cell edit:(Class)edit;	// 0x3246b731
- (void)dealloc;	// 0x3246b7f1
// converted property getter: - (id)placeholder;	// 0x3246b879
// converted property setter: - (void)setPlaceholder:(id)placeholder;	// 0x3246b83d
@end
