//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol VungleSDKInitializerDelegate <NSObject>

@optional
- (void)didCheckCache;
- (void)didGetIDFV:(NSString *)arg1;
- (void)didGetIFA:(NSString *)arg1;
- (void)didGetUserAgent:(NSString *)arg1;
- (void)didSendCachedAdReports;
- (void)didSendConfigRequest;
- (void)didSendNewRequest;
@end

