/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"
#import <NSObject.h> // Unknown library


@interface GQDWPTab : NSObject <GQDNameMappable> {
	float mPosition;	// 4 = 0x4
	int mAlignment;	// 8 = 0x8
	CFStringRef mLeader;	// 12 = 0xc
}
+ (const StateSpec *)stateForReading;	// 0x35d0eaad
- (int)alignment;	// 0x35d0ec0d
- (void)dealloc;	// 0x35d0ebb9
- (CFStringRef)leader;	// 0x35d0ec1d
- (float)position;	// 0x35d0ebfd
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x35d0eab9
@end
