/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDProtection, EDString, EDAlignmentInfo;

__attribute__((visibility("hidden")))
@interface EDTextBox : NSObject {
@private
	EDString *mText;	// 4 = 0x4
	EDAlignmentInfo *mAlignmentInfo;	// 8 = 0x8
	EDProtection *mProtection;	// 12 = 0xc
}
@property(retain) id alignmentInfo;	// G=0x31336fe5; S=0x31242cf1; converted property
@property(retain) id protection;	// G=0x31336ff5; S=0x31242d6d; converted property
@property(retain) id text;	// G=0x31242f45; S=0x31242db5; converted property
+ (id)textBox;	// 0x31242c09
// converted property getter: - (id)alignmentInfo;	// 0x31336fe5
- (void)dealloc;	// 0x31242f65
// converted property getter: - (id)protection;	// 0x31336ff5
// converted property setter: - (void)setAlignmentInfo:(id)info;	// 0x31242cf1
// converted property setter: - (void)setProtection:(id)protection;	// 0x31242d6d
// converted property setter: - (void)setText:(id)text;	// 0x31242db5
// converted property getter: - (id)text;	// 0x31242f45
@end

