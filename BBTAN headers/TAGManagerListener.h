//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TAGDataLayerListener.h"

@class NSString, TAGManager;

@interface TAGManagerListener : NSObject <TAGDataLayerListener>
{
    TAGManager *_tagManager;
}

- (void).cxx_destruct;
- (void)changed:(id)arg1;
- (id)initWithTagManager:(id)arg1;
@property(retain, nonatomic) TAGManager *tagManager; // @synthesize tagManager=_tagManager;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

