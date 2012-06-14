/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "ODIHorizonalList3.h"
#import "OfficeImport-Structs.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface ODITitlePoint : ODIHorizonalList3 {
@private
	NSString *mTitlePointPresentationName;	// 12 = 0xc
}
- (id)initWithTitlePointPresentationName:(id)titlePointPresentationName state:(id)state;	// 0x312efd09
- (void)dealloc;	// 0x312efd61
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x312efea9
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x312efe19
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x312efdad
@end

