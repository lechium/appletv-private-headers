/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"
#import "GQDPath.h"


__attribute__((visibility("hidden")))
@interface GQDBezierPath : GQDPath <GQDNameMappable> {
@private
	CGPathRef mPath;	// 8 = 0x8
	char *mPathStr;	// 12 = 0xc
	BOOL mHasVFlip;	// 16 = 0x10
	BOOL mVFlip;	// 17 = 0x11
	BOOL mHasHFlip;	// 18 = 0x12
	BOOL mHFlip;	// 19 = 0x13
}
+ (CFStringRef)createCFStringFromPath:(CGPathRef)path;	// 0x33bfbdd9
+ (CGPathRef)createPathFromCString:(const char *)cstring;	// 0x33bfc2e5
+ (const StateSpec *)stateForReading;	// 0x33bfbb05
- (id)initWithPathString:(const char *)pathString;	// 0x33bfbd59
- (CGPathRef)createBezierPath;	// 0x33bfbe01
- (void)dealloc;	// 0x33bfc04d
- (BOOL)hasHorizontalFlip;	// 0x33bfbb31
- (BOOL)hasVerticalFlip;	// 0x33bfbb21
- (BOOL)horizontalFlip;	// 0x33bfbb51
- (BOOL)isRectangular;	// 0x33bfbe7d
- (CGPathRef)path;	// 0x33bfbe1d
- (char *)pathStr;	// 0x33bfbb11
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x33bfc255
- (BOOL)verticalFlip;	// 0x33bfbb41
@end

