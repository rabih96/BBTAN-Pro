//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGFunctionCallImplementation.h"

@class TAGRuntime;

@interface TAGEventMacro : TAGFunctionCallImplementation
{
    TAGRuntime *_runtime;
}

+ (id)functionId;
- (void).cxx_destruct;
- (id)evaluate:(id)arg1;
- (id)initWithRuntime:(id)arg1;
- (_Bool)isCacheable;
@property(readonly) __weak TAGRuntime *runtime; // @synthesize runtime=_runtime;

@end

