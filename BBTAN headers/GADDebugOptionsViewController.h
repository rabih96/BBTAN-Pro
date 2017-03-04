//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "SFSafariViewControllerDelegate.h"
#import "UIAlertViewDelegate.h"

@class NSString, NSURL, UIAlertView, UIButton;

@interface GADDebugOptionsViewController : UIViewController <UIAlertViewDelegate, SFSafariViewControllerDelegate>
{
    NSString *_adDebugDialogString;
    UIAlertView *_creativeInformationAlertView;
    UIAlertView *_debugOptionsAlertView;
    UIAlertView *_statusAlertView;
    NSURL *_debugDeviceLinkingURL;
    UIButton *_closeButton;
    _Bool _debugSignalStatusFetchInProgress;
    _Bool _inAppPreviewTokenFetchInProgreen;
    NSString *_adUnitID;
    _Bool _shouldEnableInAppPreview;
    _Bool _shouldEnableDebugSignal;
    id <GADDebugOptionsViewControllerDelegate> _delegate;
}

+ (id)debugOptionsViewControllerWithAdUnitID:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *adDebugDialogString; // @synthesize adDebugDialogString=_adDebugDialogString;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)closeButtonPressed;
- (void)createDeviceIdentifierAndStartDeviceLinking;
- (void)creativeInfoAlertViewClickedButtonAtIndex:(long long)arg1;
- (id)debugDeviceQueryParameters;
- (void)debugOptionsAlertViewClickedButtonAtIndex:(long long)arg1;
- (void)debugSignalStatusReceivedResponse:(id)arg1 data:(id)arg2;
- (id)debugURLRequestForString:(id)arg1;
@property(nonatomic) __weak id <GADDebugOptionsViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)finishedDebugFlow;
- (void)inAppPreviewSignalStatusReceivedResponse:(id)arg1 data:(id)arg2;
- (id)init;
- (id)initWithAdUnitID:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)safariViewControllerDidFinish:(id)arg1;
- (void)showAlertViewWithTitle:(id)arg1;
- (void)showCreativeInformationAlertView;
- (void)showDebugOptionsAlertView;
- (void)showFeatureNotEnabledAlertView;
- (void)showSystemErrorAlertView;
- (void)startDebugSignalLinking;
- (void)startDeviceLinking;
- (void)startInAppPreviewLinking;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

