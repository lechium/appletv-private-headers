/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"
#import "CMMapperRoot.h"

@class WDDocument, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
@private
	CMArchiveManager *mArchiver;	// 8 = 0x8
	WDDocument *wDom;	// 12 = 0xc
	NSString *mFileName;	// 16 = 0x10
}
@property(retain) id fileName;	// G=0x3292b9a5; S=0x328694f9; converted property
- (id)initWithWDom:(id)wdom archiver:(id)archiver;	// 0x32869479
- (id)archiver;	// 0x327c5541
- (id)blipAtIndex:(unsigned)index;	// 0x3288e4b9
- (float)bottomMargin;	// 0x3286aa85
- (CGSize)contentSizeForDevice;	// 0x3286a21d
- (void)dealloc;	// 0x327d6035
- (int)defaultTabWidth;	// 0x327d4bdd
- (id)documentTitle;	// 0x3286abd9
// converted property getter: - (id)fileName;	// 0x3292b9a5
- (BOOL)hasSessionBreakAtIndex:(unsigned)index;	// 0x327d35ad
- (float)headerMargin;	// 0x3286a909
- (float)leftMargin;	// 0x3286a50d
- (void)mapDefaultCssStylesAt:(id)at;	// 0x3286ad11
- (void)mapWithState:(id)state;	// 0x3286953d
- (CGSize)pageSizeForDevice;	// 0x32869f25
- (float)rightMargin;	// 0x3286a661
// converted property setter: - (void)setFileName:(id)name;	// 0x328694f9
- (id)styleMatrix;	// 0x32a246b9
- (float)topMargin;	// 0x3286a7b5
@end

