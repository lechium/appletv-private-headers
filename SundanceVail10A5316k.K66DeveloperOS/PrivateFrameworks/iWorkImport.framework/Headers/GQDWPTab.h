/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


__attribute__((visibility("hidden")))
@interface GQDWPTab : NSObject <GQDNameMappable> {
@private
	float mPosition;	// 4 = 0x4
	int mAlignment;	// 8 = 0x8
	CFStringRef mLeader;	// 12 = 0xc
}
+ (const StateSpec *)stateForReading;	// 0x36c60fe5
- (int)alignment;	// 0x36c61145
- (void)dealloc;	// 0x36c610f1
- (CFStringRef)leader;	// 0x36c61155
- (float)position;	// 0x36c61135
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x36c60ff1
@end

