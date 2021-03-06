//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VungleAdContainerView.h"

@class UIButton;

@interface VungleDismissibleContainerView : VungleAdContainerView
{
    _Bool _dismissCloseButtonCalled;
    id <VungleDismissibleContainerViewDelegate> _delegate;
    UIButton *_closeButton;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIButton *closeButton; // @synthesize closeButton=_closeButton;
- (void)closeButtonPressed;
@property(nonatomic) __weak id <VungleDismissibleContainerViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)didMoveToSuperview;
- (void)dismissCloseButton;
@property(nonatomic) _Bool dismissCloseButtonCalled; // @synthesize dismissCloseButtonCalled=_dismissCloseButtonCalled;
- (void)hideCloseButton;
- (id)initWithFrame:(struct CGRect)arg1 containedView:(id)arg2;
- (void)setupAutolayoutConstraints;
- (void)setupCloseButton;
- (void)showCloseButton;
- (void)willMoveToWindow:(id)arg1;

@end

