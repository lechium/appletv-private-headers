/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSSendEmail : MSMailDefaultService {
}
+ (id)sendEmail:(id)email completionBlock:(id)block;	// 0x3444d505
+ (id)sendMessageData:(id)data autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x3444d499
- (void)_sendEmail:(id)email completionBlock:(id)block;	// 0x3444d569
- (void)_sendMessageData:(id)data autosaveIdentifier:(id)identifier completionBlock:(id)block;	// 0x3444d6dd
- (void)_simulateServicesMethod:(id)method arguments:(id)arguments callback:(id)callback;	// 0x3444d8a1
@end

