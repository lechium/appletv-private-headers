/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library
#import "iWorkImport-Structs.h"
#import "GQDNameMappable.h"


__attribute__((visibility("hidden")))
@interface GQDWPColumns : NSObject <GQDNameMappable> {
@private
	CFArrayRef mColumns;	// 4 = 0x4
	BOOL mEqualColumns;	// 8 = 0x8
}
+ (const StateSpec *)stateForReading;	// 0x3049b8f9
- (CFArrayRef)columns;	// 0x3049b905
- (void)dealloc;	// 0x3049ba91
- (BOOL)equalColumns;	// 0x3049b915
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x3049ba55
@end

