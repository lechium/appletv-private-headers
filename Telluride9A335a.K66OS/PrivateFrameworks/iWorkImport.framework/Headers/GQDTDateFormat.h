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
@interface GQDTDateFormat : NSObject <GQDNameMappable> {
@private
	CFStringRef mFormatString;	// 4 = 0x4
}
+ (const StateSpec *)stateForReading;	// 0x304b74fd
- (id)initWithFormatString:(CFStringRef)formatString;	// 0x304b7539
- (void)dealloc;	// 0x304b7589
- (CFStringRef)formatString;	// 0x304b7509
- (int)readAttributesFromReader:(xmlTextReader *)reader;	// 0x304b75cd
@end

