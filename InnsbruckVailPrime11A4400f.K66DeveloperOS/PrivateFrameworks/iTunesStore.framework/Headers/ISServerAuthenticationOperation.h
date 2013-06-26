/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISOperation.h"

@class ISDialog, ISDialogButton, SSAuthenticationContext, NSNumber, NSURL;

@interface ISServerAuthenticationOperation : ISOperation {
	NSNumber *_authenticatedAccountDSID;	// 60 = 0x3c
	SSAuthenticationContext *_authenticationContext;	// 64 = 0x40
	ISDialog *_dialog;	// 68 = 0x44
	BOOL _performsButtonAction;	// 72 = 0x48
	NSURL *_redirectURL;	// 76 = 0x4c
	ISDialogButton *_selectedButton;	// 80 = 0x50
}
@property(retain) NSNumber *authenticatedAccountDSID;	// G=0x33c87e99; S=0x33c87ead; @synthesize=_authenticatedAccountDSID
@property(retain) SSAuthenticationContext *authenticationContext;	// G=0x33c87e75; S=0x33c87e89; @synthesize=_authenticationContext
@property(retain) ISDialog *dialog;	// G=0x33c87ebd; S=0x33c87ed1; @synthesize=_dialog
@property(assign) BOOL performsButtonAction;	// G=0x33c87ee1; S=0x33c87ef9; @synthesize=_performsButtonAction
@property(retain) NSURL *redirectURL;	// G=0x33c87f11; S=0x33c87f25; @synthesize=_redirectURL
@property(retain) ISDialogButton *selectedButton;	// G=0x33c87f35; S=0x33c87f49; @synthesize=_selectedButton
- (id)init;	// 0x33c871f1
- (BOOL)_copyAccountIdentifier:(id *)identifier returningError:(id *)error;	// 0x33c87915
- (id)_copyAuthenticationContext;	// 0x33c879bd
- (id)_copyButtonForDialogSkip;	// 0x33c87b39
- (BOOL)_copySelectedButton:(id *)button returningError:(id *)error;	// 0x33c87bf1
- (BOOL)_handleSelectedButton:(id)button;	// 0x33c87ce9
- (BOOL)_shouldAuthenticateForButton:(id)button;	// 0x33c87df9
// declared property getter: - (id)authenticatedAccountDSID;	// 0x33c87e99
// declared property getter: - (id)authenticationContext;	// 0x33c87e75
- (void)dealloc;	// 0x33c87231
// declared property getter: - (id)dialog;	// 0x33c87ebd
// declared property getter: - (BOOL)performsButtonAction;	// 0x33c87ee1
// declared property getter: - (id)redirectURL;	// 0x33c87f11
- (void)run;	// 0x33c872d1
// declared property getter: - (id)selectedButton;	// 0x33c87f35
// declared property setter: - (void)setAuthenticatedAccountDSID:(id)dsid;	// 0x33c87ead
// declared property setter: - (void)setAuthenticationContext:(id)context;	// 0x33c87e89
// declared property setter: - (void)setDialog:(id)dialog;	// 0x33c87ed1
// declared property setter: - (void)setPerformsButtonAction:(BOOL)action;	// 0x33c87ef9
// declared property setter: - (void)setRedirectURL:(id)url;	// 0x33c87f25
// declared property setter: - (void)setSelectedButton:(id)button;	// 0x33c87f49
@end
