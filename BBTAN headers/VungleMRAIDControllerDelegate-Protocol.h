//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSError, UIView, UIViewController, VungleInterstitialMRAIDAd, VungleMRAIDController;

@protocol VungleMRAIDControllerDelegate <NSObject>
- (UIViewController *)controllerToPresentModalAdView;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 didFailToLoadAd:(VungleInterstitialMRAIDAd *)arg2 error:(NSError *)arg3;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 didLoadAdInContainerView:(UIView *)arg2;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 executeRequestWithTPATURLArray:(NSArray *)arg2;
- (void)vungleMRAIDController:(VungleMRAIDController *)arg1 setOrientationPropertiesWithForceOrientationMask:(unsigned long long)arg2;
- (void)vungleMRAIDControllerDidCloseAdExperienceWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerIsEnteringBackgroundWithReportable:(id <VungleReportable>)arg1;
- (unsigned long long)vungleMRAIDControllerOrientationMask;
- (void)vungleMRAIDControllerSuccessfulView:(_Bool)arg1;
- (void)vungleMRAIDControllerWillCloseAdExperienceWithReportable:(id <VungleReportable>)arg1;
- (void)vungleMRAIDControllerWillStartAdExperienceWithReportable:(id <VungleReportable>)arg1;
@end

