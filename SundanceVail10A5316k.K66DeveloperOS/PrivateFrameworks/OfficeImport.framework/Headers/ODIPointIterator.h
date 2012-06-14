/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import "OfficeImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface ODIPointIterator : NSObject {
}
+ (BOOL)addPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x312f2cf1
+ (BOOL)isDoneForState:(ODIPointIteratorState *)state;	// 0x312f2e05
+ (BOOL)isPoint:(id)point ofType:(int)type;	// 0x312f2d75
+ (id)pointsForSpecification:(id)specification startingPoint:(id)point isLast:(BOOL)last;	// 0x312f2add
+ (id)processAttributes:(id)attributes startingPoint:(id)point isLast:(BOOL)last;	// 0x312f2b71
+ (void)processChildAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x312f2e41
+ (void)processFollowingSiblingAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x312f2ee5
+ (void)processSelfAxisFromPoint:(id)point state:(ODIPointIteratorState *)state;	// 0x312f2e31
@end

