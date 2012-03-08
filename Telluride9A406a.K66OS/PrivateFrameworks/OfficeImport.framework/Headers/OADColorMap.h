/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface OADColorMap : NSObject {
@private
	NSMutableDictionary *mMappings;	// 4 = 0x4
}
- (id)init;	// 0x328dc601
- (void)addDefaultMappings:(BOOL)mappings;	// 0x328de2b9
- (void)addMapping:(int)mapping index:(int)index;	// 0x328de391
- (void)dealloc;	// 0x328ac479
- (BOOL)isEqual:(id)equal;	// 0x32abcf2d
- (int)mappingForIndex:(int)index;	// 0x32823e01
@end

