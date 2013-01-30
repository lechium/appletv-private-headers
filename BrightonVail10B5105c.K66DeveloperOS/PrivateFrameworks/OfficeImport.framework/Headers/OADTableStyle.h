/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSString, OADTablePartStyle, OADTableBackground;

@interface OADTableStyle : NSObject {
	NSString *mName;	// 4 = 0x4
	NSString *mId;	// 8 = 0x8
	OADTableBackground *mBackground;	// 12 = 0xc
	OADTablePartStyle *mWholeTableStyle;	// 16 = 0x10
	OADTablePartStyle *mBand1HorzStyle;	// 20 = 0x14
	OADTablePartStyle *mBand2HorzStyle;	// 24 = 0x18
	OADTablePartStyle *mBand1VertStyle;	// 28 = 0x1c
	OADTablePartStyle *mBand2VertStyle;	// 32 = 0x20
	OADTablePartStyle *mFirstRowStyle;	// 36 = 0x24
	OADTablePartStyle *mFirstColumnStyle;	// 40 = 0x28
	OADTablePartStyle *mLastRowStyle;	// 44 = 0x2c
	OADTablePartStyle *mLastColumnStyle;	// 48 = 0x30
	OADTablePartStyle *mNorthEastStyle;	// 52 = 0x34
	OADTablePartStyle *mNorthWestStyle;	// 56 = 0x38
	OADTablePartStyle *mSouthEastStyle;	// 60 = 0x3c
	OADTablePartStyle *mSouthWestStyle;	// 64 = 0x40
}
@property(retain) id background;	// G=0x37a374c1; S=0x37a553b1; converted property
@property(retain) id band1HorzStyle;	// G=0x37a38a19; S=0x379e08d9; converted property
@property(retain) id band1VertStyle;	// G=0x37af83c1; S=0x379e09a1; converted property
@property(retain) id band2HorzStyle;	// G=0x37af83b1; S=0x379e0961; converted property
@property(retain) id band2VertStyle;	// G=0x37af83d1; S=0x379e09e1; converted property
@property(retain) id firstColumnStyle;	// G=0x37af83e1; S=0x379e0ad5; converted property
@property(retain) id firstRowStyle;	// G=0x37a3799d; S=0x379e0b55; converted property
@property(retain) id id;	// G=0x37af82b5; S=0x379dfa35; converted property
@property(retain) id lastColumnStyle;	// G=0x37af8401; S=0x379e0a95; converted property
@property(retain) id lastRowStyle;	// G=0x37af83f1; S=0x379e0b15; converted property
@property(retain) id name;	// G=0x37af82a5; S=0x379dfa75; converted property
@property(retain) id northEastStyle;	// G=0x37af8411; S=0x37a5546d; converted property
@property(retain) id northWestStyle;	// G=0x37af8421; S=0x37a6aba5; converted property
@property(retain) id southEastStyle;	// G=0x37af8431; S=0x37a553ed; converted property
@property(retain) id southWestStyle;	// G=0x37af8441; S=0x37a5542d; converted property
@property(retain) id wholeTableStyle;	// G=0x37a38295; S=0x379e0899; converted property
// converted property getter: - (id)background;	// 0x37a374c1
// converted property getter: - (id)band1HorzStyle;	// 0x37a38a19
// converted property getter: - (id)band1VertStyle;	// 0x37af83c1
// converted property getter: - (id)band2HorzStyle;	// 0x37af83b1
// converted property getter: - (id)band2VertStyle;	// 0x37af83d1
- (void)dealloc;	// 0x379e7b79
// converted property getter: - (id)firstColumnStyle;	// 0x37af83e1
// converted property getter: - (id)firstRowStyle;	// 0x37a3799d
// converted property getter: - (id)id;	// 0x37af82b5
// converted property getter: - (id)lastColumnStyle;	// 0x37af8401
// converted property getter: - (id)lastRowStyle;	// 0x37af83f1
// converted property getter: - (id)name;	// 0x37af82a5
// converted property getter: - (id)northEastStyle;	// 0x37af8411
// converted property getter: - (id)northWestStyle;	// 0x37af8421
- (id)partStyle:(int)style;	// 0x37af82c5
// converted property setter: - (void)setBackground:(id)background;	// 0x37a553b1
// converted property setter: - (void)setBand1HorzStyle:(id)style;	// 0x379e08d9
// converted property setter: - (void)setBand1VertStyle:(id)style;	// 0x379e09a1
// converted property setter: - (void)setBand2HorzStyle:(id)style;	// 0x379e0961
// converted property setter: - (void)setBand2VertStyle:(id)style;	// 0x379e09e1
// converted property setter: - (void)setFirstColumnStyle:(id)style;	// 0x379e0ad5
// converted property setter: - (void)setFirstRowStyle:(id)style;	// 0x379e0b55
// converted property setter: - (void)setId:(id)anId;	// 0x379dfa35
// converted property setter: - (void)setLastColumnStyle:(id)style;	// 0x379e0a95
// converted property setter: - (void)setLastRowStyle:(id)style;	// 0x379e0b15
// converted property setter: - (void)setName:(id)name;	// 0x379dfa75
// converted property setter: - (void)setNorthEastStyle:(id)style;	// 0x37a5546d
// converted property setter: - (void)setNorthWestStyle:(id)style;	// 0x37a6aba5
// converted property setter: - (void)setSouthEastStyle:(id)style;	// 0x37a553ed
// converted property setter: - (void)setSouthWestStyle:(id)style;	// 0x37a5542d
// converted property setter: - (void)setWholeTableStyle:(id)style;	// 0x379e0899
// converted property getter: - (id)southEastStyle;	// 0x37af8431
// converted property getter: - (id)southWestStyle;	// 0x37af8441
// converted property getter: - (id)wholeTableStyle;	// 0x37a38295
@end
