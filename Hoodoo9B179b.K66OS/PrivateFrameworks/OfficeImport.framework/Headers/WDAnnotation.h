/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterRun, NSString, WDText, NSDate;

__attribute__((visibility("hidden")))
@interface WDAnnotation : WDRun {
@private
	int mType;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDCharacterRun *mReference;	// 16 = 0x10
	BOOL mReferencePopertiesFixed;	// 20 = 0x14
	NSDate *mDate;	// 24 = 0x18
	NSString *mOwner;	// 28 = 0x1c
	WDAnnotation *mOtherEndOfRangedAnnotation;	// 32 = 0x20
}
@property(retain) id date;	// G=0x329bac51; S=0x329baf49; converted property
@property(retain) id otherEndOfRangedAnnotation;	// G=0x329bac71; S=0x329baec9; converted property
@property(retain) id owner;	// G=0x329bac61; S=0x329baf09; converted property
- (id)initWithParagraph:(id)paragraph type:(int)type;	// 0x329bac81
- (int)annotationType;	// 0x329bac41
// converted property getter: - (id)date;	// 0x329bac51
- (void)dealloc;	// 0x329bae2d
// converted property getter: - (id)otherEndOfRangedAnnotation;	// 0x329bac71
// converted property getter: - (id)owner;	// 0x329bac61
- (id)reference;	// 0x329bac09
- (BOOL)referencePropertiesFixed;	// 0x329bac19
- (int)runType;	// 0x329bac3d
// converted property setter: - (void)setDate:(id)date;	// 0x329baf49
// converted property setter: - (void)setOtherEndOfRangedAnnotation:(id)rangedAnnotation;	// 0x329baec9
// converted property setter: - (void)setOwner:(id)owner;	// 0x329baf09
- (void)setReferencePropertiesFixed;	// 0x329bac29
- (id)text;	// 0x329babf9
@end

