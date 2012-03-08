/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import "MSMailDefaultService.h"


@interface MSAccounts : MSMailDefaultService {
}
+ (void)accountValuesForKeys:(id)keys completionBlock:(id)block;	// 0x36131159
+ (void)accountValuesForKeys:(id)keys launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x36131179
+ (BOOL)hasActiveAccounts;	// 0x36130f91
+ (id)smi_serverCommandName;	// 0x36130f85
+ (void)updateAccounts:(id)accounts completionBlock:(id)block;	// 0x36131385
+ (void)updateAccounts:(id)accounts launchMobileMail:(BOOL)mail completionBlock:(id)block;	// 0x361313a5
- (void)_listAccountKeys:(id)keys handler:(id)handler;	// 0x3613129d
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x361315c1
- (void)_updateAccounts:(id)accounts handler:(id)handler;	// 0x361314c9
@end

