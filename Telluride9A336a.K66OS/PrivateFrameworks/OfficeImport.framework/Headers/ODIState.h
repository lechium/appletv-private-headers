/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class OADDrawingTheme, OADOrientedBounds, NSMutableArray, OADGroup, ODDDiagram, OADShapeStyle;

__attribute__((visibility("hidden")))
@interface ODIState : NSObject {
@private
	ODDDiagram *mDiagram;	// 4 = 0x4
	OADOrientedBounds *mDiagramOrientedBounds;	// 8 = 0x8
	CGRect mLogicalBounds;	// 12 = 0xc
	float mScale;	// 28 = 0x1c
	OADGroup *mGroup;	// 32 = 0x20
	NSMutableArray *mPresentationNames;	// 36 = 0x24
	NSMutableArray *mDefaultStyleLabelNames;	// 40 = 0x28
	int mPointCount;	// 44 = 0x2c
	int mPointIndex;	// 48 = 0x30
	OADShapeStyle *mTextStyle;	// 52 = 0x34
	OADDrawingTheme *mDrawingTheme;	// 56 = 0x38
}
@property(retain) id group;	// G=0x34e388d9; S=0x34e38d41; converted property
@property(assign) CGRect logicalBounds;	// G=0x34e388a5; S=0x34e38d81; converted property
@property(assign) int pointCount;	// G=0x34e388e9; S=0x34e388f9; converted property
@property(assign) int pointIndex;	// G=0x34e38909; S=0x34e38919; converted property
@property(retain) id textStyle;	// G=0x34e38929; S=0x34e38bdd; converted property
- (id)initWithDiagram:(id)diagram group:(id)group drawingTheme:(id)theme;	// 0x34e38949
- (void)dealloc;	// 0x34e38fd9
- (id)defaultStyleLabelNameForPointType:(int)pointType;	// 0x34e38c4d
- (id)diagram;	// 0x34e38885
- (id)diagramOrientedBounds;	// 0x34e38895
- (id)drawingTheme;	// 0x34e38939
// converted property getter: - (id)group;	// 0x34e388d9
// converted property getter: - (CGRect)logicalBounds;	// 0x34e388a5
// converted property getter: - (int)pointCount;	// 0x34e388e9
// converted property getter: - (int)pointIndex;	// 0x34e38909
- (id)presentationNameForPointType:(int)pointType;	// 0x34e38cf1
- (float)scale;	// 0x34e388c9
- (void)setDefaultStyleLabelName:(id)name forPointType:(int)pointType;	// 0x34e38c1d
// converted property setter: - (void)setGroup:(id)group;	// 0x34e38d41
// converted property setter: - (void)setLogicalBounds:(CGRect)bounds;	// 0x34e38d81
- (void)setLogicalBounds:(CGRect)bounds maintainAspectRatio:(BOOL)ratio;	// 0x34e38dad
// converted property setter: - (void)setPointCount:(int)count;	// 0x34e388f9
// converted property setter: - (void)setPointIndex:(int)index;	// 0x34e38919
- (void)setPresentationName:(id)name forPointType:(int)pointType;	// 0x34e38c9d
// converted property setter: - (void)setTextStyle:(id)style;	// 0x34e38bdd
// converted property getter: - (id)textStyle;	// 0x34e38929
@end
