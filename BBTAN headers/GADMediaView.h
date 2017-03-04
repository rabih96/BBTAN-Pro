//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "GADMediaContentDelegate.h"

@class GADMediaContent, NSString;

@interface GADMediaView : UIView <GADMediaContentDelegate>
{
    UIView *_mediaView;
    GADMediaContent *_mediaContent;
}

- (void).cxx_destruct;
- (void)didMoveToWindow;
- (struct CGSize)intrinsicContentSize;
- (void)mediaContent:(id)arg1 didLoadVideoWithSize:(struct CGSize)arg2;
- (void)setMediaContent:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

