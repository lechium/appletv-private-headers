/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument, WDText;

__attribute__((visibility("hidden")))
@interface WDSection : NSObject {
@private
	unsigned mOriginal : 1;	// 4 = 0x4
	unsigned mTracked : 1;	// 4 = 0x4
	unsigned mResolved : 1;	// 4 = 0x4
	WDDocument *mDocument;	// 8 = 0x8
	WDText *mText;	// 12 = 0xc
	WDText *mEvenPageHeader;	// 16 = 0x10
	WDText *mOddPageHeader;	// 20 = 0x14
	WDText *mFirstPageHeader;	// 24 = 0x18
	WDText *mEvenPageFooter;	// 28 = 0x1c
	WDText *mOddPageFooter;	// 32 = 0x20
	WDText *mFirstPageFooter;	// 36 = 0x24
	XXStruct_RW4LwA mOriginalProperties;	// 40 = 0x28
	XXStruct_RW4LwA mTrackedProperties;	// 172 = 0xac
}
@property(assign) int borderDepth;	// G=0x31b05315; S=0x319eec5d; converted property
@property(assign) int borderDisplay;	// G=0x31b05425; S=0x319eeca9; converted property
@property(assign) int borderOffset;	// G=0x31b05539; S=0x319eecf5; converted property
@property(assign) unsigned long bottomMargin;	// G=0x319bb551; S=0x319ba155; converted property
@property(assign) int breakType;	// G=0x319fe1f9; S=0x319eebc5; converted property
@property(assign) int chapterNumberSeparator;	// G=0x31b05e2d; S=0x31b05eb1; converted property
@property(assign) unsigned short columnCount;	// G=0x31b05f8d; S=0x319eede9; converted property
@property(assign) long columnSpace;	// G=0x31b06099; S=0x319eef51; converted property
@property(assign) BOOL columnsEqualWidth;	// G=0x31b06011; S=0x31a00ba9; converted property
@property(assign) unsigned long footerMargin;	// G=0x31b04c9d; S=0x319fdf29; converted property
@property(retain) id formattingChangeDate;	// G=0x31b06591; S=0x31b066ed; converted property
@property(assign) BOOL formattingChanged;	// G=0x31b062bd; S=0x31b06345; converted property
@property(assign) unsigned long gutterMargin;	// G=0x31b04db1; S=0x319ba1a1; converted property
@property(assign) unsigned long headerMargin;	// G=0x319e9665; S=0x319eec11; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x31b0642d; S=0x31b064b1; converted property
@property(assign) unsigned long leftMargin;	// G=0x3199392d; S=0x319ba071; converted property
@property(assign) short lineNumberDistance;	// G=0x31b058c5; S=0x31a00b59; converted property
@property(assign) unsigned short lineNumberIncrement;	// G=0x31b057b1; S=0x31a27a3d; converted property
@property(assign) int lineNumberRestart;	// G=0x31b059d9; S=0x31a27a8d; converted property
@property(assign) short lineNumberStart;	// G=0x31b0564d; S=0x31b056d1; converted property
@property(assign) unsigned long pageHeight;	// G=0x31993c15; S=0x319ba025; converted property
@property(assign) int pageNumberFormat;	// G=0x31b05aed; S=0x31a665c5; converted property
@property(assign) BOOL pageNumberRestart;	// G=0x31b05d11; S=0x319eed91; converted property
@property(assign) unsigned short pageNumberStart;	// G=0x31b05c01; S=0x319eed41; converted property
@property(assign) int pageOrientation;	// G=0x31b04afd; S=0x31a55e51; converted property
@property(assign) unsigned long pageWidth;	// G=0x319bb215; S=0x319b9fd9; converted property
@property(assign) int resolveMode;	// G=0x319ba1ed; S=0x319b99fd; converted property
@property(assign) unsigned long rightMargin;	// G=0x319bb4cd; S=0x319ba0bd; converted property
@property(assign) BOOL titlePage;	// G=0x319e96e9; S=0x319e960d; converted property
@property(assign) unsigned long topMargin;	// G=0x319938a9; S=0x319ba109; converted property
@property(assign) int verticalJustification;	// G=0x31b061ad; S=0x31a7894d; converted property
- (id)initWithDocument:(id)document;	// 0x319b4549
- (void)appendColumnSpace:(unsigned long)space;	// 0x31a00d0d
- (void)appendColumnWidth:(unsigned long)width;	// 0x31a00c01
// converted property getter: - (int)borderDepth;	// 0x31b05315
// converted property getter: - (int)borderDisplay;	// 0x31b05425
// converted property getter: - (int)borderOffset;	// 0x31b05539
- (id)bottomBorder;	// 0x31b050ed
// converted property getter: - (unsigned long)bottomMargin;	// 0x319bb551
// converted property getter: - (int)breakType;	// 0x319fe1f9
// converted property getter: - (int)chapterNumberSeparator;	// 0x31b05e2d
// converted property getter: - (unsigned short)columnCount;	// 0x31b05f8d
// converted property getter: - (long)columnSpace;	// 0x31b06099
- (unsigned long)columnSpaceAt:(unsigned)at;	// 0x31b06781
- (unsigned long)columnWidthAt:(unsigned)at;	// 0x31b06925
// converted property getter: - (BOOL)columnsEqualWidth;	// 0x31b06011
- (void)dealloc;	// 0x319953b9
- (id)document;	// 0x31b04aed
- (id)evenPageFooter;	// 0x31993671
- (id)evenPageHeader;	// 0x31994031
- (id)firstPageFooter;	// 0x319935c1
- (id)firstPageHeader;	// 0x31994011
// converted property getter: - (unsigned long)footerMargin;	// 0x31b04c9d
// converted property getter: - (id)formattingChangeDate;	// 0x31b06591
// converted property getter: - (BOOL)formattingChanged;	// 0x31b062bd
// converted property getter: - (unsigned long)gutterMargin;	// 0x31b04db1
// converted property getter: - (unsigned long)headerMargin;	// 0x319e9665
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x31b0642d
- (BOOL)isBorderDepthOverridden;	// 0x31b05399
- (BOOL)isBorderDisplayOverridden;	// 0x31b054a9
- (BOOL)isBorderOffsetOverridden;	// 0x31b055bd
- (BOOL)isBottomBorderOverridden;	// 0x31b05171
- (BOOL)isBottomMarginOverridden;	// 0x319bbaa9
- (BOOL)isBreakTypeOverridden;	// 0x31993709
- (BOOL)isChapterNumberSeparatorOverridden;	// 0x31b05efd
- (BOOL)isColumnCountOverridden;	// 0x319ba231
- (BOOL)isColumnSpaceOverridden;	// 0x31b0611d
- (BOOL)isColumnsEqualWidthOverridden;	// 0x31a3e2b5
- (BOOL)isFooterMarginOverridden;	// 0x31b04d21
- (BOOL)isFormattingChangeDateOverridden;	// 0x31b06615
- (BOOL)isFormattingChangedOverridden;	// 0x31b0639d
- (BOOL)isGutterMarginOverridden;	// 0x31b04e35
- (BOOL)isHeaderMarginOverridden;	// 0x31b04c0d
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x31b06501
- (BOOL)isLastColumnWidthDefined;	// 0x31b06861
- (BOOL)isLeftBorderOverridden;	// 0x31b0505d
- (BOOL)isLeftMarginOverridden;	// 0x319bb669
- (BOOL)isLineNumberDistanceOverridden;	// 0x31b05949
- (BOOL)isLineNumberIncrementOverridden;	// 0x31b05835
- (BOOL)isLineNumberRestartOverridden;	// 0x31b05a5d
- (BOOL)isLineNumberStartOverridden;	// 0x31b05721
- (BOOL)isPageHeightOverridden;	// 0x319bb299
- (BOOL)isPageNumberFormatOverridden;	// 0x31b05b71
- (BOOL)isPageNumberRestartOverridden;	// 0x31b05d9d
- (BOOL)isPageNumberStartOverridden;	// 0x31b05c85
- (BOOL)isPageOrientationOverridden;	// 0x31b04b81
- (BOOL)isPageWidthOverridden;	// 0x319bb185
- (BOOL)isRightBorderOverridden;	// 0x31b05285
- (BOOL)isRightMarginOverridden;	// 0x319bb78d
- (BOOL)isTitlePageOverridden;	// 0x319939b1
- (BOOL)isTopBorderOverridden;	// 0x31b04f49
- (BOOL)isTopMarginOverridden;	// 0x319bb8b1
- (BOOL)isVerticalJustificationOverridden;	// 0x31b06231
- (id)leftBorder;	// 0x31b04fd9
// converted property getter: - (unsigned long)leftMargin;	// 0x3199392d
// converted property getter: - (short)lineNumberDistance;	// 0x31b058c5
// converted property getter: - (unsigned short)lineNumberIncrement;	// 0x31b057b1
// converted property getter: - (int)lineNumberRestart;	// 0x31b059d9
// converted property getter: - (short)lineNumberStart;	// 0x31b0564d
- (id)mutableBottomBorder;	// 0x31a9b1c1
- (id)mutableLeftBorder;	// 0x31a9b109
- (id)mutableRightBorder;	// 0x31a8f5a9
- (id)mutableTopBorder;	// 0x31a9b051
- (id)oddPageFooter;	// 0x31993661
- (id)oddPageHeader;	// 0x31994021
// converted property getter: - (unsigned long)pageHeight;	// 0x31993c15
// converted property getter: - (int)pageNumberFormat;	// 0x31b05aed
// converted property getter: - (BOOL)pageNumberRestart;	// 0x31b05d11
// converted property getter: - (unsigned short)pageNumberStart;	// 0x31b05c01
// converted property getter: - (int)pageOrientation;	// 0x31b04afd
// converted property getter: - (unsigned long)pageWidth;	// 0x319bb215
// converted property getter: - (int)resolveMode;	// 0x319ba1ed
- (id)rightBorder;	// 0x31b05201
// converted property getter: - (unsigned long)rightMargin;	// 0x319bb4cd
// converted property setter: - (void)setBorderDepth:(int)depth;	// 0x319eec5d
// converted property setter: - (void)setBorderDisplay:(int)display;	// 0x319eeca9
// converted property setter: - (void)setBorderOffset:(int)offset;	// 0x319eecf5
// converted property setter: - (void)setBottomMargin:(unsigned long)margin;	// 0x319ba155
// converted property setter: - (void)setBreakType:(int)type;	// 0x319eebc5
// converted property setter: - (void)setChapterNumberSeparator:(int)separator;	// 0x31b05eb1
// converted property setter: - (void)setColumnCount:(unsigned short)count;	// 0x319eede9
// converted property setter: - (void)setColumnSpace:(long)space;	// 0x319eef51
// converted property setter: - (void)setColumnsEqualWidth:(BOOL)width;	// 0x31a00ba9
// converted property setter: - (void)setFooterMargin:(unsigned long)margin;	// 0x319fdf29
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x31b066ed
// converted property setter: - (void)setFormattingChanged:(BOOL)changed;	// 0x31b06345
// converted property setter: - (void)setGutterMargin:(unsigned long)margin;	// 0x319ba1a1
// converted property setter: - (void)setHeaderMargin:(unsigned long)margin;	// 0x319eec11
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x31b064b1
// converted property setter: - (void)setLeftMargin:(unsigned long)margin;	// 0x319ba071
// converted property setter: - (void)setLineNumberDistance:(short)distance;	// 0x31a00b59
// converted property setter: - (void)setLineNumberIncrement:(unsigned short)increment;	// 0x31a27a3d
// converted property setter: - (void)setLineNumberRestart:(int)restart;	// 0x31a27a8d
// converted property setter: - (void)setLineNumberStart:(short)start;	// 0x31b056d1
// converted property setter: - (void)setPageHeight:(unsigned long)height;	// 0x319ba025
// converted property setter: - (void)setPageNumberFormat:(int)format;	// 0x31a665c5
// converted property setter: - (void)setPageNumberRestart:(BOOL)restart;	// 0x319eed91
// converted property setter: - (void)setPageNumberStart:(unsigned short)start;	// 0x319eed41
// converted property setter: - (void)setPageOrientation:(int)orientation;	// 0x31a55e51
// converted property setter: - (void)setPageWidth:(unsigned long)width;	// 0x319b9fd9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x319b99fd
// converted property setter: - (void)setRightMargin:(unsigned long)margin;	// 0x319ba0bd
// converted property setter: - (void)setTitlePage:(BOOL)page;	// 0x319e960d
// converted property setter: - (void)setTopMargin:(unsigned long)margin;	// 0x319ba109
// converted property setter: - (void)setVerticalJustification:(int)justification;	// 0x31a7894d
- (id)text;	// 0x31993d01
// converted property getter: - (BOOL)titlePage;	// 0x319e96e9
- (id)topBorder;	// 0x31b04ec5
// converted property getter: - (unsigned long)topMargin;	// 0x319938a9
// converted property getter: - (int)verticalJustification;	// 0x31b061ad
@end

