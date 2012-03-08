/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
 */

#import <NSObject.h> // Unknown library

@class NSLock, CPDistributedMessagingCenter;

@interface MSMailDefaultService : NSObject {
	BOOL _shouldLaunch;	// 4 = 0x4
	NSLock *_lock;	// 8 = 0x8
	CPDistributedMessagingCenter *_server;	// 12 = 0xc
	CPDistributedMessagingCenter *_action;	// 16 = 0x10
	NSObject *_delegate;	// 20 = 0x14
}
@property(assign, nonatomic) NSObject *delegate;	// G=0x36130095; S=0x36130105; 
@property(assign, nonatomic) BOOL shouldLaunchMobileMail;	// G=0x36130821; S=0x36130831; @synthesize=_shouldLaunch
+ (BOOL)shouldUseNewThreadingModel;	// 0x3612fd15
+ (id)smi_serverCommandName;	// 0x3612fcdd
+ (void)useNewThreadingModel;	// 0x3612fd05
- (id)init;	// 0x3612fd25
- (id)_activeAction;	// 0x3613079d
- (BOOL)_callMailServicesMethod:(id)method arg:(id)arg reply:(id *)reply error:(id *)error responseSelector:(SEL)selector;	// 0x361303fd
- (id)_copyServer;	// 0x3612fe6d
- (id)_generateUnitTestReplyForMethod:(id)method arg:(id)arg error:(id *)error;	// 0x3612fef5
- (void)_generateUnitTestResponsesForResultArray:(id)resultArray;	// 0x3612fef9
- (void)_mailServiceDidTerminate:(id)_mailService;	// 0x3612fefd
- (void)_setActiveAction:(id)action responseSelector:(SEL)selector;	// 0x36130265
- (void)_setServer:(id)server;	// 0x36130159
- (void)_smi_notifyClientDidFinishWithError:(id)_smi_notifyClient;	// 0x3612fec9
- (BOOL)_unitTestsAreEnabled;	// 0x3612fef1
- (void)cancel;	// 0x3613080d
- (void)dealloc;	// 0x3612fdf9
// declared property getter: - (id)delegate;	// 0x36130095
// declared property setter: - (void)setDelegate:(id)delegate;	// 0x36130105
// declared property setter: - (void)setShouldLaunchMobileMail:(BOOL)launchMobileMail;	// 0x36130831
// declared property getter: - (BOOL)shouldLaunchMobileMail;	// 0x36130821
@end

