/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface MFPImageAttributes : NSObject {
@private
	NSMutableDictionary *mColorAdjustMap;	// 4 = 0x4
}
- (id)init;	// 0x31302845
- (id)colorAdjustWithType:(int)type;	// 0x313028f5
- (void)dealloc;	// 0x313028a9
- (id)ensureColorAdjustWithType:(int)type;	// 0x31302965
@end
