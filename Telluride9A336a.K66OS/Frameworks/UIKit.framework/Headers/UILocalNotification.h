/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/UIKit.framework/UIKit
 */

#import <NSObject.h> // Unknown library
#import "NSCoding.h"
#import "NSCopying.h"
#import "UIKit-Structs.h"

@class NSDictionary, NSString, NSTimeZone, NSCalendar, NSDate;

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}
@property(copy, nonatomic) NSString *alertAction;	// @dynamic
@property(copy, nonatomic) NSString *alertBody;	// @dynamic
@property(copy, nonatomic) NSString *alertLaunchImage;	// @dynamic
@property(assign, nonatomic) BOOL allowSnooze;	// @dynamic
@property(assign, nonatomic) int applicationIconBadgeNumber;	// @dynamic
@property(copy, nonatomic) NSString *customLockSliderLabel;	// @dynamic
@property(copy, nonatomic) NSDate *fireDate;	// @dynamic
@property(assign, nonatomic) BOOL fireNotificationsWhenAppRunning;	// @dynamic
@property(assign, nonatomic) BOOL hasAction;	// @dynamic
@property(assign, nonatomic) BOOL hideAlertTitle;	// @dynamic
@property(assign, nonatomic) BOOL interruptAudioAndLockDevice;	// @dynamic
@property(assign, nonatomic) BOOL isSystemAlert;	// @dynamic
@property(assign, nonatomic) int remainingRepeatCount;	// @dynamic
@property(copy, nonatomic) NSCalendar *repeatCalendar;	// @dynamic
@property(assign, nonatomic) unsigned repeatInterval;	// @dynamic
@property(assign, nonatomic) BOOL resumeApplicationInBackground;	// @dynamic
@property(assign, nonatomic) BOOL showAlarmStatusBarItem;	// @dynamic
@property(copy, nonatomic) NSString *soundName;	// @dynamic
@property(assign, nonatomic) BOOL soundNameIsARingtone;	// @dynamic
@property(copy, nonatomic) NSTimeZone *timeZone;	// @dynamic
@property(assign, nonatomic) int totalRepeatCount;	// @dynamic
@property(copy, nonatomic) NSDictionary *userInfo;	// @dynamic
+ (id)alloc;	// 0x353e5e3d
+ (id)allocWithZone:(NSZone *)zone;	// 0x353e5e69
- (id)init;	// 0x353e5e95
- (id)initWithCoder:(id)coder;	// 0x353e5f65
- (void)clearNonSystemProperties;	// 0x353e5fc1
- (int)compareFireDates:(id)dates;	// 0x353e5fbd
- (id)copyWithZone:(NSZone *)zone;	// 0x353e5fad
- (void)encodeWithCoder:(id)coder;	// 0x353e5fa9
- (BOOL)isValid;	// 0x353e5fb9
- (id)nextFireDateAfterDate:(id)date localTimeZone:(id)zone;	// 0x353e5fb5
- (id)nextFireDateForLastFireDate:(id)lastFireDate;	// 0x353e5fb1
@end
