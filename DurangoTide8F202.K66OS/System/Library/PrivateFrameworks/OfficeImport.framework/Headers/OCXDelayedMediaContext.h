/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library
#import "OCDDelayedMediaContext.h"

@class OCPPackage, NSURL;

__attribute__((visibility("hidden")))
@interface OCXDelayedMediaContext : NSObject <OCDDelayedMediaContext> {
@private
	OCPPackage *mPackage;	// 4 = 0x4
	NSURL *mTargetLocation;	// 8 = 0x8
}
- (id)initWithTargetLocation:(id)targetLocation package:(id)package;	// 0x31a3b985
- (void)dealloc;	// 0x31a455f5
- (bool)loadDelayedNode:(id)node;	// 0x31b1c23d
- (bool)saveDelayedMedia:(id)media toFile:(id)file;	// 0x31b1c241
@end

