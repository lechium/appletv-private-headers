/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "CMMapper.h"
#import "OfficeImport-Structs.h"

@class NSMutableArray, NSString, CMArchiveManager;

__attribute__((visibility("hidden")))
@interface CSVMapper : CMMapper {
@private
	CMArchiveManager *mArchiver;	// 8 = 0x8
	NSMutableArray *mRows;	// 12 = 0xc
	NSString *mFileName;	// 16 = 0x10
	unsigned mColumnCount;	// 20 = 0x14
	CGSize mPageSize;	// 24 = 0x18
}
- (id)initWithRows:(id)rows fileName:(id)name columnCount:(unsigned)count archiver:(id)archiver;	// 0x32b16ac9
- (void)dealloc;	// 0x32b16e89
- (void)mapAt:(id)at withState:(id)state;	// 0x32b16b89
- (CGSize)pageSize;	// 0x32b16ab1
@end

