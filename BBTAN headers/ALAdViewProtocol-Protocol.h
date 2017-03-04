//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class ALAd, ALAdSize, ALSdk, NSString, UIViewController;

@protocol ALAdViewProtocol
@property(retain) id <ALAdDisplayDelegate> adDisplayDelegate;
@property(retain) id <ALAdLoadDelegate> adLoadDelegate;
@property(retain) ALAdSize *adSize;
@property(retain) id <ALAdVideoPlaybackDelegate> adVideoPlaybackDelegate;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1 size:(ALAdSize *)arg2 sdk:(ALSdk *)arg3;
- (id)initWithSdk:(ALSdk *)arg1 size:(ALAdSize *)arg2;
- (id)initWithSize:(ALAdSize *)arg1;
@property(getter=isAutoloadEnabled, setter=setAutoloadEnabled:) _Bool shouldAutoload;
@property(readonly, getter=isReadyForDisplay) _Bool readyForDisplay;
- (void)loadNextAd;
@property(retain) UIViewController *parentController;
- (void)render:(ALAd *)arg1;
- (void)render:(ALAd *)arg1 overPlacement:(NSString *)arg2;

// Remaining properties
@property(getter=isAutoloadEnabled, setter=setAutoloadEnabled:) _Bool autoload;
@end
