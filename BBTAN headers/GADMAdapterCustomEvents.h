//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "GADCustomEventBannerDelegate.h"
#import "GADCustomEventInterstitialDelegate.h"
#import "GADCustomEventNativeAdDelegate.h"
#import "GADMAdNetworkAdapter.h"

@class NSString, UIViewController;

@interface GADMAdapterCustomEvents : NSObject <GADMAdNetworkAdapter, GADCustomEventBannerDelegate, GADCustomEventInterstitialDelegate, GADCustomEventNativeAdDelegate>
{
    id <GADMAdNetworkConnector> _connector;
    id <GADCustomEventBanner> _customEventBanner;
    id <GADCustomEventInterstitial> _customEventInterstitial;
    id <GADCustomEventNativeAd> _customEventNativeAd;
}

+ (id)adapterVersion;
+ (Class)networkExtrasClass;
- (void).cxx_destruct;
- (void)callBackToConnectorWithError:(id)arg1 isInterstitial:(_Bool)arg2;
@property(nonatomic) __weak id <GADMAdNetworkConnector> connector; // @synthesize connector=_connector;
@property(retain, nonatomic) id <GADCustomEventBanner> customEventBanner; // @synthesize customEventBanner=_customEventBanner;
- (void)customEventBanner:(id)arg1 clickDidOccurInAd:(id)arg2;
- (void)customEventBanner:(id)arg1 didFailAd:(id)arg2;
- (void)customEventBanner:(id)arg1 didReceiveAd:(id)arg2;
- (void)customEventBannerDidDismissModal:(id)arg1;
- (void)customEventBannerWasClicked:(id)arg1;
- (void)customEventBannerWillDismissModal:(id)arg1;
- (void)customEventBannerWillLeaveApplication:(id)arg1;
- (void)customEventBannerWillPresentModal:(id)arg1;
@property(retain, nonatomic) id <GADCustomEventInterstitial> customEventInterstitial; // @synthesize customEventInterstitial=_customEventInterstitial;
- (void)customEventInterstitial:(id)arg1 didFailAd:(id)arg2;
- (void)customEventInterstitial:(id)arg1 didReceiveAd:(id)arg2;
- (void)customEventInterstitialDidDismiss:(id)arg1;
- (void)customEventInterstitialDidReceiveAd:(id)arg1;
- (void)customEventInterstitialWasClicked:(id)arg1;
- (void)customEventInterstitialWillDismiss:(id)arg1;
- (void)customEventInterstitialWillLeaveApplication:(id)arg1;
- (void)customEventInterstitialWillPresent:(id)arg1;
@property(retain, nonatomic) id <GADCustomEventNativeAd> customEventNativeAd; // @synthesize customEventNativeAd=_customEventNativeAd;
- (void)customEventNativeAd:(id)arg1 didFailToLoadWithError:(id)arg2;
- (void)customEventNativeAd:(id)arg1 didReceiveMediatedNativeAd:(id)arg2;
- (id)customEventWithCredentials:(id)arg1 isInterstitial:(_Bool)arg2;
- (void)dealloc;
- (void)getBannerWithSize:(struct GADAdSize)arg1;
- (void)getInterstitial;
- (void)getNativeAdWithAdTypes:(id)arg1 options:(id)arg2;
- (_Bool)handlesUserClicks;
- (_Bool)handlesUserImpressions;
- (id)initWithGADMAdNetworkConnector:(id)arg1;
- (_Bool)isBannerAnimationOK:(long long)arg1;
- (void)presentInterstitialFromRootViewController:(id)arg1;
- (void)stopBeingDelegate;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

