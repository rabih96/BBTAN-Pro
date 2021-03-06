//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FIRInstanceIDConfig, FIRInstanceIDKeyPairStore, FIRInstanceIDTokenManager, NSData, NSString;

@interface FIRInstanceID : NSObject
{
    _Bool _isFetchingDefaultToken;
    _Bool _isDefaultTokenFetchScheduled;
    NSString *_fcmSenderID;
    NSString *_fcmAppID;
    NSData *_apnsTokenData;
    NSString *_apnsToken;
    NSString *_defaultFCMToken;
    FIRInstanceIDConfig *_config;
    FIRInstanceIDTokenManager *_tokenManager;
    FIRInstanceIDKeyPairStore *_keyPairStore;
    long long _retryCountForDefaultToken;
    long long _retryCountForCheckinRefresh;
}

+ (id)instanceID;
+ (long long)maxRetryCountForDefaultToken;
+ (long long)maxRetryIntervalForDefaultTokenInSeconds;
+ (long long)minIntervalForDefaultTokenRetry;
+ (void)notifyIdentityLost;
+ (void)notifyTokenRefresh;
+ (id)replaceAPNSDataWithString:(id)arg1;
- (void).cxx_destruct;
- (id)addInternalOptions:(id)arg1;
@property(copy, nonatomic) NSString *apnsToken; // @synthesize apnsToken=_apnsToken;
@property(retain, nonatomic) NSData *apnsTokenData; // @synthesize apnsTokenData=_apnsTokenData;
- (id)appInstanceID:(id *)arg1;
- (void)asyncInvokeDeleteIDHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)asyncInvokeDeleteTokenHandler:(CDUnknownBlockType)arg1 withError:(id)arg2;
- (void)asyncInvokeGetIDHandler:(CDUnknownBlockType)arg1 withIdentity:(id)arg2 error:(id)arg3;
- (void)asyncInvokeGetTokenHandler:(CDUnknownBlockType)arg1 withToken:(id)arg2 error:(id)arg3;
- (void)asyncLoadKeyPairWithHandler:(CDUnknownBlockType)arg1;
- (id)cachedCheckinPreferences;
@property(retain, nonatomic) FIRInstanceIDConfig *config; // @synthesize config=_config;
- (void)dealloc;
@property(copy, nonatomic) NSString *defaultFCMToken; // @synthesize defaultFCMToken=_defaultFCMToken;
- (void)defaultTokenWithHandler:(CDUnknownBlockType)arg1;
- (void)deleteIDWithHandler:(CDUnknownBlockType)arg1;
- (void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)didAutoFetch:(_Bool)arg1 APNSToken:(id)arg2 type:(long long)arg3;
- (void)didCompleteConfigure;
- (void)didReceiveGCMMessage:(id)arg1;
@property(copy, nonatomic) NSString *fcmAppID; // @synthesize fcmAppID=_fcmAppID;
@property(copy, nonatomic) NSString *fcmSenderID; // @synthesize fcmSenderID=_fcmSenderID;
- (void)fetchCheckinInfoWithHandler:(CDUnknownBlockType)arg1;
- (void)fetchDefaultToken;
- (void)getIDWithHandler:(CDUnknownBlockType)arg1;
- (void)handleCommandResetFullWithDelayInSeconds:(int)arg1;
- (void)handleCommandResetWithDelayInSeconds:(int)arg1;
- (void)handleRefreshMessage:(id)arg1 withSubType:(id)arg2;
- (void)handleTokenRefreshWithDelayInSeconds:(int)arg1;
- (_Bool)hasValidCheckinInfo;
- (id)initWithConfig:(id)arg1;
- (void)invokeTokenRefreshCallbackWithDelayInSeconds:(int)arg1;
@property _Bool isDefaultTokenFetchScheduled; // @synthesize isDefaultTokenFetchScheduled=_isDefaultTokenFetchScheduled;
@property _Bool isFetchingDefaultToken; // @synthesize isFetchingDefaultToken=_isFetchingDefaultToken;
- (_Bool)isProductionApp;
- (_Bool)isSandboxApp;
@property(retain, nonatomic) FIRInstanceIDKeyPairStore *keyPairStore; // @synthesize keyPairStore=_keyPairStore;
- (void)logAPNSConfigurationError:(id)arg1;
@property(nonatomic) long long retryCountForCheckinRefresh; // @synthesize retryCountForCheckinRefresh=_retryCountForCheckinRefresh;
@property(nonatomic) long long retryCountForDefaultToken; // @synthesize retryCountForDefaultToken=_retryCountForDefaultToken;
- (long long)retryIntervalToFetchDefaultToken;
- (void)scheduleCheckinRefreshWaitWithHandler:(CDUnknownBlockType)arg1;
- (void)setAPNSToken:(id)arg1 type:(long long)arg2;
- (void)setAutoFetchedAPNSToken:(id)arg1 error:(id)arg2;
- (void)setNormalizedAPNSToken:(id)arg1 forType:(long long)arg2;
@property(retain, nonatomic) FIRInstanceIDTokenManager *tokenManager; // @synthesize tokenManager=_tokenManager;
- (void)setupKeyPairManager;
- (void)setupLogger:(BOOL)arg1;
- (void)setupNotificationListeners;
- (void)setupTokenManagerWithConfig:(id)arg1;
- (_Bool)shouldWaitForCheckinRefresh;
- (void)startWithConfig:(id)arg1;
- (void)stopAllRequests;
- (id)token;
- (void)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (double)waitIntervalForCheckinRefresh;

@end

