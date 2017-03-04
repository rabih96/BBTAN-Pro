//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALAd.h"

@class ALVideoButtonProperties, NSDictionary, NSNumber, NSString, NSURL;

@interface ALIOSAd : ALAd
{
    _Bool _videoStream;
    _Bool _closeButtonHidden;
    _Bool _mediaPlaybackRequiresUserAction;
    _Bool _allowsInlineMediaPlayback;
    _Bool _hideVideoCloseButtonOnExit;
    _Bool _hideCloseButtonOnExit;
    _Bool _lockCurrentOrientation;
    NSString *_htmlSource;
    unsigned long long _presentationMode;
    unsigned long long _transitionStyle;
    unsigned long long _closeButtonStyle;
    unsigned long long _skipButtonStyle;
    NSNumber *_videoCloseDelay;
    NSNumber *_closeDelay;
    NSNumber *_mraidCloseDelay;
    NSURL *_muteImageURL;
    NSURL *_unmuteImageURL;
    NSDictionary *_storeKitParameters;
    NSString *_videoButtonHTMLSource;
    ALVideoButtonProperties *_videoButtonProperties;
    unsigned long long _supportedInterfaceOrientations;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool allowsInlineMediaPlayback; // @synthesize allowsInlineMediaPlayback=_allowsInlineMediaPlayback;
@property(nonatomic) _Bool closeButtonHidden; // @synthesize closeButtonHidden=_closeButtonHidden;
@property(nonatomic) unsigned long long closeButtonStyle; // @synthesize closeButtonStyle=_closeButtonStyle;
@property(retain, nonatomic) NSNumber *closeDelay; // @synthesize closeDelay=_closeDelay;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
@property(nonatomic) _Bool hideCloseButtonOnExit; // @synthesize hideCloseButtonOnExit=_hideCloseButtonOnExit;
@property(nonatomic) _Bool hideVideoCloseButtonOnExit; // @synthesize hideVideoCloseButtonOnExit=_hideVideoCloseButtonOnExit;
@property(retain, nonatomic) NSString *htmlSource; // @synthesize htmlSource=_htmlSource;
@property(readonly, nonatomic) unsigned long long iTunesIdentifier; // @dynamic iTunesIdentifier;
- (id)init;
- (_Bool)isEqualToAd:(id)arg1;
@property(nonatomic) _Bool lockCurrentOrientation; // @synthesize lockCurrentOrientation=_lockCurrentOrientation;
@property(nonatomic) _Bool mediaPlaybackRequiresUserAction; // @synthesize mediaPlaybackRequiresUserAction=_mediaPlaybackRequiresUserAction;
@property(retain, nonatomic) NSNumber *mraidCloseDelay; // @synthesize mraidCloseDelay=_mraidCloseDelay;
@property(retain, nonatomic) NSURL *muteImageURL; // @synthesize muteImageURL=_muteImageURL;
@property(readonly, nonatomic) _Bool opensInStoreKit; // @dynamic opensInStoreKit;
@property(nonatomic) unsigned long long presentationMode; // @synthesize presentationMode=_presentationMode;
@property(nonatomic) unsigned long long skipButtonStyle; // @synthesize skipButtonStyle=_skipButtonStyle;
@property(retain, nonatomic) NSDictionary *storeKitParameters; // @synthesize storeKitParameters=_storeKitParameters;
@property(nonatomic) unsigned long long supportedInterfaceOrientations; // @synthesize supportedInterfaceOrientations=_supportedInterfaceOrientations;
@property(nonatomic) unsigned long long transitionStyle; // @synthesize transitionStyle=_transitionStyle;
@property(retain, nonatomic) NSURL *unmuteImageURL; // @synthesize unmuteImageURL=_unmuteImageURL;
@property(copy, nonatomic) NSString *videoButtonHTMLSource; // @synthesize videoButtonHTMLSource=_videoButtonHTMLSource;
@property(retain, nonatomic) ALVideoButtonProperties *videoButtonProperties; // @synthesize videoButtonProperties=_videoButtonProperties;
@property(retain, nonatomic) NSNumber *videoCloseDelay; // @synthesize videoCloseDelay=_videoCloseDelay;
@property _Bool videoStream; // @synthesize videoStream=_videoStream;

@end

