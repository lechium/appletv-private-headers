/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class CHDDataValuesCollection, CHDFormula, EDResources;

__attribute__((visibility("hidden")))
@interface CHDData : NSObject {
@private
	CHDDataValuesCollection *mDataValues;	// 4 = 0x4
	CHDFormula *mFormula;	// 8 = 0x8
	unsigned mContentFormatId;	// 12 = 0xc
	unsigned mDataValueIndexCount;	// 16 = 0x10
	EDResources *mResources;	// 20 = 0x14
}
@property(retain) id contentFormat;	// G=0x32990bcd; S=0x32a012bd; converted property
@property(assign) unsigned contentFormatId;	// G=0x32a81f51; S=0x3298b0fd; converted property
@property(assign) unsigned dataValueIndexCount;	// G=0x3298eb75; S=0x3298aedd; converted property
+ (id)dataWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x3298ab39
+ (id)dataWithResources:(id)resources;	// 0x3298a8cd
- (id)initWithDataPointCount:(unsigned)dataPointCount resources:(id)resources;	// 0x3298ab89
- (id)initWithResources:(id)resources;	// 0x3298a919
- (unsigned)averageDataPointDecimalCount;	// 0x32a82081
// converted property getter: - (id)contentFormat;	// 0x32990bcd
// converted property getter: - (unsigned)contentFormatId;	// 0x32a81f51
- (unsigned)countOfCellsBeingReferenced;	// 0x3298f8ed
// converted property getter: - (unsigned)dataValueIndexCount;	// 0x3298eb75
- (id)dataValues;	// 0x3298ab0d
- (void)dealloc;	// 0x3298e019
- (id)firstValueContentFormatWithWorkbook:(id)workbook;	// 0x32a81f61
- (id)formula;	// 0x3298aa5d
- (bool)isEmpty;	// 0x3298b36d
// converted property setter: - (void)setContentFormat:(id)format;	// 0x32a012bd
// converted property setter: - (void)setContentFormatId:(unsigned)anId;	// 0x3298b0fd
// converted property setter: - (void)setDataValueIndexCount:(unsigned)count;	// 0x3298aedd
- (void)setFormula:(id)formula chart:(id)chart;	// 0x3298aca5
@end

