//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class UIView, UIViewController;

@interface GADAnimationContext : NSObject
{
    UIViewController *_animatedViewController;
    UIView *_draggableViewSnapshot;
    struct CGRect _animatedViewStartFrame;
    struct CGRect _animatedViewEndFrame;
    struct CGRect _draggableViewStartFrame;
    struct CGRect _draggableViewEndFrame;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController *animatedViewController; // @synthesize animatedViewController=_animatedViewController;
@property(nonatomic) struct CGRect animatedViewEndFrame; // @synthesize animatedViewEndFrame=_animatedViewEndFrame;
@property(nonatomic) struct CGRect animatedViewStartFrame; // @synthesize animatedViewStartFrame=_animatedViewStartFrame;
@property(nonatomic) struct CGRect draggableViewEndFrame; // @synthesize draggableViewEndFrame=_draggableViewEndFrame;
@property(retain, nonatomic) UIView *draggableViewSnapshot; // @synthesize draggableViewSnapshot=_draggableViewSnapshot;
@property(nonatomic) struct CGRect draggableViewStartFrame; // @synthesize draggableViewStartFrame=_draggableViewStartFrame;

@end
