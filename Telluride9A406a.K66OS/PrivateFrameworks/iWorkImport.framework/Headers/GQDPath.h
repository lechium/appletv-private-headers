/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDPath : NSObject {
@private
	char *mPathString;	// 4 = 0x4
}
+ (char *)createPathString:(CGPathRef)string;	// 0x33c4de99
+ (CFStringRef)createString:(CGPathRef)string;	// 0x33c4de65
- (CGPathRef)createBezierPath;	// 0x33c4dd69
- (void)dealloc;	// 0x33c4de21
- (BOOL)hasHorizontalFlip;	// 0x33c4dd71
- (BOOL)hasVerticalFlip;	// 0x33c4dd6d
- (BOOL)horizontalFlip;	// 0x33c4dd79
- (BOOL)isRect;	// 0x33c4df65
- (BOOL)isRectangular;	// 0x33c4dd65
- (char *)pathStr;	// 0x33c4defd
- (BOOL)verticalFlip;	// 0x33c4dd75
@end
