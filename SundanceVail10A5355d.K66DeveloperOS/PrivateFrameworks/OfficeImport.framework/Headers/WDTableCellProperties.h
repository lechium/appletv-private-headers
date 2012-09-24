/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class WDDocument;

@interface WDTableCellProperties : NSObject {
	short mWidth;	// 4 = 0x4
	short mPosition;	// 6 = 0x6
	unsigned mOriginal : 1;	// 8 = 0x8
	unsigned mTracked : 1;	// 8 = 0x8
	unsigned mResolved : 1;	// 8 = 0x8
	XXStruct_a$$qTB mOriginalProperties;	// 12 = 0xc
	XXStruct_a$$qTB mTrackedProperties;	// 132 = 0x84
	WDDocument *mDocument;	// 252 = 0xfc
}
@property(assign) short bottomMargin;	// G=0x31e3bbd9; S=0x31d4453d; converted property
@property(assign) int bottomMarginType;	// G=0x31e3bd0d; S=0x31e3bd9d; converted property
@property(assign) int deleted;	// G=0x31e3c6e9; S=0x31e3c779; converted property
@property(retain) id deletionDate;	// G=0x31e3d031; S=0x31e3d0c1; converted property
@property(retain) id editDate;	// G=0x31e3d1f9; S=0x31e3d289; converted property
@property(assign) int edited;	// G=0x31e3c871; S=0x31e3c901; converted property
@property(assign) BOOL firstInSetOfVerticallyMergedCells;	// G=0x31e3c415; S=0x31cd1c0d; converted property
@property(retain) id formattingChangeDate;	// G=0x31e3d3c1; S=0x31e3d451; converted property
@property(assign) int formattingChanged;	// G=0x31e3c9f9; S=0x31e3ca89; converted property
@property(assign) unsigned short indexToAuthorIDOfDeletion;	// G=0x31e3cb81; S=0x31e3cc15; converted property
@property(assign) unsigned short indexToAuthorIDOfEdit;	// G=0x31e3cd11; S=0x31e3cda5; converted property
@property(assign) unsigned short indexToAuthorIDOfFormattingChange;	// G=0x31e3cea1; S=0x31e3cf35; converted property
@property(assign) short leftMargin;	// G=0x31d4463d; S=0x31d44591; converted property
@property(assign) int leftMarginType;	// G=0x31e3be95; S=0x31e3bf25; converted property
@property(assign) BOOL noWrap;	// G=0x31e3c54d; S=0x31e3c5e1; converted property
@property(assign) short position;	// G=0x31e3b229; S=0x31cd1ae9; converted property
@property(assign) int resolveMode;	// G=0x31e3b239; S=0x31cd1671; converted property
@property(assign) short rightMargin;	// G=0x31d446cd; S=0x31d445e5; converted property
@property(assign) int rightMarginType;	// G=0x31e3c01d; S=0x31e3c0ad; converted property
@property(assign) int textDirection;	// G=0x31e3c1a5; S=0x31cd1b4d; converted property
@property(assign) short topMargin;	// G=0x31e3b91d; S=0x31d444e9; converted property
@property(assign) int topMarginType;	// G=0x31e3ba51; S=0x31e3bae1; converted property
@property(assign) int verticalAlignment;	// G=0x31cd2f91; S=0x31cd1af9; converted property
@property(assign) BOOL verticallyMergedCell;	// G=0x31e3c2dd; S=0x31cd1ba5; converted property
@property(assign) short width;	// G=0x31c84c85; S=0x31c739ed; converted property
@property(assign) int widthType;	// G=0x31c84bf5; S=0x31c739fd; converted property
- (id)init;	// 0x31c6637d
- (id)initWithDocument:(id)document;	// 0x31c72e5d
- (id).cxx_construct;	// 0x31c66379
- (void)addProperties:(id)properties;	// 0x31d34a91
- (void)addPropertiesValues:(XXStruct_PkO1_D *)values to:(XXStruct_PkO1_D *)to;	// 0x31d34ad9
- (id)bottomBorder;	// 0x31c86629
// converted property getter: - (short)bottomMargin;	// 0x31e3bbd9
// converted property getter: - (int)bottomMarginType;	// 0x31e3bd0d
- (void)clearShading;	// 0x31e3b2ad
- (id)copyWithZone:(NSZone *)zone;	// 0x31e3d589
- (void)dealloc;	// 0x31c89481
// converted property getter: - (int)deleted;	// 0x31e3c6e9
// converted property getter: - (id)deletionDate;	// 0x31e3d031
- (id)diagonalDownBorder;	// 0x31e3b4f1
- (id)diagonalUpBorder;	// 0x31e3b32d
- (id)document;	// 0x31e3b219
// converted property getter: - (id)editDate;	// 0x31e3d1f9
// converted property getter: - (int)edited;	// 0x31e3c871
// converted property getter: - (BOOL)firstInSetOfVerticallyMergedCells;	// 0x31e3c415
// converted property getter: - (id)formattingChangeDate;	// 0x31e3d3c1
// converted property getter: - (int)formattingChanged;	// 0x31e3c9f9
// converted property getter: - (unsigned short)indexToAuthorIDOfDeletion;	// 0x31e3cb81
// converted property getter: - (unsigned short)indexToAuthorIDOfEdit;	// 0x31e3cd11
// converted property getter: - (unsigned short)indexToAuthorIDOfFormattingChange;	// 0x31e3cea1
- (id)insideHorizontalBorder;	// 0x31e3b6b5
- (id)insideVerticalBorder;	// 0x31e3b7e9
- (BOOL)isBottomBorderOverridden;	// 0x31c86585
- (BOOL)isBottomMarginOverridden;	// 0x31e3bc69
- (BOOL)isBottomMarginTypeOverridden;	// 0x31e3bdf1
- (BOOL)isDeletedOverridden;	// 0x31e3c7cd
- (BOOL)isDeletionDateOverridden;	// 0x31e3d155
- (BOOL)isDiagonalDownBorderOverridden;	// 0x31e3b611
- (BOOL)isDiagonalUpBorderOverridden;	// 0x31e3b44d
- (BOOL)isEditDateOverridden;	// 0x31e3d31d
- (BOOL)isEditedOverridden;	// 0x31e3c955
- (BOOL)isFirstInSetOfVerticallyMergedCellsOverridden;	// 0x31e3c4a9
- (BOOL)isFormattingChangeDateOverridden;	// 0x31e3d4e5
- (BOOL)isFormattingChangedOverridden;	// 0x31e3cadd
- (BOOL)isIndexToAuthorIDOfDeletionOverridden;	// 0x31e3cc6d
- (BOOL)isIndexToAuthorIDOfEditOverridden;	// 0x31e3cdfd
- (BOOL)isIndexToAuthorIDOfFormattingChangeOverridden;	// 0x31e3cf8d
- (BOOL)isInsideHorizontalBorderOverridden;	// 0x31e3b745
- (BOOL)isInsideVerticalBorderOverridden;	// 0x31e3b879
- (BOOL)isLeftBorderOverridden;	// 0x31c86451
- (BOOL)isLeftMarginOverridden;	// 0x31c86891
- (BOOL)isLeftMarginTypeOverridden;	// 0x31e3bf79
- (BOOL)isNoWrapOverridden;	// 0x31e3c645
- (BOOL)isRightBorderOverridden;	// 0x31c866b9
- (BOOL)isRightMarginOverridden;	// 0x31c86935
- (BOOL)isRightMarginTypeOverridden;	// 0x31e3c101
- (BOOL)isShadingOverridden;	// 0x31c869d9
- (BOOL)isTextDirectionOverridden;	// 0x31e3c239
- (BOOL)isTopBorderOverridden;	// 0x31c862fd
- (BOOL)isTopMarginOverridden;	// 0x31e3b9ad
- (BOOL)isTopMarginTypeOverridden;	// 0x31e3bb35
- (BOOL)isVerticalAlignmentOverridden;	// 0x31c867ed
- (BOOL)isVerticallyMergedCellOverridden;	// 0x31e3c371
- (BOOL)isWidthTypeOverridden;	// 0x31c84b51
- (id)leftBorder;	// 0x31c864f5
// converted property getter: - (short)leftMargin;	// 0x31d4463d
// converted property getter: - (int)leftMarginType;	// 0x31e3be95
- (id)mutableBottomBorder;	// 0x31c73bd1
- (id)mutableDiagonalDownBorder;	// 0x31e3b581
- (id)mutableDiagonalUpBorder;	// 0x31e3b3bd
- (id)mutableInsideHorizontalBorder;	// 0x31d17139
- (id)mutableInsideVerticalBorder;	// 0x31d171c9
- (id)mutableLeftBorder;	// 0x31c73b41
- (id)mutableRightBorder;	// 0x31c73c61
- (id)mutableShading;	// 0x31cd2895
- (id)mutableTopBorder;	// 0x31c73ab1
// converted property getter: - (BOOL)noWrap;	// 0x31e3c54d
- (void)originalToTracked;	// 0x31e3b281
// converted property getter: - (short)position;	// 0x31e3b229
// converted property getter: - (int)resolveMode;	// 0x31e3b239
- (id)rightBorder;	// 0x31c8675d
// converted property getter: - (short)rightMargin;	// 0x31d446cd
// converted property getter: - (int)rightMarginType;	// 0x31e3c01d
// converted property setter: - (void)setBottomMargin:(short)margin;	// 0x31d4453d
// converted property setter: - (void)setBottomMarginType:(int)type;	// 0x31e3bd9d
// converted property setter: - (void)setDeleted:(int)deleted;	// 0x31e3c779
// converted property setter: - (void)setDeletionDate:(id)date;	// 0x31e3d0c1
// converted property setter: - (void)setEditDate:(id)date;	// 0x31e3d289
// converted property setter: - (void)setEdited:(int)edited;	// 0x31e3c901
// converted property setter: - (void)setFirstInSetOfVerticallyMergedCells:(BOOL)verticallyMergedCells;	// 0x31cd1c0d
// converted property setter: - (void)setFormattingChangeDate:(id)date;	// 0x31e3d451
// converted property setter: - (void)setFormattingChanged:(int)changed;	// 0x31e3ca89
// converted property setter: - (void)setIndexToAuthorIDOfDeletion:(unsigned short)deletion;	// 0x31e3cc15
// converted property setter: - (void)setIndexToAuthorIDOfEdit:(unsigned short)edit;	// 0x31e3cda5
// converted property setter: - (void)setIndexToAuthorIDOfFormattingChange:(unsigned short)formattingChange;	// 0x31e3cf35
// converted property setter: - (void)setLeftMargin:(short)margin;	// 0x31d44591
// converted property setter: - (void)setLeftMarginType:(int)type;	// 0x31e3bf25
// converted property setter: - (void)setNoWrap:(BOOL)wrap;	// 0x31e3c5e1
// converted property setter: - (void)setPosition:(short)position;	// 0x31cd1ae9
// converted property setter: - (void)setResolveMode:(int)mode;	// 0x31cd1671
// converted property setter: - (void)setRightMargin:(short)margin;	// 0x31d445e5
// converted property setter: - (void)setRightMarginType:(int)type;	// 0x31e3c0ad
// converted property setter: - (void)setTextDirection:(int)direction;	// 0x31cd1b4d
// converted property setter: - (void)setTopMargin:(short)margin;	// 0x31d444e9
// converted property setter: - (void)setTopMarginType:(int)type;	// 0x31e3bae1
// converted property setter: - (void)setVerticalAlignment:(int)alignment;	// 0x31cd1af9
// converted property setter: - (void)setVerticallyMergedCell:(BOOL)cell;	// 0x31cd1ba5
// converted property setter: - (void)setWidth:(short)width;	// 0x31c739ed
// converted property setter: - (void)setWidthType:(int)type;	// 0x31c739fd
- (id)shading;	// 0x31cd321d
// converted property getter: - (int)textDirection;	// 0x31e3c1a5
- (id)topBorder;	// 0x31c863a1
// converted property getter: - (short)topMargin;	// 0x31e3b91d
// converted property getter: - (int)topMarginType;	// 0x31e3ba51
// converted property getter: - (int)verticalAlignment;	// 0x31cd2f91
// converted property getter: - (BOOL)verticallyMergedCell;	// 0x31e3c2dd
// converted property getter: - (short)width;	// 0x31c84c85
// converted property getter: - (int)widthType;	// 0x31c84bf5
@end
