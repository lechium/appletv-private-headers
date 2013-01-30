/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library

@protocol ABStyleProvider;

@interface ABChameleonCell : UITableViewCell {
	int _abCellStyle;	// 300 = 0x12c
	id<ABStyleProvider> _styleProvider;	// 304 = 0x130
}
@property(assign, nonatomic) int abCellStyle;	// G=0x376346f1; S=0x37634d2d; @synthesize=_abCellStyle
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x37634cd5; S=0x37634b59; @synthesize=_styleProvider
- (void)_updateBackgroundViewsForCellStyleAndLocation;	// 0x376345fd
- (void)_updateTextStylesForCellStyle;	// 0x37634c4d
// declared property getter: - (int)abCellStyle;	// 0x376346f1
- (void)dealloc;	// 0x3763b351
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x37634d2d
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x376345bd
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x37634b59
// declared property getter: - (id)styleProvider;	// 0x37634cd5
@end
