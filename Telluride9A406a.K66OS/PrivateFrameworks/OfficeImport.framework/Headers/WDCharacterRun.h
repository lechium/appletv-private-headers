/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "WDRun.h"

@class WDCharacterProperties, NSMutableString;

__attribute__((visibility("hidden")))
@interface WDCharacterRun : WDRun {
@private
	WDCharacterProperties *mProperties;	// 8 = 0x8
	NSMutableString *mString;	// 12 = 0xc
	BOOL mBinaryWriterContentFlag;	// 16 = 0x10
}
@property(assign) BOOL binaryWriterContentFlag;	// G=0x32a897ed; S=0x32a89801; converted property
@property(retain) id string;	// G=0x328aeb65; S=0x329513a1; converted property
- (id)initWithParagraph:(id)paragraph;	// 0x32950b41
- (id)initWithParagraph:(id)paragraph string:(id)string;	// 0x32aa8bb9
- (void)appendString:(id)string;	// 0x329b3bf5
// converted property getter: - (BOOL)binaryWriterContentFlag;	// 0x32a897ed
- (void)clearProperties;	// 0x32aa8b61
- (void)clearString;	// 0x32aa8b8d
- (void)copyPropertiesFrom:(id)from;	// 0x32aa8bf9
- (void)dealloc;	// 0x328bfc61
- (BOOL)isEmpty;	// 0x32aa8c39
- (id)properties;	// 0x328ba879
- (void)removeLastCharacter:(unsigned short)character;	// 0x32951545
- (int)runType;	// 0x328aeb61
// converted property setter: - (void)setBinaryWriterContentFlag:(BOOL)flag;	// 0x32a89801
- (void)setPropertiesForDocument;	// 0x32aa8aed
// converted property setter: - (void)setString:(id)string;	// 0x329513a1
// converted property getter: - (id)string;	// 0x328aeb65
@end
