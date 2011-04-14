/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import "UIKit-Structs.h"
#import "UILocalNotification.h"

@class NSData, NSString, NSDate, NSTimeZone, NSCalendar;

__attribute__((visibility("hidden")))
@interface UIConcreteLocalNotification : UILocalNotification {
@private
	NSDate *fireDate;	// 4 = 0x4
	NSTimeZone *timeZone;	// 8 = 0x8
	unsigned repeatInterval;	// 12 = 0xc
	NSCalendar *repeatCalendar;	// 16 = 0x10
	NSString *alertBody;	// 20 = 0x14
	BOOL hasAction;	// 24 = 0x18
	NSString *alertAction;	// 28 = 0x1c
	NSString *alertLaunchImage;	// 32 = 0x20
	NSString *soundName;	// 36 = 0x24
	int applicationIconBadgeNumber;	// 40 = 0x28
	NSData *userInfoData;	// 44 = 0x2c
	BOOL hideAlertTitle;	// 48 = 0x30
	BOOL allowSnooze;	// 49 = 0x31
	BOOL soundNameIsARingtone;	// 50 = 0x32
	BOOL interruptAudioAndLockDevice;	// 51 = 0x33
	BOOL resumeApplicationInBackground;	// 52 = 0x34
	BOOL fireNotificationsWhenAppRunning;	// 53 = 0x35
	BOOL showAlarmStatusBarItem;	// 54 = 0x36
	NSString *customLockSliderLabel;	// 56 = 0x38
}
@property(copy, nonatomic) NSString *alertAction;	// G=0x30845dd5; S=0x3084741d; @synthesize
@property(copy, nonatomic) NSString *alertBody;	// G=0x30845e05; S=0x308473f1; @synthesize
@property(copy, nonatomic) NSString *alertLaunchImage;	// G=0x30845dc5; S=0x30847449; @synthesize
@property(assign, nonatomic) BOOL allowSnooze;	// G=0x30845d55; S=0x30845d65; @synthesize
@property(assign, nonatomic) int applicationIconBadgeNumber;	// G=0x30845d95; S=0x30845da5; @synthesize
@property(copy, nonatomic) NSString *customLockSliderLabel;	// G=0x30845ca5; S=0x308474a1; @synthesize
@property(copy, nonatomic) NSDate *fireDate;	// G=0x30845e55; S=0x3084736d; @synthesize
@property(assign, nonatomic) BOOL fireNotificationsWhenAppRunning;	// G=0x30845cd5; S=0x30845ce5; @synthesize
@property(assign, nonatomic) BOOL hasAction;	// G=0x30845de5; S=0x30845df5; @synthesize
@property(assign, nonatomic) BOOL hideAlertTitle;	// G=0x30845d75; S=0x30845d85; @synthesize
@property(assign, nonatomic) BOOL interruptAudioAndLockDevice;	// G=0x30845d15; S=0x30845d25; @synthesize
@property(copy, nonatomic) NSCalendar *repeatCalendar;	// G=0x30845e15; S=0x308473c5; @synthesize
@property(assign, nonatomic) unsigned repeatInterval;	// G=0x30845e25; S=0x30845e35; @synthesize
@property(assign, nonatomic) BOOL resumeApplicationInBackground;	// G=0x30845cf5; S=0x30845d05; @synthesize
@property(assign, nonatomic) BOOL showAlarmStatusBarItem;	// G=0x30845cb5; S=0x30845cc5; @synthesize
@property(copy, nonatomic) NSString *soundName;	// G=0x30845db5; S=0x30847475; @synthesize
@property(assign, nonatomic) BOOL soundNameIsARingtone;	// G=0x30845d35; S=0x30845d45; @synthesize
@property(copy, nonatomic) NSTimeZone *timeZone;	// G=0x30845e45; S=0x30847399; @synthesize
@property(retain) id userInfo;	// G=0x308463c9; S=0x30846db1; converted property
- (id)init;	// 0x30845e81
- (id)initWithCoder:(id)coder;	// 0x308469a9
- (void)_addCalendarUnits:(unsigned)units toDateComponents:(id)dateComponents;	// 0x30846029
- (void)_setUserInfoData:(id)data;	// 0x3084643d
// declared property getter: - (id)alertAction;	// 0x30845dd5
// declared property getter: - (id)alertBody;	// 0x30845e05
// declared property getter: - (id)alertLaunchImage;	// 0x30845dc5
// declared property getter: - (BOOL)allowSnooze;	// 0x30845d55
// declared property getter: - (int)applicationIconBadgeNumber;	// 0x30845d95
- (void)clearNonSystemProperties;	// 0x30845fbd
- (int)compareFireDates:(id)dates;	// 0x30846475
- (id)copyWithZone:(NSZone *)zone;	// 0x30846519
// declared property getter: - (id)customLockSliderLabel;	// 0x30845ca5
- (void)dealloc;	// 0x30846c99
- (id)description;	// 0x30846305
- (void)encodeWithCoder:(id)coder;	// 0x30846761
// declared property getter: - (id)fireDate;	// 0x30845e55
// declared property getter: - (BOOL)fireNotificationsWhenAppRunning;	// 0x30845cd5
// declared property getter: - (BOOL)hasAction;	// 0x30845de5
- (unsigned)hash;	// 0x308464e9
// declared property getter: - (BOOL)hideAlertTitle;	// 0x30845d75
// declared property getter: - (BOOL)interruptAudioAndLockDevice;	// 0x30845d15
- (BOOL)isEqual:(id)equal;	// 0x3084751d
- (BOOL)isValid;	// 0x30846201
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x30846f05
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x3084624d
// declared property getter: - (id)repeatCalendar;	// 0x30845e15
// declared property getter: - (unsigned)repeatInterval;	// 0x30845e25
// declared property getter: - (BOOL)resumeApplicationInBackground;	// 0x30845cf5
// declared property setter: - (void)setAlertAction:(id)action;	// 0x3084741d
// declared property setter: - (void)setAlertBody:(id)body;	// 0x308473f1
// declared property setter: - (void)setAlertLaunchImage:(id)image;	// 0x30847449
// declared property setter: - (void)setAllowSnooze:(BOOL)snooze;	// 0x30845d65
// declared property setter: - (void)setApplicationIconBadgeNumber:(int)number;	// 0x30845da5
// declared property setter: - (void)setCustomLockSliderLabel:(id)label;	// 0x308474a1
// declared property setter: - (void)setFireDate:(id)date;	// 0x3084736d
// declared property setter: - (void)setFireNotificationsWhenAppRunning:(BOOL)running;	// 0x30845ce5
// declared property setter: - (void)setHasAction:(BOOL)action;	// 0x30845df5
// declared property setter: - (void)setHideAlertTitle:(BOOL)title;	// 0x30845d85
// declared property setter: - (void)setInterruptAudioAndLockDevice:(BOOL)device;	// 0x30845d25
// declared property setter: - (void)setRepeatCalendar:(id)calendar;	// 0x308473c5
// declared property setter: - (void)setRepeatInterval:(unsigned)interval;	// 0x30845e35
// declared property setter: - (void)setResumeApplicationInBackground:(BOOL)background;	// 0x30845d05
// declared property setter: - (void)setShowAlarmStatusBarItem:(BOOL)item;	// 0x30845cc5
// declared property setter: - (void)setSoundName:(id)name;	// 0x30847475
// declared property setter: - (void)setSoundNameIsARingtone:(BOOL)ringtone;	// 0x30845d45
// declared property setter: - (void)setTimeZone:(id)zone;	// 0x30847399
// converted property setter: - (void)setUserInfo:(id)info;	// 0x30846db1
// declared property getter: - (BOOL)showAlarmStatusBarItem;	// 0x30845cb5
// declared property getter: - (id)soundName;	// 0x30845db5
// declared property getter: - (BOOL)soundNameIsARingtone;	// 0x30845d35
// declared property getter: - (id)timeZone;	// 0x30845e45
// converted property getter: - (id)userInfo;	// 0x308463c9
@end

