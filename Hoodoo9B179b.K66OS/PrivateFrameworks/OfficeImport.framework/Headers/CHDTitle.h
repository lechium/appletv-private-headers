/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, CHDChart, CHDFormula, EDString;

__attribute__((visibility("hidden")))
@interface CHDTitle : NSObject {
@private
	CHDChart *mChart;	// 4 = 0x4
	bool mIsAutoGenerated;	// 8 = 0x8
	bool mPositionAutoGenerated;	// 9 = 0x9
	bool mSizeAutoGenerated;	// 10 = 0xa
	CHDFormula *mName;	// 12 = 0xc
	EDString *mLastCachedName;	// 16 = 0x10
	OADGraphicProperties *mGraphicProperties;	// 20 = 0x14
	double mRotation;	// 24 = 0x18
}
@property(retain) id graphicProperties;	// G=0x328ab93d; S=0x3289fb65; converted property
@property(assign) bool isAutoGenerated;	// G=0x32935bc5; S=0x3289fa4d; converted property
@property(assign) bool isPositionAutoGenerated;	// G=0x3299a389; S=0x3289fbad; converted property
@property(assign) bool isSizeAutoGenerated;	// G=0x3299a399; S=0x32935bb5; converted property
@property(retain) id lastCachedName;	// G=0x328ab92d; S=0x3289fb1d; converted property
@property(retain) id name;	// G=0x3299a379; S=0x3289f9ad; converted property
@property(assign) double titleRotationAngle;	// G=0x3299a3a9; S=0x3289fbbd; converted property
- (id)initWithChart:(id)chart;	// 0x3289f8f1
- (void)dealloc;	// 0x328aec55
// converted property getter: - (id)graphicProperties;	// 0x328ab93d
// converted property getter: - (bool)isAutoGenerated;	// 0x32935bc5
- (bool)isCachedTitleEmpty;	// 0x328a4499
// converted property getter: - (bool)isPositionAutoGenerated;	// 0x3299a389
// converted property getter: - (bool)isSizeAutoGenerated;	// 0x3299a399
- (bool)isTitleVisible;	// 0x3299a3c1
// converted property getter: - (id)lastCachedName;	// 0x328ab92d
// converted property getter: - (id)name;	// 0x3299a379
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x3289fb65
// converted property setter: - (void)setIsAutoGenerated:(bool)generated;	// 0x3289fa4d
// converted property setter: - (void)setIsPositionAutoGenerated:(bool)generated;	// 0x3289fbad
// converted property setter: - (void)setIsSizeAutoGenerated:(bool)generated;	// 0x32935bb5
// converted property setter: - (void)setLastCachedName:(id)name;	// 0x3289fb1d
// converted property setter: - (void)setName:(id)name;	// 0x3289f9ad
// converted property setter: - (void)setTitleRotationAngle:(double)angle;	// 0x3289fbbd
// converted property getter: - (double)titleRotationAngle;	// 0x3299a3a9
@end

