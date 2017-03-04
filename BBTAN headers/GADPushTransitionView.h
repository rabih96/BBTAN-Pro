//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSArray;

@interface GADPushTransitionView : UIView
{
    NSArray *_views;
    UIView *_clippingView;
    UIView *_currentView;
    unsigned long long _currentViewIndex;
    double _presentationDuration;
    double _animationDuration;
    long long _animationGroupIdentifier;
}

- (void).cxx_destruct;
- (void)animate;
@property(readonly, nonatomic) long long animationGroupIdentifier; // @synthesize animationGroupIdentifier=_animationGroupIdentifier;
- (void)commonInit;
- (void)dispatchAnimation;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)setAnimationDuration:(double)arg1;
- (void)setCurrentView:(id)arg1;
- (void)setPresentationDuration:(double)arg1;
- (void)setViews:(id)arg1;

@end

