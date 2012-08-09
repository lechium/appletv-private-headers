/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapperRoot.h"
#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class CMArchiveManager, WDDocument, NSString;

@interface WMDocumentMapper : CMMapper <CMMapperRoot> {
	CMArchiveManager *mArchiver;	// 8 = 0x8
	WDDocument *wDom;	// 12 = 0xc
	NSString *mFileName;	// 16 = 0x10
}
@property(retain) id fileName;	// G=0x3709feb9; S=0x36ff4151; converted property
- (id)initWithWDom:(id)wdom archiver:(id)archiver;	// 0x36ff40d1
- (id)archiver;	// 0x36ff5a35
- (id)blipAtIndex:(unsigned)index;	// 0x36ff9581
- (float)bottomMargin;	// 0x36ff57d1
- (CGSize)contentSizeForDevice;	// 0x36ff4e3d
- (void)dealloc;	// 0x37001b89
- (int)defaultTabWidth;	// 0x36ffff85
- (id)documentTitle;	// 0x36ff5915
// converted property getter: - (id)fileName;	// 0x3709feb9
- (BOOL)hasSessionBreakAtIndex:(unsigned)index;	// 0x36ff5b9d
- (float)headerMargin;	// 0x36ff5625
- (float)leftMargin;	// 0x36ff5259
- (void)mapDefaultCssStylesAt:(id)at;	// 0x36ff5a45
- (void)mapWithState:(id)state;	// 0x36ff4195
- (CGSize)pageSizeForDevice;	// 0x36ff4ad9
- (float)rightMargin;	// 0x36ff539d
// converted property setter: - (void)setFileName:(id)name;	// 0x36ff4151
- (id)styleMatrix;	// 0x370d1ecd
- (float)topMargin;	// 0x36ff54e1
@end
