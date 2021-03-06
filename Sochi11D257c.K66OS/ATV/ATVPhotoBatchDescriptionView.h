/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "BRControl.h"
#import "AppleTV-Structs.h"

@class NSAttributedString, NSDateFormatter;

__attribute__((visibility("hidden")))
@interface ATVPhotoBatchDescriptionView : BRControl {
	NSAttributedString *_dimmedTitle;	// 84 = 0x54
	NSAttributedString *_title;	// 88 = 0x58
	NSAttributedString *_boldTitle;	// 92 = 0x5c
	NSDateFormatter *_dayMonthFormatter;	// 96 = 0x60
	NSDateFormatter *_dayMonthYearFormatter;	// 100 = 0x64
}
@property(retain, nonatomic) NSAttributedString *boldTitle;	// G=0xdcb41; S=0xdcb51; @synthesize=_boldTitle
@property(retain, nonatomic) NSDateFormatter *dayMonthFormatter;	// G=0xdc811; S=0xdcb79; @synthesize=_dayMonthFormatter
@property(retain, nonatomic) NSDateFormatter *dayMonthYearFormatter;	// G=0xdc905; S=0xdcba1; @synthesize=_dayMonthYearFormatter
@property(retain, nonatomic) NSAttributedString *dimmedTitle;	// G=0xdcad1; S=0xdcae1; @synthesize=_dimmedTitle
@property(retain, nonatomic) NSAttributedString *title;	// G=0xdcb09; S=0xdcb19; @synthesize=_title
- (id)init;	// 0xdbb09
- (void).cxx_destruct;	// 0xdcbc9
- (id)_boldTitleAttributes;	// 0xdc781
- (id)_dimmedTitleAttributes;	// 0xdc7c9
- (id)_titleAttributes;	// 0xdc739
- (id)accessibilityLabel;	// 0xdc9f9
// declared property getter: - (id)boldTitle;	// 0xdcb41
// declared property getter: - (id)dayMonthFormatter;	// 0xdc811
// declared property getter: - (id)dayMonthYearFormatter;	// 0xdc905
// declared property getter: - (id)dimmedTitle;	// 0xdcad1
- (void)drawRect:(CGRect)rect;	// 0xdc4b1
// declared property setter: - (void)setBoldTitle:(id)title;	// 0xdcb51
// declared property setter: - (void)setDayMonthFormatter:(id)formatter;	// 0xdcb79
// declared property setter: - (void)setDayMonthYearFormatter:(id)formatter;	// 0xdcba1
// declared property setter: - (void)setDimmedTitle:(id)title;	// 0xdcae1
// declared property setter: - (void)setTitle:(id)title;	// 0xdcb19
- (void)setTitle:(id)title boldTitle:(id)title2 dimmedTitle:(id)title3;	// 0xdc0cd
- (CGSize)sizeThatFits:(CGSize)fits;	// 0xdc341
// declared property getter: - (id)title;	// 0xdcb09
- (void)updatePhotoCount:(id)count albumName:(id)name modifiedDate:(id)date;	// 0xdbcf1
- (void)updatePhotoCount:(id)count description:(id)description;	// 0xdbb51
@end

