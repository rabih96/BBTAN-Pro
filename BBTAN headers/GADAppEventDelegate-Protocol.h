//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class GADBannerView, GADInterstitial, NSString;

@protocol GADAppEventDelegate <NSObject>

@optional
- (void)adView:(GADBannerView *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
- (void)interstitial:(GADInterstitial *)arg1 didReceiveAppEvent:(NSString *)arg2 withInfo:(NSString *)arg3;
@end

