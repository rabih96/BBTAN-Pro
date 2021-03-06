//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALTask.h"

#import "ALConnectionManagerDelegate.h"

@class ALAd, NSString;

@interface ALTaskValidateReward : ALTask <ALConnectionManagerDelegate>
{
    _Bool shouldCancelNotification;
    ALAd *sourceAd;
    id <ALAdRewardDelegate> rewardDelegate;
}

- (void).cxx_destruct;
- (void)connectionVia:(id)arg1 didFailWith:(long long)arg2;
- (void)connectionVia:(id)arg1 didSucceedWith:(long long)arg2 responseBody:(id)arg3;
- (void)handleValidationResult:(id)arg1 parameters:(id)arg2;
- (id)initWithSdk:(id)arg1 videoAd:(id)arg2 rewardDelegate:(id)arg3;
@property(retain, nonatomic) id <ALAdRewardDelegate> rewardDelegate; // @synthesize rewardDelegate;
- (void)run;
- (void)sendApiRequestWith:(id)arg1;
@property _Bool shouldCancelNotification; // @synthesize shouldCancelNotification;
@property(retain, nonatomic) ALAd *sourceAd; // @synthesize sourceAd;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

