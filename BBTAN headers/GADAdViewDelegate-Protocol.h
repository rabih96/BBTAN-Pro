//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GADCSIGMSGHandlerDelegate.h"

@class GADAdView, NSError, NSURLRequest;

@protocol GADAdViewDelegate <GADCSIGMSGHandlerDelegate>

@optional
- (void)adView:(GADAdView *)arg1 contentSizeDidChange:(struct CGSize)arg2;
- (void)adView:(GADAdView *)arg1 didFailLoadWithError:(NSError *)arg2;
- (void)adView:(GADAdView *)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)adView:(GADAdView *)arg1 didMoveToPlacement:(id)arg2;
- (_Bool)adView:(GADAdView *)arg1 shouldStartLoadWithRequest:(NSURLRequest *)arg2 navigationType:(long long)arg3;
- (void)adViewDidFinishLoad:(GADAdView *)arg1;
- (void)adViewDidRecordClick:(GADAdView *)arg1;
- (void)adViewDidRecordImpression:(GADAdView *)arg1;
- (void)adViewDidStartLoad:(GADAdView *)arg1;
- (void)adViewWillLoadContent:(GADAdView *)arg1;
@end

