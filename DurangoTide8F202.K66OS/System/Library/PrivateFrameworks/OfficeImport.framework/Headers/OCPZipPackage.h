/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OCPPackage.h"

@class SFUZipArchive, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OCPZipPackage : OCPPackage {
@private
	SFUZipArchive *mArchive;	// 20 = 0x14
	NSMutableDictionary *mParts;	// 24 = 0x18
}
- (id)initWithArchive:(id)archive;	// 0x31a2c1ed
- (id)initWithData:(id)data;	// 0x31a7cab1
- (id)initWithPath:(id)path;	// 0x31a2a095
- (void)dealloc;	// 0x31a45a31
- (id)partForLocation:(id)location;	// 0x31a2eea1
- (void)resetPartForLocation:(id)location;	// 0x31a4b1b5
@end

