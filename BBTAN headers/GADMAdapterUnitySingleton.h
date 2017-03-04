//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UnityAdsDelegate.h"

@class NSMutableArray, NSString;

@interface GADMAdapterUnitySingleton : NSObject <UnityAdsDelegate>
{
    NSMutableArray *_adapterDelegates;
    id <GADMAdapterUnityDataProvider><UnityAdsDelegate> _currentShowingUnityDelegate;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)addAdapterDelegate:(id)arg1;
- (void)configureInterstitialAdWithGameID:(id)arg1 delegate:(id)arg2;
- (_Bool)configureRewardBasedVideoAdWithGameID:(id)arg1 delegate:(id)arg2;
- (id)init;
- (void)initializeWithGameID:(id)arg1;
- (void)presentInterstitialAdForViewController:(id)arg1 delegate:(id)arg2;
- (void)presentRewardBasedVideoAdForViewController:(id)arg1 delegate:(id)arg2;
- (void)removeAdapterDelegate:(id)arg1;
- (void)requestRewardBasedVideoAdWithDelegate:(id)arg1;
- (void)stopTrackingDelegate:(id)arg1;
- (void)unityAdsDidError:(long long)arg1 withMessage:(id)arg2;
- (void)unityAdsDidFinish:(id)arg1 withFinishState:(long long)arg2;
- (void)unityAdsDidStart:(id)arg1;
- (void)unityAdsReady:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

