/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

#import <NSObject.h> // Unknown library

@class GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDSParentResolutionEntry : NSObject {
@private
	char *mParentIdentifier;	// 4 = 0x4
	GQDSStyle *mStyle;	// 8 = 0x8
}
- (id)initWithStyle:(id)style parentIdentifier:(const char *)identifier;	// 0x36c51825
- (void)dealloc;	// 0x36c51891
- (const char *)parentIdentifier;	// 0x36c5190d
- (id)style;	// 0x36c518fd
@end

