/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDString, EDAlignmentInfo, EDProtection;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject {
@private
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x31231d01; S=0x310c890d; converted property
@property(retain) id protection;	// G=0x31231d11; S=0x310c8985; converted property
@property(retain) id text;	// G=0x310ca631; S=0x310c89c9; converted property
+ (id)textBox;	// 0x310c8835
// converted property getter: - (id)alignmentInfo;	// 0x31231d01
- (void)dealloc;	// 0x310d32f9
// converted property getter: - (id)protection;	// 0x31231d11
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x310c890d
// converted property setter: - (void)setProtection:(id)protection;	// 0x310c8985
// converted property setter: - (void)setText:(id)text;	// 0x310c89c9
// converted property getter: - (id)text;	// 0x310ca631
@end

