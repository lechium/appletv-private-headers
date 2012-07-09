/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/MDM.framework/MDM
 */

#import "SSDownloadManifestRequestDelegate.h"
#import "MCSSRequestDelegate.h"

@class SSDownloadManifestResponse, SSDownloadManifestRequest;

@interface MCSSDownloadManifestRequestDelegate : MCSSRequestDelegate <SSDownloadManifestRequestDelegate> {
	SSDownloadManifestResponse *_response;	// 16 = 0x10
}
@property(readonly, assign, nonatomic) SSDownloadManifestRequest *request;	// @dynamic
@property(assign, nonatomic) BOOL shouldHideUserPrompts;	// G=0x351247ad; S=0x35124771; 
+ (id)instanceWithURLRequest:(id)urlrequest;	// 0x35124581
- (void).cxx_destruct;	// 0x3512487d
- (void)downloadManifestRequest:(id)request didReceiveResponse:(id)response;	// 0x351247e9
// declared property setter: - (void)setShouldHideUserPrompts:(BOOL)hideUserPrompts;	// 0x35124771
// declared property getter: - (BOOL)shouldHideUserPrompts;	// 0x351247ad
- (void)startCompletionBlock:(id)block;	// 0x351245f9
@end
