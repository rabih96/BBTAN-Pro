//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAdReward, GADRewardBasedVideoAdGMSGHandler;

@protocol GADRewardBasedVideoAdGMSGHandlerDelegate <NSObject>

@optional
- (void)rewardBasedVideoAdGMSGHandler:(GADRewardBasedVideoAdGMSGHandler *)arg1 didReceiveRewardNotificationWithRewardItem:(GADAdReward *)arg2;
- (void)rewardBasedVideoAdGMSGHandlerDidReceiveStartVideoNotification:(GADRewardBasedVideoAdGMSGHandler *)arg1;
@end

