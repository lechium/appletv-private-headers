/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "Foundation-Structs.h"
#import <NSObject.h> // Unknown library


@interface NSNetServiceBrowser : NSObject {
@private
	id _netServiceBrowser;	// 4 = 0x4
	id _delegate;	// 8 = 0x8
	void *_reserved;	// 12 = 0xc
}
@property(assign) id delegate;	// G=0x35ea213d; S=0x35ea214d; converted property
- (id)init;	// 0x35ea203d
- (void)_dispatchCallBack:(void *)back flags:(unsigned long)flags error:(XXStruct_K5nmsA)error;	// 0x35ea25ed
- (CFNetServiceBrowserRef)_internalNetServiceBrowser;	// 0x35ea25dd
- (void)dealloc;	// 0x35ea2975
// converted property getter: - (id)delegate;	// 0x35ea213d
- (void)finalize;	// 0x35ea29dd
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x35ea219d
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x35ea215d
- (void)searchForAllDomains;	// 0x35ea2a39
- (void)searchForBrowsableDomains;	// 0x35ea21dd
- (void)searchForRegistrationDomains;	// 0x35ea2325
- (void)searchForServicesOfType:(id)type inDomain:(id)domain;	// 0x35ea246d
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x35ea214d
- (void)stop;	// 0x35ea25bd
@end

