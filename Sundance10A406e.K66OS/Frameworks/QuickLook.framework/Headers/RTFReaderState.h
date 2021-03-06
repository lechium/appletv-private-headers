/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

#import "QuickLook-Structs.h"
#import <NSObject.h> // Unknown library

@class NSArray, NSMutableDictionary, RTFTextTable, NSMutableArray, NSMutableData;

__attribute__((visibility("hidden")))
@interface RTFReaderState : NSObject {
	id _delegate;	// 4 = 0x4
	unsigned long _defaultToUniCharEncoding;	// 8 = 0x8
	NSMutableDictionary *_documentInfoDictionary;	// 12 = 0xc
	CGSize _paperSize;	// 16 = 0x10
	float _lMargin;	// 24 = 0x18
	float _rMargin;	// 28 = 0x1c
	float _bMargin;	// 32 = 0x20
	float _tMargin;	// 36 = 0x24
	CGSize _viewSize;	// 40 = 0x28
	int _viewScale;	// 48 = 0x30
	int _viewKind;	// 52 = 0x34
	NSMutableArray *_attributesStack;	// 56 = 0x38
	NSMutableDictionary *_curAttributes;	// 60 = 0x3c
	unsigned _level;	// 64 = 0x40
	NSAttributeInfo _attributeInfo;	// 68 = 0x44
	NSMutableData *_attributeInfoStack;	// 100 = 0x64
	int _tableNestingLevel;	// 104 = 0x68
	BOOL _isRTLDocument;	// 108 = 0x6c
	NSArray *_textBlocks;	// 112 = 0x70
	NSMutableArray *_nestedTables;	// 116 = 0x74
	RTFTextTable *_currentTable;	// 120 = 0x78
	RTFTextTable *_previousTable;	// 124 = 0x7c
	NSMutableArray *_currentRowArray;	// 128 = 0x80
	NSMutableArray *_previousRowArray;	// 132 = 0x84
	int _currentRow;	// 136 = 0x88
	int _currentColumn;	// 140 = 0x8c
	int _currentDefinitionColumn;	// 144 = 0x90
	BOOL _currentRowIsLast;	// 148 = 0x94
	BOOL _setTableCells;	// 149 = 0x95
	unsigned _currentBorderEdge;	// 152 = 0x98
	BOOL _currentBorderIsTable;	// 156 = 0x9c
	NSMutableDictionary *_listDefinitions;	// 160 = 0xa0
	int _currentListNumber;	// 164 = 0xa4
	int _currentListLevel;	// 168 = 0xa8
}
@property(assign) int baseWritingDirection;	// G=0x30e1165d; S=0x30e11645; converted property
@property(assign) BOOL bold;	// G=0x30e1157d; S=0x30e11565; converted property
@property(assign) float bottomMargin;	// G=0x30e113ad; S=0x30e1139d; converted property
@property(assign) unsigned long codePageEncoding;	// G=0x30e114d9; S=0x30e114c5; converted property
@property(readonly, assign) unsigned currentBorderEdge;	// G=0x30e11de1; converted property
@property(readonly, assign) BOOL currentBorderIsTable;	// G=0x30e11df1; converted property
@property(assign) int currentListLevel;	// G=0x30e12b1d; S=0x30e12b2d; converted property
@property(assign) int currentListNumber;	// G=0x30e12afd; S=0x30e12b0d; converted property
@property(readonly, retain) RTFTextTable *currentTable;	// G=0x30e11d75; converted property
@property(assign) unsigned long defaultToUniCharEncoding;	// G=0x30e11495; S=0x30e11485; converted property
@property(readonly, retain) NSMutableDictionary *documentInfoDictionary;	// G=0x30e112c1; converted property
@property(retain) id font;	// G=0x30e115d9; S=0x30e115c5; converted property
@property(assign) float fontSize;	// G=0x30e11601; S=0x30e115ed; converted property
@property(assign) BOOL hasWritingDirectionAttribute;	// G=0x30e1162d; S=0x30e11615; converted property
@property(assign) BOOL italic;	// G=0x30e115ad; S=0x30e11595; converted property
@property(assign) float leftMargin;	// G=0x30e1134d; S=0x30e1133d; converted property
@property(readonly, assign) unsigned level;	// G=0x30e11475; converted property
@property(readonly, retain) NSMutableDictionary *listDefinitions;	// G=0x30e12b3d; converted property
@property(assign) BOOL multiByteEncoding;	// G=0x30e11505; S=0x30e114ed; converted property
@property(assign) CGSize paperSize;	// G=0x30e11325; S=0x30e11311; converted property
@property(assign) float rightMargin;	// G=0x30e1136d; S=0x30e1135d; converted property
@property(assign) unsigned long toUniCharEncoding;	// G=0x30e114b5; S=0x30e114a5; converted property
@property(assign) float topMargin;	// G=0x30e1138d; S=0x30e1137d; converted property
@property(assign) unsigned unicodeAlternativeLength;	// G=0x30e11535; S=0x30e1151d; converted property
@property(assign) CGSize viewSize;	// G=0x30e113d1; S=0x30e113bd; converted property
- (id)initWithDelegate:(id)delegate;	// 0x30e10e69
- (void)_beginTableRow;	// 0x30e11c45
- (void)_clearTableCells;	// 0x30e12439
- (BOOL)_currentTableCellIsPlaceholder;	// 0x30e11e01
- (void)_ensureTableCells;	// 0x30e11a69
- (void)_notifyEndParagraph;	// 0x30e12dc5
- (void)_notifyEndTable;	// 0x30e12e65
- (void)_notifyEndTableCellWithCell:(id)cell;	// 0x30e12fa5
- (void)_notifyEndTableRow;	// 0x30e12f05
- (void)_notifyProcessString:(id)string;	// 0x30e12d19
- (void)_notifyStartParagraph;	// 0x30e12d75
- (void)_notifyStartTable;	// 0x30e12e15
- (void)_notifyStartTableCell;	// 0x30e12f55
- (void)_notifyStartTableRow;	// 0x30e12eb5
- (void)_paragraphInTable;	// 0x30e126a9
- (void)_popTableState;	// 0x30e120bd
- (void)_pushTableState;	// 0x30e11ef5
- (void)_setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x30e11ed5
- (void)_setTableCells;	// 0x30e12271
- (void)_updateAttributes;	// 0x30e118ed
- (void)addListDefinition:(id)definition forKey:(int)key;	// 0x30e12b4d
- (void)addOverride:(int)override forKey:(int)key;	// 0x30e12bfd
- (id)attributeForKey:(id)key;	// 0x30e116a1
// converted property getter: - (int)baseWritingDirection;	// 0x30e1165d
// converted property getter: - (BOOL)bold;	// 0x30e1157d
// converted property getter: - (float)bottomMargin;	// 0x30e113ad
// converted property getter: - (unsigned long)codePageEncoding;	// 0x30e114d9
- (id)currentAttributes;	// 0x30e11465
// converted property getter: - (unsigned)currentBorderEdge;	// 0x30e11de1
// converted property getter: - (BOOL)currentBorderIsTable;	// 0x30e11df1
// converted property getter: - (int)currentListLevel;	// 0x30e12b1d
// converted property getter: - (int)currentListNumber;	// 0x30e12afd
- (id)currentParagraphStyle;	// 0x30e117f5
// converted property getter: - (id)currentTable;	// 0x30e11d75
- (id)currentTableCell;	// 0x30e11d85
- (BOOL)currentTableCellIsPlaceholder;	// 0x30e11995
- (void)dealloc;	// 0x30e11075
- (id)defaultParagraphStyle;	// 0x30e11729
// converted property getter: - (unsigned long)defaultToUniCharEncoding;	// 0x30e11495
// converted property getter: - (id)documentInfoDictionary;	// 0x30e112c1
- (void)endParagraph;	// 0x30e1185d
- (void)endTableCell;	// 0x30e126f9
- (void)endTableCellDefinition;	// 0x30e12659
- (void)endTableRow;	// 0x30e127dd
// converted property getter: - (id)font;	// 0x30e115d9
// converted property getter: - (float)fontSize;	// 0x30e11601
// converted property getter: - (BOOL)hasWritingDirectionAttribute;	// 0x30e1162d
- (BOOL)isLastTableRow;	// 0x30e127cd
// converted property getter: - (BOOL)italic;	// 0x30e115ad
- (void)lastTableRow;	// 0x30e127b9
// converted property getter: - (float)leftMargin;	// 0x30e1134d
// converted property getter: - (unsigned)level;	// 0x30e11475
// converted property getter: - (id)listDefinitions;	// 0x30e12b3d
- (void)mergeTableCellsHorizontally;	// 0x30e1293d
- (void)mergeTableCellsVertically;	// 0x30e129f1
// converted property getter: - (BOOL)multiByteEncoding;	// 0x30e11505
- (id)mutableAttributes;	// 0x30e11409
- (id)mutableParagraphStyle;	// 0x30e11771
// converted property getter: - (CGSize)paperSize;	// 0x30e11325
- (void)paragraphInTable;	// 0x30e11925
- (void)popState;	// 0x30e111b1
- (void)processString:(id)string;	// 0x30e1186d
- (void)pushState;	// 0x30e11129
- (void)removeAttributeForKey:(id)key;	// 0x30e116fd
// converted property getter: - (float)rightMargin;	// 0x30e1136d
- (void)setAttribute:(id)attribute forKey:(id)key;	// 0x30e116cd
// converted property setter: - (void)setBaseWritingDirection:(int)direction;	// 0x30e11645
// converted property setter: - (void)setBold:(BOOL)bold;	// 0x30e11565
// converted property setter: - (void)setBottomMargin:(float)margin;	// 0x30e1139d
// converted property setter: - (void)setCodePageEncoding:(unsigned long)encoding;	// 0x30e114c5
- (void)setCurrentBorderEdge:(unsigned)edge isTable:(BOOL)table;	// 0x30e12add
// converted property setter: - (void)setCurrentListLevel:(int)level;	// 0x30e12b2d
// converted property setter: - (void)setCurrentListNumber:(int)number;	// 0x30e12b0d
// converted property setter: - (void)setDefaultToUniCharEncoding:(unsigned long)uniCharEncoding;	// 0x30e11485
// converted property setter: - (void)setFont:(id)font;	// 0x30e115c5
- (void)setFontIsValid:(BOOL)valid;	// 0x30e1154d
// converted property setter: - (void)setFontSize:(float)size;	// 0x30e115ed
// converted property setter: - (void)setHasWritingDirectionAttribute:(BOOL)attribute;	// 0x30e11615
// converted property setter: - (void)setItalic:(BOOL)italic;	// 0x30e11595
// converted property setter: - (void)setLeftMargin:(float)margin;	// 0x30e1133d
// converted property setter: - (void)setMultiByteEncoding:(BOOL)encoding;	// 0x30e114ed
// converted property setter: - (void)setPaperSize:(CGSize)size;	// 0x30e11311
// converted property setter: - (void)setRightMargin:(float)margin;	// 0x30e1135d
- (void)setTableFlags:(unsigned)flags;	// 0x30e11975
- (void)setTableNestingLevel:(int)level;	// 0x30e12495
- (void)setTextAlignment:(int)alignment;	// 0x30e11675
// converted property setter: - (void)setToUniCharEncoding:(unsigned long)uniCharEncoding;	// 0x30e114a5
// converted property setter: - (void)setTopMargin:(float)margin;	// 0x30e1137d
// converted property setter: - (void)setUnicodeAlternativeLength:(unsigned)length;	// 0x30e1151d
- (void)setViewKind:(int)kind;	// 0x30e113e9
- (void)setViewScale:(int)scale;	// 0x30e113f9
// converted property setter: - (void)setViewSize:(CGSize)size;	// 0x30e113bd
- (void)startParagraph;	// 0x30e11809
- (void)startTableRowDefinition;	// 0x30e12649
// converted property getter: - (unsigned long)toUniCharEncoding;	// 0x30e114b5
// converted property getter: - (float)topMargin;	// 0x30e1138d
// converted property getter: - (unsigned)unicodeAlternativeLength;	// 0x30e11535
// converted property getter: - (CGSize)viewSize;	// 0x30e113d1
@end

