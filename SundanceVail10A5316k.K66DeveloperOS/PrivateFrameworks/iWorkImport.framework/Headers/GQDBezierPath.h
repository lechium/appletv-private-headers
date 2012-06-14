/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
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
+ (CFStringRef)createCFStringFromPath:(CGPathRef)path;	// 0x36c414b9
+ (CGPathRef)createPathFromCString:(const char *)cstring;	// 0x36c41629
+ (const StateSpec *)stateForReading;	// 0x36c41099
- (id)initWithPathString:(const char *)pathString;	// 0x36c410a5
- (CGPathRef)createBezierPath;	// 0x36c4145d
- (void)dealloc;	// 0x36c41121
- (BOOL)hasHorizontalFlip;	// 0x36c41489
- (BOOL)hasVerticalFlip;	// 0x36c41479
- (BOOL)horizontalFlip;	// 0x36c414a9
- (BOOL)isRectangular;	// 0x36c41189
- (CGPathRef)path;	// 0x36c413ed
- (char *)pathStr;	// 0x36c4144d
- (int)readAttributesFromReader:(xmlTextReader *)reader processor:(id)processor;	// 0x36c415b5
- (BOOL)verticalFlip;	// 0x36c41499
@end

