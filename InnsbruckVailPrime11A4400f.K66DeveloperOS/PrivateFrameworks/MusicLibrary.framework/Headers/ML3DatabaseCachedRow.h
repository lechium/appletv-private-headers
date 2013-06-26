/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
 */

#import "ML3DatabaseRow.h"

@class NSArray;

@interface ML3DatabaseCachedRow : ML3DatabaseRow {
	NSArray *_arrayRepresentation;	// 8 = 0x8
}
@property(readonly, retain) NSArray *arrayRepresentation;	// G=0x315ad63d; converted property
- (id)initWithArray:(id)array;	// 0x315ad1f9
- (id)initWithParentResult:(id)parentResult;	// 0x315ad259
- (void).cxx_destruct;	// 0x315ad8f5
- (id)_numberOrZeroForColumnIndex:(unsigned)columnIndex;	// 0x315ad669
// converted property getter: - (id)arrayRepresentation;	// 0x315ad63d
- (unsigned)columnCount;	// 0x315ad299
- (id)dataForColumnIndex:(unsigned)columnIndex;	// 0x315ad2b9
- (id)dataForColumnName:(id)columnName;	// 0x315ad6f9
- (id)dictionaryRepresentation;	// 0x315ad545
- (double)doubleForColumnIndex:(unsigned)columnIndex;	// 0x315ad2c9
- (double)doubleForColumnName:(id)columnName;	// 0x315ad739
- (void)getBlobBytes:(const void **)bytes outLength:(int *)length forColumnIndex:(unsigned)columnIndex;	// 0x315ad3a5
- (void)getBlobBytes:(const void **)bytes outLength:(int *)length forColumnName:(id)columnName;	// 0x315ad87d
- (long long)int64ForColumnIndex:(unsigned)columnIndex;	// 0x315ad345
- (long long)int64ForColumnName:(id)columnName;	// 0x315ad7c5
- (int)intForColumnIndex:(unsigned)columnIndex;	// 0x315ad309
- (int)intForColumnName:(id)columnName;	// 0x315ad789
- (id)numberForColumnIndex:(unsigned)columnIndex;	// 0x315ad395
- (id)numberForColumnName:(id)columnName;	// 0x315ad841
- (id)stringForColumnIndex:(unsigned)columnIndex;	// 0x315ad385
- (id)stringForColumnName:(id)columnName;	// 0x315ad805
- (id)valueForColumnIndex:(unsigned)columnIndex;	// 0x315ad4dd
- (id)valueForColumnName:(id)columnName;	// 0x315ad8b9
@end
