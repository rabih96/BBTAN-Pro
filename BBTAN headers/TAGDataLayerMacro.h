//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TAGFunctionCallImplementation.h"

@class TAGDataLayer;

@interface TAGDataLayerMacro : TAGFunctionCallImplementation
{
    TAGDataLayer *_dataLayer;
}

+ (id)defaultValueKey;
+ (id)functionId;
+ (id)nameKey;
- (void).cxx_destruct;
@property(readonly) TAGDataLayer *dataLayer; // @synthesize dataLayer=_dataLayer;
- (id)evaluate:(id)arg1;
- (id)initWithDataLayer:(id)arg1;
- (_Bool)isCacheable;

@end

