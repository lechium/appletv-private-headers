/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class EDResources, CHDDataValuesCollection, CHDFormula;

__attribute__((visibility("hidden")))
@interface CHDData : NSObject {
@private
	CHDDataValuesCollection *mDataValues;	// 4 = 0x4
	CHDFormula *mFormula;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mDataValueIndexCount;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
}
@property(retain) id contentFormat;	// G=0x344ef861; S=0x34549721; converted property
@property(assign) unsigned contentFormatId;	// G=0x345c2de5; S=0x344ec22d; converted property
@property(assign) unsigned dataValueIndexCount;	// G=0x344fe631; S=0x344ebfe5; converted property
+ (id)dataWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x344ebc75
+ (id)dataWithResources:(id)resources;	// 0x344eba49
- (id)initWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x344ebcbd
- (id)initWithResources:(id)resources;	// 0x344eba8d
- (unsigned)averageDataPointDecimalCount;	// 0x345c2ef5
// converted property getter: - (id)contentFormat;	// 0x344ef861
// converted property getter: - (unsigned)contentFormatId;	// 0x345c2de5
- (unsigned)countOfCellsBeingReferenced;	// 0x344fe871
// converted property getter: - (unsigned)dataValueIndexCount;	// 0x344fe631
- (id)dataValues;	// 0x344ebc49
- (void)dealloc;	// 0x344ee101
- (id)firstValueContentFormatWithWorkbook:(id)workbook;	// 0x345c2df5
- (id)formula;	// 0x344ebbb1
- (bool)isEmpty;	// 0x344ecc9d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x34549721
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x344ec22d
// converted property setter: - (void)setDataValueIndexCount:(unsigned)count;	// 0x344ebfe5
- (void)setFormula:(id)formula chart:(id)chart;	// 0x344ebdbd
@end

