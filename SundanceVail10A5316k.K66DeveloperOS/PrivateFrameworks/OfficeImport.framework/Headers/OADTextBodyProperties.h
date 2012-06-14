/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OADProperties.h"

@class OADTextBodyAutoFit, OADTextWarp;

__attribute__((visibility("hidden")))
@interface OADTextBodyProperties : OADProperties {
@private
	OADTextBodyAutoFit *mAutoFit;	// 12 = 0xc
	OADTextWarp *mTextWarp;	// 16 = 0x10
	double mTopInset;	// 20 = 0x14
	double mLeftInset;	// 28 = 0x1c
	double mBottomInset;	// 36 = 0x24
	double mRightInset;	// 44 = 0x2c
	double mRotation;	// 52 = 0x34
	double mColumnSpacing;	// 60 = 0x3c
	unsigned short mColumnCount;	// 68 = 0x44
	unsigned short mTextBodyId;	// 70 = 0x46
	unsigned char mTextAnchorType;	// 72 = 0x48
	unsigned char mFlowType;	// 73 = 0x49
	unsigned char mWrapType;	// 74 = 0x4a
	unsigned char mVerticalOverflowType;	// 75 = 0x4b
	unsigned char mHorizontalOverflowType;	// 76 = 0x4c
	unsigned mRepectFirstLastParagraphSpacing : 1;	// 77 = 0x4d
	unsigned mIsUpright : 1;	// 77 = 0x4d
	unsigned mIsAnchorCenter : 1;	// 77 = 0x4d
	unsigned mIsLeftToRightColumns : 1;	// 77 = 0x4d
	unsigned mHasVerticalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasHorizontalOverflowType : 1;	// 77 = 0x4d
	unsigned mHasTextBodyId : 1;	// 77 = 0x4d
	unsigned mHasFlowType : 1;	// 77 = 0x4d
	unsigned mHasWrapType : 1;	// 78 = 0x4e
	unsigned mHasTextAnchorType : 1;	// 78 = 0x4e
	unsigned mHasIsAnchorCenter : 1;	// 78 = 0x4e
	unsigned mHasIsUpright : 1;	// 78 = 0x4e
	unsigned mHasRotation : 1;	// 78 = 0x4e
	unsigned mHasColumnCount : 1;	// 78 = 0x4e
	unsigned mHasColumnSpacing : 1;	// 78 = 0x4e
	unsigned mHasIsLeftToRightColumns : 1;	// 78 = 0x4e
	unsigned mHasRepectFirstLastParagraphSpacing : 1;	// 79 = 0x4f
	unsigned mHasTopInset : 1;	// 79 = 0x4f
	unsigned mHasLeftInset : 1;	// 79 = 0x4f
	unsigned mHasRightInset : 1;	// 79 = 0x4f
	unsigned mHasBottomInset : 1;	// 79 = 0x4f
}
@property(retain) id autoFit;	// G=0x31070ea5; S=0x3101d5cd; converted property
@property(assign) double bottomInset;	// G=0x31070ced; S=0x3101d4a5; converted property
@property(assign) int columnCount;	// G=0x31070d5d; S=0x3101d4fd; converted property
@property(assign) double columnSpacing;	// G=0x31070dc9; S=0x3101d521; converted property
@property(assign) int flowType;	// G=0x31070f95; S=0x3101d60d; converted property
@property(assign) int horizontalOverflowType;	// G=0x312570f9; S=0x3101d679; converted property
@property(assign) BOOL isAnchorCenter;	// G=0x31071125; S=0x3101d6e1; converted property
@property(assign) BOOL isLeftToRightColumns;	// G=0x31070e3d; S=0x3101d551; converted property
@property(assign) BOOL isUpright;	// G=0x310711f9; S=0x3101d745; converted property
@property(assign) double leftInset;	// G=0x31070c01; S=0x3101d479; converted property
@property(assign) BOOL respectLastFirstLineSpacing;	// G=0x3125708d; S=0x3101d419; converted property
@property(assign) double rightInset;	// G=0x31070c79; S=0x3101d4d1; converted property
@property(assign) double rotation;	// G=0x31071265; S=0x3101d77d; converted property
@property(assign) int textAnchorType;	// G=0x31071191; S=0x3101d719; converted property
@property(assign) int textBodyId;	// G=0x31257129; S=0x31257139; converted property
@property(retain) id textWarp;	// G=0x311ad841; S=0x3101d6a1; converted property
@property(assign) double topInset;	// G=0x31070b8d; S=0x3101d44d; converted property
@property(assign) int verticalOverflowType;	// G=0x3107106d; S=0x3101d655; converted property
@property(assign) int wrapType;	// G=0x31071001; S=0x3101d631; converted property
+ (id)defaultEscherWordArtProperties;	// 0x310cb4a9
+ (id)defaultProperties;	// 0x3101d1a5
- (id)init;	// 0x3101d175
- (id)initWithDefaults;	// 0x3101d1f1
// converted property getter: - (id)autoFit;	// 0x31070ea5
// converted property getter: - (double)bottomInset;	// 0x31070ced
// converted property getter: - (int)columnCount;	// 0x31070d5d
// converted property getter: - (double)columnSpacing;	// 0x31070dc9
- (void)dealloc;	// 0x3106db09
// converted property getter: - (int)flowType;	// 0x31070f95
- (BOOL)hasAutoFit;	// 0x31070e71
- (BOOL)hasBottomInset;	// 0x31070cb5
- (BOOL)hasColumnCount;	// 0x31070d25
- (BOOL)hasColumnSpacing;	// 0x31070d91
- (BOOL)hasFlowType;	// 0x31070f5d
- (BOOL)hasHorizontalOverflowType;	// 0x312570c1
- (BOOL)hasIsAnchorCenter;	// 0x310710ed
- (BOOL)hasIsLeftToRightColumns;	// 0x31070e05
- (BOOL)hasIsUpright;	// 0x310711c1
- (BOOL)hasLeftInset;	// 0x31070bc5
- (BOOL)hasRespectLastFirstLineSpacing;	// 0x31070b1d
- (BOOL)hasRightInset;	// 0x31070c3d
- (BOOL)hasRotation;	// 0x3107122d
- (BOOL)hasTextAnchorType;	// 0x31071159
- (BOOL)hasTextBodyId;	// 0x3107109d
- (BOOL)hasTextWarp;	// 0x310710b5
- (BOOL)hasTopInset;	// 0x31070b55
- (BOOL)hasVerticalOverflowType;	// 0x31071035
- (BOOL)hasWrapType;	// 0x31070fc9
- (unsigned)hash;	// 0x31257161
// converted property getter: - (int)horizontalOverflowType;	// 0x312570f9
// converted property getter: - (BOOL)isAnchorCenter;	// 0x31071125
- (BOOL)isEqual:(id)equal;	// 0x31257349
// converted property getter: - (BOOL)isLeftToRightColumns;	// 0x31070e3d
// converted property getter: - (BOOL)isUpright;	// 0x310711f9
// converted property getter: - (double)leftInset;	// 0x31070c01
- (void)removeUnnecessaryOverrides;	// 0x31070241
// converted property getter: - (BOOL)respectLastFirstLineSpacing;	// 0x3125708d
// converted property getter: - (double)rightInset;	// 0x31070c79
// converted property getter: - (double)rotation;	// 0x31071265
// converted property setter: - (void)setAutoFit:(id)fit;	// 0x3101d5cd
// converted property setter: - (void)setBottomInset:(double)inset;	// 0x3101d4a5
// converted property setter: - (void)setColumnCount:(int)count;	// 0x3101d4fd
// converted property setter: - (void)setColumnSpacing:(double)spacing;	// 0x3101d521
// converted property setter: - (void)setFlowType:(int)type;	// 0x3101d60d
// converted property setter: - (void)setHorizontalOverflowType:(int)type;	// 0x3101d679
// converted property setter: - (void)setIsAnchorCenter:(BOOL)center;	// 0x3101d6e1
// converted property setter: - (void)setIsLeftToRightColumns:(BOOL)rightColumns;	// 0x3101d551
// converted property setter: - (void)setIsUpright:(BOOL)upright;	// 0x3101d745
// converted property setter: - (void)setLeftInset:(double)inset;	// 0x3101d479
// converted property setter: - (void)setRespectLastFirstLineSpacing:(BOOL)spacing;	// 0x3101d419
// converted property setter: - (void)setRightInset:(double)inset;	// 0x3101d4d1
// converted property setter: - (void)setRotation:(double)rotation;	// 0x3101d77d
// converted property setter: - (void)setTextAnchorType:(int)type;	// 0x3101d719
// converted property setter: - (void)setTextBodyId:(int)anId;	// 0x31257139
// converted property setter: - (void)setTextWarp:(id)warp;	// 0x3101d6a1
// converted property setter: - (void)setTopInset:(double)inset;	// 0x3101d44d
// converted property setter: - (void)setVerticalOverflowType:(int)type;	// 0x3101d655
// converted property setter: - (void)setWrapType:(int)type;	// 0x3101d631
// converted property getter: - (int)textAnchorType;	// 0x31071191
// converted property getter: - (int)textBodyId;	// 0x31257129
// converted property getter: - (id)textWarp;	// 0x311ad841
// converted property getter: - (double)topInset;	// 0x31070b8d
// converted property getter: - (int)verticalOverflowType;	// 0x3107106d
// converted property getter: - (int)wrapType;	// 0x31071001
@end

