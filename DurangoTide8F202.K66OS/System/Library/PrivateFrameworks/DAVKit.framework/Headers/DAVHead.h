/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/DAVKit.framework/DAVKit
 */

#import "DAVRequest.h"


@interface DAVHead : DAVRequest {
}
+ (id)headRequestWithSession:(id)session URI:(id)uri;	// 0x32da0ced
+ (id)headRequestWithSession:(id)session path:(id)path;	// 0x32da0d25
+ (id)headRequestWithURL:(id)url;	// 0x32da0d5d
- (id)initHeadWithSession:(id)session URI:(id)uri;	// 0x32da0d91
- (id)initHeadWithSession:(id)session path:(id)path;	// 0x32da0e2d
- (id)initHeadWithURL:(id)url;	// 0x32da0ec9
@end

