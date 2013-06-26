/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/BulletinBoard.framework/BulletinBoard
 */

#import "BBBulletin.h"
#import "BulletinBoard-Structs.h"

@class NSArray, BBSound, NSSet, NSDate, NSTimeZone, BBContent, BBAction, NSString;

@interface BBBulletinRequest : BBBulletin {
	unsigned _expirationEvents;	// 144 = 0x90
}
@property(assign, nonatomic) unsigned accessoryStyle;	// @dynamic
@property(copy, nonatomic) BBAction *acknowledgeAction;	// @dynamic
@property(assign, nonatomic) int addressBookRecordID;	// @dynamic
@property(copy, nonatomic) NSSet *alertSuppressionContexts;	// @dynamic
@property(copy, nonatomic) BBAction *alternateAction;	// @dynamic
@property(copy, nonatomic) NSString *bulletinID;	// @dynamic
@property(copy, nonatomic) NSArray *buttons;	// @dynamic
@property(assign, nonatomic) BOOL clearable;	// @dynamic
@property(retain, nonatomic) NSDate *date;	// @dynamic
@property(assign, nonatomic) int dateFormatStyle;	// @dynamic
@property(assign, nonatomic) BOOL dateIsAllDay;	// @dynamic
@property(copy, nonatomic) BBAction *defaultAction;	// @dynamic
@property(copy, nonatomic) NSString *dismissalID;	// @dynamic
@property(retain, nonatomic) NSDate *endDate;	// @dynamic
@property(retain, nonatomic) NSDate *expirationDate;	// @dynamic
@property(assign, nonatomic) unsigned expirationEvents;	// G=0x30220041; S=0x30220051; @synthesize=_expirationEvents
@property(copy, nonatomic) BBAction *expireAction;	// @dynamic
@property(assign, nonatomic) BOOL expiresOnPublisherDeath;	// @dynamic
@property(assign, nonatomic) BOOL hasEventDate;	// @dynamic
@property(copy, nonatomic) NSString *message;	// @dynamic
@property(retain, nonatomic) BBContent *modalAlertContent;	// @dynamic
@property(assign, nonatomic) int primaryAttachmentType;	// S=0x3021fbf9; @dynamic
@property(copy, nonatomic) NSString *publisherBulletinID;	// @dynamic
@property(assign, nonatomic) unsigned realertCount;	// G=0x3021fdf1; S=0x3021fe01; 
@property(retain, nonatomic) NSDate *recencyDate;	// @dynamic
@property(copy, nonatomic) NSString *recordID;	// @dynamic
@property(copy, nonatomic) NSString *section;	// @dynamic
@property(copy, nonatomic) NSString *sectionID;	// @dynamic
@property(assign, nonatomic) int sectionSubtype;	// @dynamic
@property(assign, nonatomic) BOOL showsUnreadIndicator;	// G=0x3021ffdd; S=0x3021ff89; 
@property(copy, nonatomic) BBAction *snoozeAction;	// @dynamic
@property(retain, nonatomic) BBSound *sound;	// @dynamic
@property(retain, nonatomic) BBContent *starkBannerContent;	// @dynamic
@property(copy, nonatomic) NSSet *subsectionIDs;	// @dynamic
@property(copy, nonatomic) NSString *subtitle;	// @dynamic
@property(assign, nonatomic) BOOL tentative;	// G=0x30220029; S=0x3021fff9; 
@property(retain, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(copy, nonatomic) NSString *title;	// @dynamic
@property(assign, nonatomic) BOOL usesExternalSync;	// @dynamic
@property(assign, nonatomic) BOOL wantsFullscreenPresentation;	// @dynamic
- (void)addAlertSuppressionAppID:(id)anId;	// 0x3021fe11
- (void)addAttachmentOfType:(int)type;	// 0x3021fc29
- (void)addButton:(id)button;	// 0x3021fc59
// declared property getter: - (unsigned)expirationEvents;	// 0x30220041
- (void)generateBulletinID;	// 0x3021ff85
- (void)generateNewBulletinID;	// 0x30220541
- (BOOL)hasContentModificationsRelativeTo:(id)to;	// 0x30220061
- (void)publish;	// 0x3021fdb9
- (void)publish:(BOOL)publish;	// 0x3021fda5
- (id)publisherMatchID;	// 0x3022050d
// declared property getter: - (unsigned)realertCount;	// 0x3021fdf1
- (void)setContextValue:(id)value forKey:(id)key;	// 0x3021fb29
// declared property setter: - (void)setExpirationEvents:(unsigned)events;	// 0x30220051
// declared property setter: - (void)setPrimaryAttachmentType:(int)type;	// 0x3021fbf9
// declared property setter: - (void)setRealertCount:(unsigned)count;	// 0x3021fe01
// declared property setter: - (void)setShowsUnreadIndicator:(BOOL)indicator;	// 0x3021ff89
// declared property setter: - (void)setTentative:(BOOL)tentative;	// 0x3021fff9
- (void)setUnlockActionLabel:(id)label;	// 0x3021fde1
// declared property getter: - (BOOL)showsUnreadIndicator;	// 0x3021ffdd
// declared property getter: - (BOOL)tentative;	// 0x30220029
- (void)withdraw;	// 0x3021fdcd
@end
