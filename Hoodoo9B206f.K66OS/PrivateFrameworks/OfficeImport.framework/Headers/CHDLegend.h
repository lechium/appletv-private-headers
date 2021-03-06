/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OADGraphicProperties, EDCollection, EDResources;

__attribute__((visibility("hidden")))
@interface CHDLegend : NSObject {
@private
	int mLegendPosition;	// 4 = 0x4
	OADGraphicProperties *mGraphicProperties;	// 8 = 0x8
	unsigned mFontIndex;	// 12 = 0xc
	EDCollection *mLegendEntries;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
	bool mIsVertical;	// 24 = 0x18
}
@property(retain) id font;	// G=0x34548ee5; S=0x34575315; converted property
@property(assign) unsigned fontIndex;	// G=0x345d9bed; S=0x34547da1; converted property
@property(retain) id graphicProperties;	// G=0x345d9bcd; S=0x34547e05; converted property
@property(assign) bool isSingleColumnLegend;	// G=0x345d9bdd; S=0x34547e85; converted property
@property(assign) int legendPosition;	// G=0x34548ed5; S=0x34547e75; converted property
- (id)initWithResources:(id)resources;	// 0x34547b89
- (void)dealloc;	// 0x34548f2d
// converted property getter: - (id)font;	// 0x34548ee5
// converted property getter: - (unsigned)fontIndex;	// 0x345d9bed
// converted property getter: - (id)graphicProperties;	// 0x345d9bcd
// converted property getter: - (bool)isSingleColumnLegend;	// 0x345d9bdd
- (id)legendEntries;	// 0x345481cd
// converted property getter: - (int)legendPosition;	// 0x34548ed5
// converted property setter: - (void)setFont:(id)font;	// 0x34575315
// converted property setter: - (void)setFontIndex:(unsigned)index;	// 0x34547da1
// converted property setter: - (void)setGraphicProperties:(id)properties;	// 0x34547e05
// converted property setter: - (void)setIsSingleColumnLegend:(bool)legend;	// 0x34547e85
// converted property setter: - (void)setLegendPosition:(int)position;	// 0x34547e75
@end

