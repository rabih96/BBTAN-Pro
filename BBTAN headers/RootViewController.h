//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

@class AdmobCommunicatorIOS, GSCommunicatorIOS, InAppCommunicatorIOS, UIView;

@interface RootViewController : UIViewController
{
    AdmobCommunicatorIOS *admobCommunicator;
    GSCommunicatorIOS *gsCommunicator;
    InAppCommunicatorIOS *inappCommunicator;
    UIView *leftView;
    UIView *rightView;
}

- (void)CreateiPadBG;
- (void)FadeiPadBG;
- (void)HideiPadBG;
- (void)ShowiPadBG;
- (void)callAnalytics;
- (void)dealloc;
- (void)didReceiveMemoryWarning;
- (void)didRotateFromInterfaceOrientation:(long long)arg1;
- (id)getAdmobCommunicator;
- (id)getGSCommunicator;
- (id)getInAppCommunicaotr;
- (void)initAnalytics;
- (void)initCommunicator;
- (_Bool)prefersStatusBarHidden;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewDidUnload;

@end
