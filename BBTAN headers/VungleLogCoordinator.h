//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface VungleLogCoordinator : NSObject
{
    NSMutableArray *_loggers;
}

- (void).cxx_destruct;
- (void)attachLogger:(id)arg1;
- (void)detachLogger:(id)arg1;
- (id)init;
- (void)log:(id)arg1;
@property(retain, nonatomic) NSMutableArray *loggers; // @synthesize loggers=_loggers;

@end

