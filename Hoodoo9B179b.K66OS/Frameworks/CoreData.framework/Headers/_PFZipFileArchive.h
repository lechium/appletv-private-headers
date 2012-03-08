/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library
#import "CoreData-Structs.h"

@class NSMutableDictionary, NSDictionary, NSArray, NSData, NSString;

__attribute__((visibility("hidden")))
@interface _PFZipFileArchive : NSObject {
@private
	NSDictionary *_contents;	// 4 = 0x4
	NSData *_data;	// 8 = 0x8
	id _provider;	// 12 = 0xc
	int _desc;	// 16 = 0x10
	NSString *_path;	// 20 = 0x14
	NSArray *_names;	// 24 = 0x18
	NSDictionary *_properties;	// 28 = 0x1c
	NSMutableDictionary *_cachedContents;	// 32 = 0x20
	void *_reserved;	// 36 = 0x24
	zFlags _zFlags;	// 40 = 0x28
	void *_reserved2[5];	// 44 = 0x2c
}
- (id)initWithData:(id)data options:(unsigned)options error:(id *)error;	// 0x32c20b99
- (id)initWithEntryNames:(id)entryNames contents:(id)contents properties:(id)properties options:(unsigned)options;	// 0x32c22159
- (id)initWithEntryNames:(id)entryNames dataProvider:(id)provider options:(unsigned)options;	// 0x32c21ffd
- (id)initWithPath:(id)path options:(unsigned)options error:(id *)error;	// 0x32c222b1
- (id)archiveData;	// 0x32c21299
- (id)archiveStream;	// 0x32c2125d
- (id)contentsForEntryName:(id)entryName;	// 0x32c21b49
- (void)dealloc;	// 0x32c21fbd
- (id)entryNames;	// 0x32c20b35
- (void)finalize;	// 0x32c21f7d
- (void)invalidate;	// 0x32c210c9
- (BOOL)isValid;	// 0x32c20b45
- (id)propertiesForEntryName:(id)entryName;	// 0x32c2187d
- (id)streamForEntryName:(id)entryName;	// 0x32c21971
- (BOOL)writeContentsForEntryName:(id)entryName toFile:(id)file options:(unsigned)options error:(id *)error;	// 0x32c21931
- (BOOL)writeToFile:(id)file options:(unsigned)options error:(id *)error;	// 0x32c21219
@end

