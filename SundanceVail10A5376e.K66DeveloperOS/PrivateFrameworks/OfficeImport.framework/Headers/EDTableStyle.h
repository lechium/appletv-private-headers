/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "NSCopying.h"
#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class EDKeyedCollection, NSString;

@interface EDTableStyle : NSObject <NSCopying> {
	NSString *mName;	// 4 = 0x4
	EDKeyedCollection *mTableStyleElements;	// 8 = 0x8
}
@property(retain) id name;	// G=0x370b2411; S=0x37095609; converted property
+ (id)tableStyle;	// 0x3709555d
- (id)init;	// 0x370955a5
- (id)copyWithZone:(NSZone *)zone;	// 0x370bd87d
- (void)dealloc;	// 0x3709e43d
// converted property getter: - (id)name;	// 0x370b2411
// converted property setter: - (void)setName:(id)name;	// 0x37095609
- (id)tableStyleElements;	// 0x3709564d
@end

