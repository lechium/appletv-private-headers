/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

#import "WebKit-Structs.h"
#import <NSObject.h> // Unknown library

@protocol WebDocumentRepresentation;

__attribute__((visibility("hidden")))
@interface WebDataSourcePrivate : NSObject {
@private
	WebDocumentLoaderMac *loader;	// 4 = 0x4
	id<WebDocumentRepresentation> representation;	// 8 = 0x8
	BOOL representationFinishedLoading;	// 12 = 0xc
	BOOL includedInWebKitStatistics;	// 13 = 0xd
}
+ (void)initialize;	// 0x304e686d
- (void)dealloc;	// 0x304f652d
- (void)finalize;	// 0x305148d1
@end
