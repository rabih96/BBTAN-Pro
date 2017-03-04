//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCharacterSet, NSObject<OS_dispatch_queue>;

@interface GADCharacterSets : NSObject
{
    NSObject<OS_dispatch_queue> *_lockQueue;
    NSCharacterSet *_characterDelimitedSet;
    NSCharacterSet *_spaceDelimitedSet;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(readonly, copy) NSCharacterSet *characterDelimitedSet;
- (id)init;
@property(readonly, copy) NSCharacterSet *spaceDelimitedSet;
- (void)updateCharacterSets;

@end

