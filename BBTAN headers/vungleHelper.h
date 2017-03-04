//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "VungleSDKDelegate.h"

@class NSString;

@interface vungleHelper : NSObject <VungleSDKDelegate>
{
    id <VungleDelegate> _interstitialDelegate;
    id <VungleDelegate> _rewardDelegate;
}

+ (id)adapterVersion;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (void)initWithAppId:(id)arg1;
@property(retain) id <VungleDelegate> interstitialDelegate; // @synthesize interstitialDelegate=_interstitialDelegate;
- (_Bool)isAdPlayable;
- (_Bool)playAd:(id)arg1 adapter:(int)arg2 incentivized:(_Bool)arg3 extras:(id)arg4;
@property(retain) id <VungleDelegate> rewardDelegate; // @synthesize rewardDelegate=_rewardDelegate;
- (void)vungleSDKAdPlayableChanged:(_Bool)arg1;
- (void)vungleSDKwillCloseAdWithViewInfo:(id)arg1 willPresentProductSheet:(_Bool)arg2;
- (void)vungleSDKwillShowAd;
- (void)waitForAdPlayable:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

