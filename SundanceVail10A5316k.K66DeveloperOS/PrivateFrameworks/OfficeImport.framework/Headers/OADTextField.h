/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADTextRun.h"

@class NSString, OADParagraphProperties;

__attribute__((visibility("hidden")))
@interface OADTextField : OADTextRun {
@private
	OADParagraphProperties *mParagraphProperties;	// 8 = 0x8
	NSString *mId;	// 12 = 0xc
	NSString *mText;	// 16 = 0x10
}
@property(retain) id id;	// G=0x31257c11; S=0x3113cd15; converted property
@property(retain) id text;	// G=0x31080835; S=0x3106e94d; converted property
- (id)init;	// 0x3106e8c9
- (void)dealloc;	// 0x3108d9dd
// converted property getter: - (id)id;	// 0x31257c11
- (BOOL)isEmpty;	// 0x3118d705
- (id)paragraphProperties;	// 0x3113cd55
- (void)removeUnnecessaryOverrides;	// 0x310732d5
// converted property setter: - (void)setId:(id)anId;	// 0x3113cd15
// converted property setter: - (void)setText:(id)text;	// 0x3106e94d
// converted property getter: - (id)text;	// 0x31080835
@end

