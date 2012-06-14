/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface PBTextBlock : NSObject {
}
+ (void)applyTextRuler:(PptTextRulerAtom *)ruler toTextBlock:(id)textBlock;	// 0x3107975d
+ (void)readClientTextBox:(id)box textBody:(id)body state:(id)state;	// 0x3106c029
+ (void)readFromStyledText:(CFAttributedStringRef)styledText toStyledPargraphs:(CFArrayRef)styledPargraphs;	// 0x3106cced
+ (void)readFromTextBlock:(id)textBlock toStyledText:(CFAttributedStringRef)styledText;	// 0x3106c959
+ (void)readParagraph:(id)paragraph paragraph:(CFAttributedStringRef)paragraph2 textType:(int)type state:(id)state;	// 0x3106cf01
+ (void)writeHyperlink:(id)hyperlink textBoxParentHolder:(id)holder insertIndexInParent:(unsigned)parent counter:(unsigned *)counter charRange:(NSRange)range instance:(int)instance state:(id)state;	// 0x3127f849
+ (void)writeTextBody:(id)body textBoxParentHolder:(id)holder startIndexInParent:(unsigned)parent bulletStyleAtom:(PptTextBlockStyling9Atom *)atom textRulerAtom:(PptTextRulerAtom *)atom5 masterTextStyleAtom:(PptTextMasterStyleAtom *)atom6 masterBulletStyleAtom:(PptTextMasterStyle9Atom *)atom7 state:(id)state;	// 0x3127f989
@end

