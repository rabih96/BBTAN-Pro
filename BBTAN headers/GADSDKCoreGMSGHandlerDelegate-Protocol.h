//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GADSDKCoreGMSGHandler, NSDictionary, NSString;

@protocol GADSDKCoreGMSGHandlerDelegate
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didLoadSDKConstants:(NSDictionary *)arg2;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didReceiveInvalidAdWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 didReceiveResultActionWithRequestID:(NSString *)arg2 arguments:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 loadAdURLWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandler:(GADSDKCoreGMSGHandler *)arg1 loadAdWithRequestID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
- (void)SDKCoreGMSGHandlerDidReceivePauseSDKCoreRefreshAction:(GADSDKCoreGMSGHandler *)arg1;
- (void)SDKCoreGMSGHandlerDidReceiveResumeSDKCoreRefreshAction:(GADSDKCoreGMSGHandler *)arg1;
- (void)SDKCoreGMSGHandlerDidReceiveSDKCoreUpdateNotification:(GADSDKCoreGMSGHandler *)arg1;
@end

