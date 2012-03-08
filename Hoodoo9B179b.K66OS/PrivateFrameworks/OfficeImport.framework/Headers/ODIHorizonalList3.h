/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library

@class ODIState;

__attribute__((visibility("hidden")))
@interface ODIHorizonalList3 : NSObject {
@private
	unsigned mMaxPointCount;	// 4 = 0x4
	ODIState *mState;	// 8 = 0x8
}
+ (BOOL)mapIdentifier:(id)identifier state:(id)state;	// 0x329ea815
- (id)initWithState:(id)state;	// 0x329eaea1
- (void)map;	// 0x329eaef9
- (void)mapBaseStyleFromPoint:(id)point shape:(id)shape;	// 0x329eae55
- (void)mapOnePillarStyleFromPoint:(id)point shape:(id)shape;	// 0x329eae09
- (void)mapPillarPoints:(id)points bounds:(CGRect)bounds;	// 0x329eac11
- (void)mapRoofStyleFromPoint:(id)point shape:(id)shape;	// 0x329eadcd
- (void)setMaxPointCount:(unsigned)count;	// 0x329ea805
@end

