//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADMRewardBasedVideoAdNetworkConnector.h"
#import "GADMediationAdRequestInternal.h"

@class GADAd, GADMAdNetworkConfig, GADMConfig, GADRequest, NSDictionary, NSString;

@interface GADMRewardBasedVideoAdNetworkConnector : NSObject <GADMRewardBasedVideoAdNetworkConnector, GADMediationAdRequestInternal>
{
    id <GADMRewardBasedVideoAdNetworkAdapter> _adapter;
    NSDictionary *_networkData;
    _Bool _isLocationShared;
    GADMConfig *_mediationConfig;
    GADMAdNetworkConfig *_adNetworkConfig;
    GADAd *_ad;
    id <GADMRewardBasedVideoAdConnectorDelegate> _delegate;
    GADRequest *_request;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GADAd *ad; // @synthesize ad=_ad;
@property(retain, nonatomic) GADMAdNetworkConfig *adNetworkConfig; // @synthesize adNetworkConfig=_adNetworkConfig;
- (void)adapter:(id)arg1 didFailToLoadRewardBasedVideoAdwithError:(id)arg2;
- (void)adapter:(id)arg1 didFailToSetUpRewardBasedVideoAdWithError:(id)arg2;
- (void)adapter:(id)arg1 didRewardUserWithReward:(id)arg2;
- (void)adapterDidCloseRewardBasedVideoAd:(id)arg1;
- (void)adapterDidGetAdClick:(id)arg1;
- (void)adapterDidOpenRewardBasedVideoAd:(id)arg1;
- (void)adapterDidReceiveRewardBasedVideoAd:(id)arg1;
- (void)adapterDidSetUpRewardBasedVideoAd:(id)arg1;
- (void)adapterDidStartPlayingRewardBasedVideoAd:(id)arg1;
- (id)adapterNames;
- (void)adapterWillLeaveApplication:(id)arg1;
- (void)askAdapterToStopBeingDelegate;
- (id)childDirectedTreatment;
- (id)credentials;
- (id)currentAdapterName;
@property(nonatomic) __weak id <GADMRewardBasedVideoAdConnectorDelegate> delegate; // @synthesize delegate=_delegate;
- (id)extras;
- (id)inlineAd;
@property(retain, nonatomic) GADMConfig *mediationConfig; // @synthesize mediationConfig=_mediationConfig;
- (id)networkExtras;
- (void)pingClickURLs;
- (void)pingFillURLsWithFillStatus:(id)arg1;
- (void)pingImpressionURLs;
- (void)pingRewardedUserURLs;
- (void)pingURLs:(id)arg1 defaultTemplate:(id)arg2 fillStatus:(id)arg3;
- (void)pingVideoStartPlayingURLs;
- (void)presentRewardBasedVideoAdFromRootViewController:(id)arg1;
- (id)publisherId;
@property(copy, nonatomic) GADRequest *request; // @synthesize request=_request;
- (void)requestRewardBasedVideoAd;
- (void)setUpAdapter;
- (_Bool)testMode;
- (id)userBirthday;
- (long long)userGender;
- (_Bool)userHasLocation;
- (id)userKeywords;
- (double)userLatitude;
- (id)userLocation;
- (double)userLocationAccuracyInMeters;
- (id)userLocationDescription;
- (double)userLongitude;
- (id)userRequestAgent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

