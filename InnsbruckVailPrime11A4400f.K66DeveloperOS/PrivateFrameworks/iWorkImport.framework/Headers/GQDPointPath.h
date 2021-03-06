/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDPath.h"


@interface GQDPointPath : GQDPath {
	int mType;	// 8 = 0x8
	CGPoint mPoint;	// 12 = 0xc
	CGSize mSize;	// 20 = 0x14
}
- (id).cxx_construct;	// 0x33cf2c09
- (CGPathRef)createBezierPath;	// 0x33cf2729
- (int)mapStrType:(CFStringRef)type;	// 0x33cf2c69
- (CGPoint)point;	// 0x33cf26f5
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x33cf2c0d
- (CGSize)size;	// 0x33cf270d
- (int)type;	// 0x33cf26e5
@end

