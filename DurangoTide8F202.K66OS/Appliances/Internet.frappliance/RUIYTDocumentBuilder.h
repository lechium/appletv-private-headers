/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSMutableArray;

@interface RUIYTDocumentBuilder : XXUnknownSuperclass {
	NSMutableArray *_documentsAwaitingTokenGeneration;	// 4 = 0x4
	BOOL _awaitingTokenGeneration;	// 8 = 0x8
	NSMutableArray *_documentsAwaitingAuthentication;	// 12 = 0xc
	BOOL _awaitingAuthentication;	// 16 = 0x10
}
+ (void)setSingleton:(id)singleton;	// 0x1e181
+ (id)singleton;	// 0x1e175
- (id)init;	// 0x1e265
- (void)_postDocumentDidFinishBuildingNotificationForDocument:(id)_postDocument;	// 0x1e18d
- (BOOL)_setupAccessTokenForDocument:(id)document;	// 0x1e571
- (BOOL)_setupTokenForDocument:(id)document;	// 0x1e2f1
- (void)_tokenGenerated:(id)generated;	// 0x1eb2d
- (void)_tokenGenerationFailed:(id)failed;	// 0x1e939
- (void)_userLoggedIn:(id)anIn;	// 0x1ef41
- (void)_userLoginFailed:(id)failed;	// 0x1ed29
- (id)buildDocument:(id)document;	// 0x1e20d
- (void)dealloc;	// 0x1e7e9
@end

