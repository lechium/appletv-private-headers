/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODDLayoutObject.h"

@class NSMutableArray, ODDOtherwise;

__attribute__((visibility("hidden")))
@interface ODDChoose : ODDLayoutObject {
@private
	NSMutableArray *mWhens;	// 4 = 0x4
	ODDOtherwise *mOtherwise;	// 8 = 0x8
}
@property(retain) id otherwise;	// G=0x31abf6ed; S=0x31abf7b1; converted property
- (id)init;	// 0x31abf865
- (void)addWhen:(id)when;	// 0x31abf7e9
- (void)dealloc;	// 0x31abf809
// converted property getter: - (id)otherwise;	// 0x31abf6ed
// converted property setter: - (void)setOtherwise:(id)otherwise;	// 0x31abf7b1
- (id)whens;	// 0x31abf6dd
@end

