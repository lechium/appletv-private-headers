/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


@interface GQDPath : NSObject {
	char *mPathString;	// 4 = 0x4
}
+ (char *)createPathString:(CGPathRef)string;	// 0x35d3df21
+ (CFStringRef)createString:(CGPathRef)string;	// 0x35d3e0d1
- (CGPathRef)createBezierPath;	// 0x35d3df1d
- (void)dealloc;	// 0x35d3debd
- (BOOL)hasHorizontalFlip;	// 0x35d3e109
- (BOOL)hasVerticalFlip;	// 0x35d3e105
- (BOOL)horizontalFlip;	// 0x35d3e111
- (BOOL)isRect;	// 0x35d3df05
- (BOOL)isRectangular;	// 0x35d3df01
- (char *)pathStr;	// 0x35d3df81
- (BOOL)verticalFlip;	// 0x35d3e10d
@end

