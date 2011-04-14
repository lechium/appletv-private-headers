/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OfficeImport-Structs.h"

@class WDDocument;

__attribute__((visibility("hidden")))
@interface WDTableCellProperties : NSObject {
@private
	short mWidth;	// 4 = 0x4
	short mPosition;	// 6 = 0x6
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_UT9PZB mOriginalProperties;	// 12 = 0xc
	XXStruct_UT9PZB mTrackedProperties;	// 128 = 0x80
	WDDocument *mDocument;	// 244 = 0xf4
}
@property(assign) short bottomMargin;	// G=0x31b07ea9; S=0x31a898ad; converted property
@property(assign) int bottomMarginType;	// G=0x31b07fbd; S=0x31a898fd; converted property
@property(assign) int deleted;	// G=0x31b086a1; S=0x31b08725; converted property
@property(retain) id deletionDate;	// G=0x31b08eed; S=0x31b0954d; converted property
@property(retain) id editDate;	// G=0x31b08ffd; S=0x31b094b9; converted property
@property(assign) int edited;	// G=0x31b08801; S=0x31b08885; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x31b0840d; S=0x319c14e5; converted property
@property(retain) id formattingChangeDate;	// G=0x31b09111; S=0x31b09425; converted property
@property(assign) int formattingChanged;	// G=0x31b08961; S=0x31b089e5; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x31b08ac1; S=0x31b08b45; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x31b08c25; S=0x31b08ca9; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x31b08d89; S=0x31b08e0d; converted property
@property(assign) short leftMargin;	// G=0x31992c8d; S=0x319c13a1; converted property
@property(assign) int leftMarginType;	// G=0x31b080d1; S=0x31a89949; converted property
@property(assign) BOOL noWrap;	// G=0x31b08525; S=0x31b085b1; converted property
@property(assign) short position;	// G=0x31b077e1; S=0x319c0f2d; converted property
@property(assign) int resolveMode;	// G=0x31b077f1; S=0x319c0b1d; converted property
@property(assign) short rightMargin;	// G=0x31992da1; S=0x319c13f1; converted property
@property(assign) int rightMarginType;	// G=0x31b081e1; S=0x31a89995; converted property
@property(assign) short topMargin;	// G=0x31b07c81; S=0x31a89811; converted property
@property(assign) int topMarginType;	// G=0x31b07d95; S=0x31a89861; converted property
@property(assign) int verticalAlignment;	// G=0x31992b79; S=0x319c1441; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x31b082f5; S=0x319c148d; converted property
@property(assign) short width;	// G=0x319911f9; S=0x319c153d; converted property
@property(assign) int widthType;	// G=0x31991175; S=0x319c1355; converted property
- (id)init;	// 0x319fd491
- (id)initWithDocument:(id)document;	// 0x319c07c1
- (void)addProperties:(id)properties;	// 0x31a947e5
- (void)addPropertiesValues:(XXStruct_py1o6D *)values to:(XXStruct_py1o6D *)to;	// 0x31a94825
- (id)bottomBorder;	// 0x31992951
// converted property getter: - (short)bottomMargin;	// 0x31b07ea9
// converted property getter: - (int)bottomMarginType;	// 0x31b07fbd
- (void)clearShading;	// 0x31b095e1
- (id)copyWithZone:(NSZone *)zone;	// 0x31b09225
- (void)dealloc;	// 0x31995a69
// converted property getter: - (int)deleted;	// 0x31b086a1
// converted property getter: - (id)deletionDate;	// 0x31b08eed
- (id)diagonalDownBorder;	// 0x31b07949
- (id)diagonalUpBorder;	// 0x31b07835
- (id)document;	// 0x31b077d1
// converted property getter: - (id)editDate;	// 0x31b08ffd
// converted property getter: - (int)edited;	// 0x31b08801
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x31b0840d
// converted property getter: - (id)formattingChangeDate;	// 0x31b09111
// converted property getter: - (int)formattingChanged;	// 0x31b08961
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x31b08ac1
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x31b08c25
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x31b08d89
- (id)insideHorizontalBorder;	// 0x31b07a5d
- (id)insideVerticalBorder;	// 0x31b07b6d
- (BOOL)isBottomBorderOverridden;	// 0x319928c1
- (BOOL)isBottomMarginOverridden;	// 0x31b07f2d
- (BOOL)isBottomMarginTypeOverridden;	// 0x31b08041
- (BOOL)isDeletedOverridden;	// 0x31b08771
- (BOOL)isDeletionDateOverridden;	// 0x31b08f71
- (BOOL)isDiagonalDownBorderOverridden;	// 0x31b079cd
- (BOOL)isDiagonalUpBorderOverridden;	// 0x31b078b9
- (BOOL)isEditDateOverridden;	// 0x31b09081
- (BOOL)isEditedOverridden;	// 0x31b088d1
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x31b08495
- (BOOL)isFormattingChangeDateOverridden;	// 0x31b09195
- (BOOL)isFormattingChangedOverridden;	// 0x31b08a31
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x31b08b95
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x31b08cf9
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x31b08e5d
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x31b07ae1
- (BOOL)isInsideVerticalBorderOverridden;	// 0x31b07bf1
- (BOOL)isLeftBorderOverridden;	// 0x319927ad
- (BOOL)isLeftMarginOverridden;	// 0x31992bfd
- (BOOL)isLeftMarginTypeOverridden;	// 0x31b08155
- (BOOL)isNoWrapOverridden;	// 0x31b08611
- (BOOL)isRightBorderOverridden;	// 0x319929d5
- (BOOL)isRightMarginOverridden;	// 0x31992d11
- (BOOL)isRightMarginTypeOverridden;	// 0x31b08265
- (BOOL)isShadingOverridden;	// 0x31992e25
- (BOOL)isTopBorderOverridden;	// 0x31992699
- (BOOL)isTopMarginOverridden;	// 0x31b07d05
- (BOOL)isTopMarginTypeOverridden;	// 0x31b07e19
- (BOOL)isVerticalAlignmentOverridden;	// 0x31992ae9
- (BOOL)isVerticallyMergedCellOverridden;	// 0x31b0837d
- (BOOL)isWidthTypeOverridden;	// 0x319910e5
- (id)leftBorder;	// 0x3199283d
// converted property getter: - (short)leftMargin;	// 0x31992c8d
// converted property getter: - (int)leftMarginType;	// 0x31b080d1
- (id)mutableBottomBorder;	// 0x319c11e5
- (id)mutableDiagonalDownBorder;	// 0x31a9dbcd
- (id)mutableDiagonalUpBorder;	// 0x31a9db15
- (id)mutableInsideHorizontalBorder;	// 0x31a669c1
- (id)mutableInsideVerticalBorder;	// 0x31a66a79
- (id)mutableLeftBorder;	// 0x319c112d
- (id)mutableRightBorder;	// 0x319c129d
- (id)mutableShading;	// 0x31a560fd
- (id)mutableTopBorder;	// 0x319c0f3d
// converted property getter: - (BOOL)noWrap;	// 0x31b08525
- (void)originalToTracked;	// 0x31b09671
// converted property getter: - (short)position;	// 0x31b077e1
// converted property getter: - (int)resolveMode;	// 0x31b077f1
- (id)rightBorder;	// 0x31992a65
// converted property getter: - (short)rightMargin;	// 0x31992da1
// converted property getter: - (int)rightMarginType;	// 0x31b081e1
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x31a898ad
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x31a898fd
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x31b08725
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x31b0954d
// converted property setter: - (void)setEditDate:(id)date;	// 0x31b094b9
// converted property setter: - (void)setEdited:(int)edited;	// 0x31b08885
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x319c14e5
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x31b09425
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x31b089e5
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x31b08b45
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x31b08ca9
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x31b08e0d
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x319c13a1
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x31a89949
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x31b085b1
// converted property setter: - (void)setPosition:(short)position;	// 0x319c0f2d
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x319c0b1d
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x319c13f1
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x31a89995
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x31a89811
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x31a89861
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x319c1441
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x319c148d
// converted property setter: - (void)setWidth:(short)width;	// 0x319c153d
// converted property setter: - (void)setWidthType:(int)type;	// 0x319c1355
- (id)shading;	// 0x31a56271
- (id)topBorder;	// 0x31992729
// converted property getter: - (short)topMargin;	// 0x31b07c81
// converted property getter: - (int)topMarginType;	// 0x31b07d95
// converted property getter: - (int)verticalAlignment;	// 0x31992b79
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x31b082f5
// converted property getter: - (short)width;	// 0x319911f9
// converted property getter: - (int)widthType;	// 0x31991175
@end

