/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import <NSObject.h> // Unknown library

@class GQDColor;

__attribute__((visibility("hidden")))
@interface GQDRGradientStop : NSObject {
@private
	float mFraction;	// 4 = 0x4
	GQDColor *mColor;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x33fc5dbd
- (id)color;	// 0x33fc5dd9
- (void)dealloc;	// 0x33fc5e29
- (float)fraction;	// 0x33fc5dc9
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x33fc5de9
@end
