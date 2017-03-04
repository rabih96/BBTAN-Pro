//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADAudioVideoManager;

@interface GADMobileAds : NSObject
{
    _Bool _applicationMuted;
    float _applicationVolume;
    GADAudioVideoManager *_audioVideoManager;
}

+ (void)configureWithApplicationID:(id)arg1;
+ (void)disableAutomatedInAppPurchaseReporting;
+ (void)disableSDKCrashReporting;
+ (void)enableBackgroundAdLoading;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool applicationMuted; // @synthesize applicationMuted=_applicationMuted;
@property(nonatomic) float applicationVolume; // @synthesize applicationVolume=_applicationVolume;
@property(retain, nonatomic) GADAudioVideoManager *audioVideoManager; // @synthesize audioVideoManager=_audioVideoManager;
@property(readonly, nonatomic) float clampedApplicationVolume;
- (id)init;
- (_Bool)isSDKVersionAtLeastMajor:(long long)arg1 minor:(long long)arg2 patch:(long long)arg3;

@end
