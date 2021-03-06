/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

@interface OADTextField : OADTextRun {
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x34a535e1; S=0x3493867d; converted property
@property(retain) id text;	// G=0x3487c19d; S=0x3486a2b5; converted property
- (id)init;	// 0x3486a231
- (void)dealloc;	// 0x34889345
// converted property getter: - (id)id;	// 0x34a535e1
- (BOOL)isEmpty;	// 0x34989045
- (id)paragraphProperties;	// 0x349386bd
- (void)removeUnnecessaryOverrides;	// 0x3486ec3d
// converted property setter: - (void)setId:(id)anId;	// 0x3493867d
// converted property setter: - (void)setText:(id)text;	// 0x3486a2b5
// converted property getter: - (id)text;	// 0x3487c19d
@end

