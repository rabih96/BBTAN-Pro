//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ALAd, ALAdService;

@protocol ALAdLoadDelegate <NSObject>
- (void)adService:(ALAdService *)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(ALAdService *)arg1 didLoadAd:(ALAd *)arg2;
@end

