/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

#import "DOMHTMLElement.h"

@class NSString, DOMHTMLCollection;

@interface DOMHTMLTableRowElement : DOMHTMLElement {
}
@property(copy) NSString *align;	// G=0x31e559e5; S=0x31e55b09; 
@property(copy) NSString *bgColor;	// G=0x31e55cbd; S=0x31e55de1; 
@property(readonly, assign) DOMHTMLCollection *cells;	// G=0x31e558d9; 
@property(copy) NSString *ch;	// G=0x31e55f95; S=0x31e560b9; 
@property(copy) NSString *chOff;	// G=0x31e5626d; S=0x31e56391; 
@property(readonly, assign) int rowIndex;	// G=0x31e556d9; 
@property(readonly, assign) int sectionRowIndex;	// G=0x31e557d9; 
@property(copy) NSString *vAlign;	// G=0x31e56545; S=0x31e56669; 
// declared property getter: - (id)align;	// 0x31e559e5
// declared property getter: - (id)bgColor;	// 0x31e55cbd
// declared property getter: - (id)cells;	// 0x31e558d9
// declared property getter: - (id)ch;	// 0x31e55f95
// declared property getter: - (id)chOff;	// 0x31e5626d
- (void)deleteCell:(int)cell;	// 0x31e56995
- (id)insertCell:(int)cell;	// 0x31e5681d
// declared property getter: - (int)rowIndex;	// 0x31e556d9
// declared property getter: - (int)sectionRowIndex;	// 0x31e557d9
// declared property setter: - (void)setAlign:(id)align;	// 0x31e55b09
// declared property setter: - (void)setBgColor:(id)color;	// 0x31e55de1
// declared property setter: - (void)setCh:(id)ch;	// 0x31e560b9
// declared property setter: - (void)setChOff:(id)off;	// 0x31e56391
// declared property setter: - (void)setVAlign:(id)align;	// 0x31e56669
// declared property getter: - (id)vAlign;	// 0x31e56545
@end
