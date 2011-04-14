/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "AppleTV-Structs.h"
#import "BRHomeShareHandler.h"
#import <XXUnknownSuperclass.h> // Unknown library


@interface MEHomeShareAccountHandler : XXUnknownSuperclass <BRHomeShareHandler> {
}
- (void)disableHomeSharing;	// 0x1d8f9
- (void)enableHomeSharingWithAccountName:(id)accountName andPassword:(id)password;	// 0x1d951
- (BOOL)hasHomeShareAccount;	// 0x1d8a5
- (id)homeShareAccount;	// 0x1d809
- (id)homeSharingGroupIDIsEnabled:(id *)enabled;	// 0x1da25
- (BOOL)isHomeSharingEnabled;	// 0x1d871
- (unsigned long long)machineIDForServer:(ATVDataServerRef)server;	// 0x1dab5
- (long)pairForHomeShareStreamingWithHost:(ATVDataServerRef)host;	// 0x1dacd
- (unsigned long long)pairingGUIDForServer:(ATVDataServerRef)server;	// 0x1da9d
@end

