/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "GQDNameMappable.h"
#import "iWorkImport-Structs.h"


__attribute__((visibility("hidden")))
@interface GQDWPPadding : NSObject <GQDNameMappable> {
@private
	float mTop;	// 4 = 0x4
	float mLeft;	// 8 = 0x8
	float mBottom;	// 12 = 0xc
	float mRight;	// 16 = 0x10
}
+ (const StateSpec *)stateForReading;	// 0x3598ce59
- (float)bottom;	// 0x3598ce85
- (float)left;	// 0x3598ce75
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3598cf89
- (float)right;	// 0x3598ce95
- (float)top;	// 0x3598ce65
@end

