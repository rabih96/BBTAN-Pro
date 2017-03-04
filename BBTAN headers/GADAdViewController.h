//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "GADBannerViewDelegate.h"

@class GADBannerView, GADRequest, NSLayoutConstraint, NSString, UISwipeGestureRecognizer, UIView;

@interface GADAdViewController : UIViewController <GADBannerViewDelegate>
{
    NSLayoutConstraint *_bannerPositionConstraintVertical;
    NSLayoutConstraint *_bannerPositionConstraintHorizontal;
    NSLayoutConstraint *_topConstraint;
    NSLayoutConstraint *_bottomConstraint;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_trailingConstraint;
    UIView *_contentView;
    UISwipeGestureRecognizer *_swipeRecognizer;
    _Bool _handlingSwipe;
    _Bool _hasReceivedValidAd;
    GADBannerView *_bannerView;
    _Bool _animatesVisibility;
    _Bool _adViewHidden;
    _Bool _allowsHidingAds;
    UIView *_originalContentView;
    NSString *_adViewAdUnitID;
    GADRequest *_request;
    long long _adViewPositionVertical;
    long long _adViewPositionHorizontal;
    struct GADAdSize _adSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct GADAdSize adSize; // @synthesize adSize=_adSize;
@property(copy, nonatomic) NSString *adViewAdUnitID; // @synthesize adViewAdUnitID=_adViewAdUnitID;
- (void)adViewDidReceiveAd:(id)arg1;
@property(nonatomic) _Bool adViewHidden; // @synthesize adViewHidden=_adViewHidden;
@property(nonatomic) long long adViewPositionHorizontal; // @synthesize adViewPositionHorizontal=_adViewPositionHorizontal;
@property(nonatomic) long long adViewPositionVertical; // @synthesize adViewPositionVertical=_adViewPositionVertical;
@property(nonatomic) _Bool allowsHidingAds; // @synthesize allowsHidingAds=_allowsHidingAds;
@property(nonatomic) _Bool animatesVisibility; // @synthesize animatesVisibility=_animatesVisibility;
- (void)bannerPositionUpdated;
- (void)bannerSwiped;
- (void)commonInit;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) UIView *originalContentView; // @synthesize originalContentView=_originalContentView;
@property(retain, nonatomic) GADRequest *request; // @synthesize request=_request;
- (void)resetContentViewConstraints;
- (void)setUpBannerViewIfNeededWithOldBannerView:(id)arg1;
- (void)setUpPositionConstraints;
- (void)setView:(id)arg1;
- (void)updateAdViewHidden:(_Bool)arg1;
- (void)updateLayout;
- (void)viewDidLoad;
- (void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
