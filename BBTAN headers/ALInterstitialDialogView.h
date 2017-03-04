//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "ALAdDisplayDelegate.h"
#import "ALAdLoadDelegate.h"
#import "ALInterstitialExtendedControlProxy.h"

@class ALCloseButton, ALHtmlAdView, ALIOSAd, ALLogManager, ALSdk, NSArray, NSString, UIWindow;

@interface ALInterstitialDialogView : UIView <ALAdDisplayDelegate, ALAdLoadDelegate, ALInterstitialExtendedControlProxy>
{
    _Bool _dismissesOnClick;
    _Bool _statusBarOriginallyHidden;
    id <ALAdDisplayDelegate> _adDisplayDelegate;
    id <ALAdLoadDelegate> _adLoadDelegate;
    id <ALAdVideoPlaybackDelegate> _adVideoPlaybackDelegate;
    id <ALInterstitialControlProxy> _wrapper;
    ALCloseButton *_closeButton;
    ALSdk *_sdk;
    ALLogManager *_logger;
    ALHtmlAdView *_adView;
    UIWindow *_currentWindow;
    ALIOSAd *_currentAd;
    NSArray *_windowConstraints;
}

+ (id)shared;
+ (id)showOver:(id)arg1;
- (void).cxx_destruct;
- (void)ad:(id)arg1 wasClickedIn:(id)arg2;
- (void)ad:(id)arg1 wasDisplayedIn:(id)arg2;
- (void)ad:(id)arg1 wasHiddenIn:(id)arg2;
@property(nonatomic) __weak id <ALAdDisplayDelegate> adDisplayDelegate; // @synthesize adDisplayDelegate=_adDisplayDelegate;
@property(nonatomic) __weak id <ALAdLoadDelegate> adLoadDelegate; // @synthesize adLoadDelegate=_adLoadDelegate;
- (void)adService:(id)arg1 didFailToLoadAdWithError:(int)arg2;
- (void)adService:(id)arg1 didLoadAd:(id)arg2;
@property(nonatomic) __weak id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate; // @synthesize adVideoPlaybackDelegate=_adVideoPlaybackDelegate;
@property(retain, nonatomic) ALHtmlAdView *adView; // @synthesize adView=_adView;
- (void)attachToWindow:(id)arg1;
@property(retain, nonatomic) ALCloseButton *closeButton; // @synthesize closeButton=_closeButton;
- (struct CGRect)closeButtonFrame;
@property(readonly, nonatomic) __weak UIView *containingView; // @dynamic containingView;
- (void)createCloseButton:(unsigned long long)arg1;
@property(retain) ALIOSAd *currentAd; // @synthesize currentAd=_currentAd;
@property(nonatomic, getter=currentFrame, setter=setCurrentFrame:) struct CGRect currentFrame; // @dynamic currentFrame;
@property(retain) UIWindow *currentWindow; // @synthesize currentWindow=_currentWindow;
- (void)dealloc;
- (void)deviceOrientationDidChange:(id)arg1;
- (void)dismiss;
- (void)dismissWithCompletionHandler:(CDUnknownBlockType)arg1;
@property _Bool dismissesOnClick; // @synthesize dismissesOnClick=_dismissesOnClick;
- (id)initInterstitialAdWithSdk:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1 sdk:(id)arg2;
- (id)initWithSdk:(id)arg1 currentAd:(id)arg2 currentPlacement:(id)arg3 wrapper:(id)arg4;
@property(nonatomic, getter=isAdHidden, setter=setAdHidden:) _Bool adHidden; // @dynamic adHidden;
@property(retain, nonatomic) ALLogManager *logger; // @synthesize logger=_logger;
- (_Bool)needsTransform;
@property(retain, nonatomic) ALSdk *sdk; // @synthesize sdk=_sdk;
@property(nonatomic) _Bool statusBarOriginallyHidden; // @synthesize statusBarOriginallyHidden=_statusBarOriginallyHidden;
@property(retain, nonatomic) NSArray *windowConstraints; // @synthesize windowConstraints=_windowConstraints;
@property __weak id <ALInterstitialControlProxy> wrapper; // @synthesize wrapper=_wrapper;
- (void)showCloseButton;
- (void)showOver:(id)arg1 andLoadNextAd:(_Bool)arg2;
- (void)showOver:(id)arg1 placement:(id)arg2 andRender:(id)arg3;
- (void)updateTransform;
- (void)videoPlaybackBeganInAd:(id)arg1;
- (void)videoPlaybackEndedInAd:(id)arg1 atPlaybackPercent:(id)arg2 fullyWatched:(_Bool)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

