//
//  RCTOneSignalExtensionService.h
//  RCTOneSignal
//
//  Created by Brad Hesse on 1/17/18.
//

#import <Foundation/Foundation.h>
#import <UserNotifications/UserNotifications.h>

@interface RCTOneSignalExtensionService : NSObject
+ (void)serviceExtensionTimeWillExpireRequest:(UNNotificationRequest * _Nonnull)request withMutableNotificationContent:(UNMutableNotificationContent * _Nullable)content;
+ (void)didReceiveNotificationRequest:(UNNotificationRequest * _Nonnull)request withContent:(UNMutableNotificationContent * _Nullable)content;
@end
