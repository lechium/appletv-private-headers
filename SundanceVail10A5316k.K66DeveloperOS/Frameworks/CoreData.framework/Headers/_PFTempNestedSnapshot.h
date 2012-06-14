/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/CoreData.framework/CoreData
 */

#import <NSObject.h> // Unknown library

@class NSKnownKeysDictionary;

__attribute__((visibility("hidden")))
@interface _PFTempNestedSnapshot : NSObject {
@private
	NSKnownKeysDictionary *_snapshot;	// 4 = 0x4
	unsigned long _version;	// 8 = 0x8
}
- (id)initWithOwnedKKsD:(id)ownedKKsD andVersion:(unsigned long)version;	// 0x32d85dad
- (id)_snapshot_;	// 0x32d85e1d
- (unsigned)_versionNumber;	// 0x32d85e21
- (void)dealloc;	// 0x32d85e31
- (const id *)knownKeyValuesPointer;	// 0x32d85dfd
- (id)valueForKey:(id)key;	// 0x32d85e7d
@end

