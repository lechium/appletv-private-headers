/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class NSValue, NSString;

__attribute__((visibility("hidden")))
@interface PDBuildMapKey : NSObject {
@private
	NSValue *mDrawableValue;	// 4 = 0x4
	NSString *mGroupId;	// 8 = 0x8
}
@property(retain) id drawable;	// G=0x32a35ba9; S=0x32a35b51; converted property
@property(retain) id groupId;	// G=0x32a34679; S=0x32a35b11; converted property
- (id)init;	// 0x32a359ad
- (id)initWithDrawable:(id)drawable groupId:(id)anId;	// 0x32a35c29
- (id)copyWithZone:(NSZone *)zone;	// 0x32a359d9
- (void)dealloc;	// 0x32a35bc9
// converted property getter: - (id)drawable;	// 0x32a35ba9
// converted property getter: - (id)groupId;	// 0x32a34679
- (unsigned)hash;	// 0x32a35ac9
- (BOOL)isEqual:(id)equal;	// 0x32a359e9
// converted property setter: - (void)setDrawable:(id)drawable;	// 0x32a35b51
// converted property setter: - (void)setGroupId:(id)anId;	// 0x32a35b11
@end

