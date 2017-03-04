//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSError, UIView, UIViewController;

@protocol GADCustomEventBannerDelegate <NSObject>
- (void)customEventBanner:(id <GADCustomEventBanner>)arg1 clickDidOccurInAd:(UIView *)arg2;
- (void)customEventBanner:(id <GADCustomEventBanner>)arg1 didFailAd:(NSError *)arg2;
- (void)customEventBanner:(id <GADCustomEventBanner>)arg1 didReceiveAd:(UIView *)arg2;
- (void)customEventBannerDidDismissModal:(id <GADCustomEventBanner>)arg1;
- (void)customEventBannerWasClicked:(id <GADCustomEventBanner>)arg1;
- (void)customEventBannerWillDismissModal:(id <GADCustomEventBanner>)arg1;
- (void)customEventBannerWillLeaveApplication:(id <GADCustomEventBanner>)arg1;
- (void)customEventBannerWillPresentModal:(id <GADCustomEventBanner>)arg1;
@property(readonly, nonatomic) UIViewController *viewControllerForPresentingModalView;
@end

