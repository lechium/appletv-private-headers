/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQHChart : NSObject {
}
+ (CFStringRef)createChartImageUrlString:(id)string state:(id)state;	// 0x359b8049
+ (id)geometry:(id)geometry;	// 0x359b7cf9
+ (int)handleFloatingChart:(id)chart state:(id)state;	// 0x359b7d31
+ (int)handleInlineChart:(id)chart state:(id)state;	// 0x359b7d0d
+ (int)handleInlineChart:(id)chart state:(id)state imageUrl:(CFStringRef)url;	// 0x359b7eb1
+ (char *)pdfId:(id)anId;	// 0x359b7ce5
+ (CFDataRef)renderChart:(id)chart;	// 0x359b8041
@end

