/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
 */

#import <UITableViewCell.h> // Unknown library

@protocol ABStyleProvider;

@interface ABChameleonCell : UITableViewCell {
	int _abCellStyle;	// 296 = 0x128
	id<ABStyleProvider> _styleProvider;	// 300 = 0x12c
}
@property(assign, nonatomic) int abCellStyle;	// G=0x34c743e5; S=0x34c74a1d; @synthesize=_abCellStyle
@property(retain, nonatomic) id<ABStyleProvider> styleProvider;	// G=0x34c749c5; S=0x34c74849; @synthesize=_styleProvider
- (void)_updateBackgroundViewsForCellStyleAndLocation;	// 0x34c742f1
- (void)_updateTextStylesForCellStyle;	// 0x34c7493d
// declared property getter: - (int)abCellStyle;	// 0x34c743e5
- (void)dealloc;	// 0x34c81159
// declared property setter: - (void)setAbCellStyle:(int)style;	// 0x34c74a1d
- (void)setSectionLocation:(int)location animated:(BOOL)animated;	// 0x34c742b1
// declared property setter: - (void)setStyleProvider:(id)provider;	// 0x34c74849
// declared property getter: - (id)styleProvider;	// 0x34c749c5
@end

