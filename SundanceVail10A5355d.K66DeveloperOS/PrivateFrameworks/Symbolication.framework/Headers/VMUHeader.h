/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

#import </libobjc.A.h>


@interface VMUHeader : __objc_empty_vtable {
}
+ (id)extractMachOHeadersFromHeader:(id)header matchingArchitecture:(id)architecture considerArchives:(BOOL)archives;	// 0x34d5cb55
+ (id)headerWithMemory:(id)memory address:(unsigned long long)address name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x34d5cce9
+ (id)headerWithUniverse:(id)universe memory:(id)memory name:(id)name path:(id)path timestamp:(id)timestamp;	// 0x34d5cd69
- (BOOL)isArchive;	// 0x34d5cf21
- (BOOL)isFat;	// 0x34d5cf11
- (BOOL)isMachO;	// 0x34d5cf15
- (BOOL)isMachO32;	// 0x34d5cf19
- (BOOL)isMachO64;	// 0x34d5cf1d
- (id)signature;	// 0x34d5cf25
@end
